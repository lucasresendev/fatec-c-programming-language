<div align="center">

  🇺🇸 **[English Version](README.md)**
  <br>

  # ⚙️ Sistema de Gerenciamento Acadêmico (`academic_management_system.c`)

</div>

> **Origem:** Aula 12 (Tipos Definidos pelo Usuário: struct e typedef)  
> **Tópico:** Tipos de Dados Compostos (`struct`), Apelidos de Tipos (`typedef`) e Vetor de Registros

---

## 🎯 Enunciado do Problema

Gerenciar cadastros de estudantes utilizando estruturas compostas (`struct`) e apelidos de tipos (`typedef`) em vez de vetores paralelos separados. Neste exercício, criei um programa de console interativo onde o usuário pode cadastrar matrícula e nome dos alunos em um vetor de estruturas, listar todos os alunos cadastrados ou sair.

### 🏛️ Escopo de Aula vs. Abordagem Autoral / Externa

- **Escopo do Curso na Fatec:** A aula começou mostrando por que guardar dados em vetores separados (`ids[10]` e `names[10]`) pode gerar confusão e perda de sincronismo. O professor então apresentou `struct STUDENT { int id; char name[50]; };` para agrupar as informações de cada aluno em um único registro, e usou `typedef struct STUDENT STUDENT;` para criar um apelido prático e evitar ter que digitar `struct STUDENT` o tempo todo.
- **Minha Extensão Autoral:** No exemplo feito em sala, o programa voltava para o menu principal logo após cadastrar um único aluno e tinha um limite de 10 posições. Na minha versão:
  - Criei uma repetição de cadastro contínuo perguntando `Do you want to continue adding students? (y/n): `, permitindo cadastrar vários alunos seguidos sem precisar voltar ao menu a cada um.
  - Aumentei o limite para `#define MAX_STUDENTS 100` com verificação de capacidade.
  - Adicionei verificação de lista vazia (`No students registered yet.`) antes de exibir os dados.
  - Tratei a limpeza do buffer do teclado com `scanf(" %c", &continue_adding)`.

---

## 💻 Código-Fonte

A implementação completa está disponível diretamente em [`academic_management_system.c`](academic_management_system.c).

---

## 📊 Fluxo e Teste de Mesa

```mermaid
flowchart TD
    Start(["[Início]"]) --> Decl["Declara students[100], total_students = 0, option = 0"]
    Decl --> MenuLoop{"option != 3"}
    MenuLoop -- Sim --> ShowMenu[/"Menu: 1-Cadastrar, 2-Listar, 3-Sair"/]
    ShowMenu --> ReadOpt[/"Entrada: option"/]
    ReadOpt --> CaseOpt{"Avalia option"}
    CaseOpt -- Opção 1 --> RegLoop{"total_students < 100"}
    RegLoop -- Sim --> ReadID[/"Entrada: ID"/] --> ReadName[/"Entrada: Nome"/] --> IncCount["total_students++"]
    IncCount --> CheckCap{"total_students >= 100"}
    CheckCap -- Sim --> MenuLoop
    CheckCap -- Não --> PromptMore[/"Pergunta: Continuar adicionando? (y/n)"/] --> ReadMore[/"Entrada: continue_adding"/]
    ReadMore --> CheckMore{"continue_adding == 'n' ou 'N'"}
    CheckMore -- Sim --> MenuLoop
    CheckMore -- Não --> RegLoop
    RegLoop -- Não --> MenuLoop
    CaseOpt -- Opção 2 --> CheckEmpty{"total_students == 0"}
    CheckEmpty -- Sim --> PrintEmpty[/"Saída: No students registered yet."/] --> MenuLoop
    CheckEmpty -- Não --> LoopList{"i < total_students"}
    LoopList -- Sim --> PrintStudent[/"Saída: Student i: ID e Nome"/] --> IncI["i++"] --> LoopList
    LoopList -- Não --> MenuLoop
    CaseOpt -- Opção 3 --> Goodbye[/"Saída: Mensagem de encerramento"/] --> Finish(["[Fim]"])
    CaseOpt -- Outro --> Invalid[/"Saída: Opção inválida"/] --> MenuLoop
    MenuLoop -- Não --> Finish
```

Teste de mesa na memória RAM para o cadastro de um aluno (`ID = 101, Name = "Lucas"`):

| Passo | Instrução | `option` | `total_students` | `students[0].id` | `students[0].name` | Condição Avaliada | Saída no Terminal |
| :---: | :--- | :---: | :---: | :---: | :---: | :---: | :--- |
| 1 | Inicialização | `0` | `0` | `?` | `?` | - | Exibe menu |
| 2 | Leitura de `option` | `1` | `0` | `?` | `?` | `option == 1` -> Verdadeiro | - |
| 3 | Leitura de `students[0].id` | `1` | `0` | `101` | `?` | - | Solicita `"ID: "` |
| 4 | Leitura de `students[0].name`| `1` | `0` | `101` | `"Lucas\0"` | - | Solicita `"Name: "` |
| 5 | Incremento do contador | `1` | `1` | `101` | `"Lucas\0"` | `total_students >= 100` -> Falso | - |
| 6 | Pergunta de continuidade | `1` | `1` | `101` | `"Lucas\0"` | `continue_adding == 'n'` -> Verdadeiro | `"Returning to menu..."` |
| 7 | Próximo ciclo do menu | `2` | `1` | `101` | `"Lucas\0"` | `option == 2` -> Verdadeiro | - |
| 8 | Listagem dos alunos | `2` | `1` | `101` | `"Lucas\0"` | `total_students == 0` -> Falso | `"Student 1: ID = 101 \| Name = Lucas"` |

---

## 🖥️ Saída no Terminal

```text
================================================================
                   Academic Management System
================================================================
1 - Register students
2 - Show all students
3 - Exit
================================================================

Select an option (1-3): 1

--- Student 1 ---
ID: 101
Name: Lucas
Do you want to continue adding students? (y/n): y

--- Student 2 ---
ID: 102
Name: Alexandre
Do you want to continue adding students? (y/n): n
Returning to the menu...

================================================================
                   Academic Management System
================================================================
1 - Register students
2 - Show all students
3 - Exit
================================================================

Select an option (1-3): 2

================================================================
                        Student List
================================================================
Student 1: ID = 101 | Name = Lucas
Student 2: ID = 102 | Name = Alexandre
================================================================
```

---

## 💡 Principais Conceitos Aplicados

- **Dados Compostos Heterogêneos (`struct`):** Agrupamento de campos de tipos distintos (`int id` e `char name[50]`) dentro de uma entidade lógica única, garantindo integridade de memória e coesão semântica.
- **Definição de Pseudônimos de Tipo (`typedef`):** Criação do alias `STUDENT` para `struct STUDENT`, eliminando a necessidade de repetir a palavra-chave `struct` nas declarações.
- **Vetor de Estruturas:** Alocação de blocos contíguos de memória (`STUDENT students[MAX_STUDENTS]`), acessíveis através de índices convencionais e do operador ponto (`students[i].id`).
- **Entrada Interativa Contínua:** Implementação de loop interno de continuidade para agilizar a inclusão de registros com limpeza defensiva do buffer de teclado.

---

## 🚀 Como Executar

### Compilação Isolada

```bash
mkdir -p dist && clang -Wall -O2 src/15-academic-management-system/academic_management_system.c -o dist/academic_management_system && ./dist/academic_management_system
```

### Execução pelo Menu Consolidado

```bash
mkdir -p dist && clang -Wall -O2 src/00-consolidated-menu/consolidated_menu.c -o dist/consolidated_menu -lm && ./dist/consolidated_menu
```
