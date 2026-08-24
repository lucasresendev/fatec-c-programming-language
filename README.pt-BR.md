<div align="center">

  🇺🇸 **[English Version](README.md)**
  <br>

  # ⚙️ Introdução à Linguagem de Programação C | Fatec & ARInter

  ### **Práticas, Programação de Sistemas e Gerenciamento de Memória em C Padrão**

  [![C](https://img.shields.io/badge/C-A8B9CC?style=for-the-badge&logo=c&logoColor=black)](https://en.cppreference.com/w/c)
  [![GCC](https://img.shields.io/badge/GCC-00599C?style=for-the-badge&logo=gnu&logoColor=white)](https://gcc.gnu.org/)
  [![Clang](https://img.shields.io/badge/Clang-000000?style=for-the-badge&logo=llvm&logoColor=white)](https://clang.llvm.org/)
  [![ARInter - CPS](https://img.shields.io/badge/ARInter-CPS-003366?style=for-the-badge)](https://arinter.cps.sp.gov.br/)
  [![Fatec Taubaté](https://img.shields.io/badge/Fatec-Taubaté-B22222?style=for-the-badge)](https://fatectaubate.edu.br/)

</div>

---

## 🎯 Sobre o Curso

Repositório dedicado ao registro de práticas laboratoriais e exercícios do curso **Introduction to the C Programming Language**, iniciativa de internacionalização promovida pela **Assessoria de Relações Internacionais (ARInter - CEETEPS)** em parceria com a **Fatec Taubaté**.

- **Idioma de Ensino:** 100% em Língua Inglesa (aulas síncronas e colaboração com estudantes internacionais).
- **Carga Horária:** 40 horas no total (20 encontros síncronos semanais).
- **Objetivo:** Solucionar problemas computacionais por meio da lógica de programação e do desenvolvimento de software em C de alto desempenho.

### Frentes de Estudo
- **Fundamentos de Memória e Hardware:** Representação de dados, tamanho em bytes (`sizeof`), endereçamento de memória e aritmética de ponteiros.
- **Lógica Estruturada:** Modularização de código utilizando a biblioteca padrão (`stdio.h`, `stdlib.h`, `string.h`), estruturas de controle e funções.
- **Modelagem de Dados e Persistência:** Tipos definidos pelo usuário (`struct`, `typedef`) e manipulação de arquivos em disco.

---

## 🗺️ Cronograma e Ementa do Curso

| Aula | Conteúdo Programático | Status |
| :---: | :--- | :---: |
| 01 | Introdução à Programação em C e Pipeline de Compilação | ✅ Concluído |
| 02 | Declaração de Variáveis e Constantes, Tipos Primitivos e Entrada/Saída | ✅ Concluído |
| 03 | Estruturas de Decisão: Parte 1 (`if`, `else`) | ⏳ Em breve |
| 04 | Estruturas de Decisão: Parte 2 (`switch`, condicionais aninhadas) | ⏳ Em breve |
| 05 | Estruturas de Repetição: Parte 1 (`while`) | ⏳ Em breve |
| 06 | Estruturas de Repetição: Parte 2 (`do-while`, `for`) | ⏳ Em breve |
| 07 | Estruturas de Repetição: Parte 3 (laços aninhados e controle de fluxo) | ⏳ Em breve |
| 08 | Trabalho Prático 1 | ⏳ Em breve |
| 09 | Vetores (Arrays Unidimensionais) | ⏳ Em breve |
| 10 | Manipulação de Strings | ⏳ Em breve |
| 11 | Matrizes (Arrays Multidimensionais) | ⏳ Em breve |
| 12 | Ponteiros: Parte 1 (Endereçamento e Desreferenciação) | ⏳ Em breve |
| 13 | Ponteiros: Parte 2 (Ponteiros com Vetores e Funções) | ⏳ Em breve |
| 14 | Funções e Modularização | ⏳ Em breve |
| 15 | Recursividade | ⏳ Em breve |
| 16 | Tipos Definidos pelo Usuário (`struct`, `typedef`) | ⏳ Em breve |
| 17 | Manipulação de Arquivos e Streams | ⏳ Em breve |
| 18 | Trabalho Prático 2 | ⏳ Em breve |
| 19 | Revisão e Avaliação do Curso | ⏳ Em breve |
| 20 | Vista de Provas e Feedback Final | ⏳ Em breve |

---

## 📝 Índice de Exercícios

| # | Exercício | Código & Documentação | Conceitos Principais |
| :-: | :--- | :--- | :--- |
| 01 | **Tipos Básicos, E/S e Tamanho de Memória** | [`src/01-primitive-types-and-io/`](src/01-primitive-types-and-io/) | Tipos primitivos (`char`, `int`, `float`, `long`, `double`), operador `sizeof()`, `%zu`, `printf()` e `scanf()` formatados. |

---

## 📂 Estrutura do Projeto

```text
.
├── src/
│   └── 01-primitive-types-and-io/
│       ├── primitive_types_and_io.c
│       ├── README.md
│       └── README.pt-BR.md
│
├── .gitignore
├── README.md           # Documentação em Inglês
└── README.pt-BR.md     # Documentação em Português
```

---

## 🚀 Como Executar

### Pré-requisitos
- Compilador C instalado: [GCC](https://gcc.gnu.org/) ou [Clang](https://clang.llvm.org/) (padrão no macOS).

### Compilação e Execução de Exercícios
Compile e execute diretamente a partir da raiz do repositório:

```bash
# Exercício 1: Tipos Básicos, E/S e Tamanho de Memória (GCC)
mkdir -p dist && gcc -Wall -O2 src/01-primitive-types-and-io/primitive_types_and_io.c -o dist/primitive_types_and_io && ./dist/primitive_types_and_io

# Exercício 1: Tipos Básicos, E/S e Tamanho de Memória (Clang no macOS)
mkdir -p dist && clang -Wall -O2 src/01-primitive-types-and-io/primitive_types_and_io.c -o dist/primitive_types_and_io && ./dist/primitive_types_and_io
```

---

## 📚 Bibliografia

- **KERNIGHAN, Brian W.; RITCHIE, Dennis M.** *C Programming Language: ANSI C Version*. 2. ed. Prentice Hall, 1988.
- **GRAHAN, Darrel L.** *C Programming Language: A Step by Step Beginner's Guide to Learn C Programming in 7 Days*. Createspace, 2016.

---

<div align="center">
  Desenvolvido por <b><a href="https://github.com/lucasresendev">Lucas Resende</a></b> 🚀
</div>
