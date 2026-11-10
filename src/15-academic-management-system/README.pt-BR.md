<div align="center">

  🇺🇸 **[English Version](README.md)**
  <br>

  # ⚙️ Sistema de Gerenciamento Acadêmico (`academic_management_system.c`)

</div>

> **Origem:** Aula 12 (Tipos Definidos pelo Usuário: `struct` e `typedef`) e Aula 13 (Manipulação de Arquivos e Persistência de Dados: `FILE *`, `fopen`, `fprintf`, `fscanf`, `fclose`)  
> **Tópico:** Estruturas (struct e typedef), Leitura e Escrita de Arquivos (FILE *) e Salvamento em .txt

---

## 🎯 Enunciado do Problema

Construir um **Sistema de Gerenciamento Acadêmico** interativo no terminal capaz de cadastrar e listar estudantes (`id` e `name`) na memória utilizando `struct` e `typedef`, gerar e ler relatórios em texto (`report.txt`) e preservar todos os alunos cadastrados entre diferentes execuções do programa salvando os dados em arquivos no disco (`total.txt`, `ids.txt` e `names.txt`).

### 🔄 Evolução entre as Aulas 12 e 13

#### 1. Aula 12: Tipos Definidos pelo Usuário (`struct` e `typedef`)
- **Progresso em Aula:** Começamos o exercício usando vetores paralelos (`int ids[10]` e `char names[10][15]`), o que deixava os dados de um mesmo aluno espalhados em arrays separados. Depois, substituímos os vetores por `struct STUDENT` para manter `id` e `name` agrupados no mesmo registro, e adicionamos `typedef struct STUDENT STUDENT;` para simplificar a declaração sem precisar repetir a palavra `struct`.
- **Minha Implementação na Aula 12:**
  - Criei uma repetição de cadastro contínuo (`Do you want to continue adding students? (y/n): `) com limpeza de buffer usando `scanf(" %c", &continue_adding)`, permitindo cadastrar vários alunos em sequência sem voltar ao menu principal após cada registro.
  - Ampliei a capacidade para `#define MAX 100` com verificação de limites e mensagem amigável caso a lista esteja vazia (`No students registered yet.`).

#### 2. Aula 13: Manipulação de Arquivos e Persistência de Dados (`FILE *`, `fopen`, `fprintf`, `fscanf`, `fclose`)
- **Progresso em Aula:** Até a Aula 12, os alunos cadastrados ficavam apenas na memória RAM e eram perdidos ao fechar o terminal. Na Aula 13, o professor ensinou manipulação de arquivos de texto com `FILE *pointer`, os modos `"wt"` (gravação de texto) e `"rt"` (leitura de texto), `fprintf`, `fscanf` e `fclose`. Também comparamos a leitura com `%s` (que interrompe a leitura no primeiro espaço) e o formato `%[^\n]` (que lê o nome completo com espaços até o final da linha).
- **Exercício 1 (Geração e Leitura de Relatório na Opção 3):** Implementamos a opção `3) Save and read report` para gravar os alunos em `report.txt` e ler o arquivo logo em seguida para exibi-lo na tela. No meu código, usei `continue` em vez de `break` nas validações do menu (para evitar fechar o loop do programa por engano) e coloquei `fclose(pointer)` somente quando o arquivo foi aberto com sucesso.
- **Exercício 2 (Persistência em Disco e Relatório Formatado):**
  - **Inicialização (`"rt"`):** Ao abrir o programa, ele tenta ler `total.txt` para recuperar `total_students`, e depois percorre `ids.txt` e `names.txt` restaurando todos os estudantes na memória RAM antes de exibir o menu.
  - **Opção 3 (`report.txt`):** Grava um aluno por linha e lê cada registro usando `fscanf(pointer, " %[^\n]", string)`, onde o espaço antes de `%[^\n]` descarta o Enter que sobrou da leitura anterior.
  - **Encerramento (`"wt"` na Opção 4):** Grava o total atualizado em `total.txt`, todos os IDs em `ids.txt` e todos os nomes em `names.txt` antes de finalizar.

---

## 💻 Código-Fonte

A implementação completa está disponível diretamente em [`academic_management_system.c`](academic_management_system.c).

---

## 🖥️ Saída no Terminal

```text
==========================
Academic Management System
1) Register students
2) Show all students
3) Save and read report
4) Exit
==========================
Select an option: 1

============================
Student 1
ID: 1
Name: Albert

============================
Do you want to continue adding students? (y/n): y

============================
Student 2
ID: 2
Name: Bruno

============================
Do you want to continue adding students? (y/n): n
Going back to the menu...

==========================
Academic Management System
1) Register students
2) Show all students
3) Save and read report
4) Exit
==========================
Select an option: 3

===============================
1 Albert
2 Bruno
===============================

==========================
Academic Management System
1) Register students
2) Show all students
3) Save and read report
4) Exit
==========================
Select an option: 4

All data saved successfully. Program closed.
```

Ao abrir o programa novamente em uma nova execução, os arquivos salvos são carregados automaticamente para a memória RAM:

```text
Loaded 2 student(s) from files.

==========================
Academic Management System
1) Register students
2) Show all students
3) Save and read report
4) Exit
==========================
Select an option: 2

===============================
Student 1: ID = 1; Name = Albert
Student 2: ID = 2; Name = Bruno
===============================
```

---

## 💡 Principais Conceitos Aplicados

- **Estruturas com `struct` e `typedef` (Aula 12):** Agrupamento de `int id` e `char name[50]` juntos no mesmo registro `STUDENT`, substituindo a fragilidade de manter dois vetores paralelos separados.
- **Manipulação de Arquivos (`FILE *`, `fopen`, `fclose`, Aula 13):** Abertura e fechamento de arquivos de texto nos modos de escrita (`"wt"`) e leitura (`"rt"`), sempre verificando `pointer != NULL` antes de operar sobre o arquivo.
- **Lendo Nomes com Espaço (`" %[^\n]"`, Aula 13):** Diferente de `%s`, que para no primeiro espaço em branco, `%[^\n]` lê todos os caracteres até a quebra de linha. O espaço antes do `%` descarta o Enter que sobrou da leitura anterior.
- **Salvamento em Arquivos no Disco (Aula 13):** Gravação dos dados em múltiplos arquivos (`total.txt`, `ids.txt` e `names.txt`) na hora de fechar o programa, permitindo recarregar todos os registros na memória na próxima inicialização.

---

## 🚀 Como Executar

```bash
# Compilar e executar com GCC
mkdir -p dist && gcc -Wall -O2 src/15-academic-management-system/academic_management_system.c -o dist/academic_management_system && ./dist/academic_management_system

# Ou compilar e executar com Clang (padrão macOS)
mkdir -p dist && clang -Wall -O2 src/15-academic-management-system/academic_management_system.c -o dist/academic_management_system && ./dist/academic_management_system
```
