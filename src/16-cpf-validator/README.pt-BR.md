<div align="center">

  🇺🇸 **[English Version](README.md)**
  <br>

  # 🏆 Validador de CPF: Avaliação Final do Curso (`cpf_validator.c`)

  [![YouTube Assessment Video](https://img.shields.io/badge/YouTube-Assistir_Explicação_em_Inglês_(5_min)-FF0000?style=for-the-badge&logo=youtube&logoColor=white)](https://youtu.be/MwPf94gYgpY)

</div>

> **Origem:** Aula 14 (Avaliação Final e Prova Prática do Curso)  
> **Tópico:** Validação de CPF, Ponteiros (& e *), Conversão de char para int e Funções  
> **Apresentação em Vídeo (em Inglês):** [Assessment: Code Explanation - Introduction to the C Programming Language | Lucas Resende](https://youtu.be/MwPf94gYgpY)

---

## 🎯 Enunciado do Problema

Como **Avaliação Final (Prova Prática)** do curso *Introduction to the C Programming Language*, o professor Luciano Gonçalves de Carvalho solicitou que cada aluno desenvolvesse um programa em C resolvendo um problema diferente dos trabalhados em sala e gravasse um vídeo de até 5 minutos em inglês explicando o código linha por linha.

Escolhi desenvolver do zero um **Validador de CPF (Cadastro de Pessoas Físicas)**. O CPF é o documento de identificação fiscal usado no Brasil (parecido com o *Social Security Number* dos EUA) e possui 11 dígitos no formato `xxx.xxx.xxx-xx`, sendo 9 dígitos base seguidos por 2 dígitos verificadores (`-xx`) calculados a partir dos 9 primeiros.

Como este é um programa de terminal em C, validar um CPF aqui não significa consultar a base de dados do governo para saber se a pessoa existe. O escopo do programa é fazer a mesma verificação que os formulários e sites fazem quando digitamos o CPF para pegar erros de digitação ou números inventados: ele aceita o CPF com pontuação (`xxx.xxx.xxx-xx`) ou só números (`xxxxxxxxxxx`), ignora caracteres que não são dígitos, confere se foram digitados 11 números, barra sequências com todos os dígitos iguais (como `111.111.111-11`, que passariam na conta por coincidência mas são inválidas) e calcula os dois dígitos verificadores reaproveitando uma única função (`check_CPF`) para conferir se batem com os que foram digitados.

### 🧮 Como Funciona o Cálculo do CPF

1. **Primeiro Dígito Verificador (10º dígito, posição `9`):**
   - Multiplica os 9 primeiros dígitos pelos pesos `10, 9, 8, 7, 6, 5, 4, 3, 2` e soma os resultados (`weighted_sum`).
   - Calcula o resto da divisão por 11 com `remainder = weighted_sum % 11`.
   - Se o resto for menor que 2 (`remainder < 2`), o dígito verificador esperado é `0`. Caso contrário, é `11 - remainder`.
2. **Segundo Dígito Verificador (11º dígito, posição `10`):**
   - Faz a mesma conta usando os 10 primeiros dígitos (os 9 iniciais mais o 1º dígito verificador), multiplicando pelos pesos `11, 10, 9, 8, 7, 6, 5, 4, 3, 2`.
   - Calcula `remainder = weighted_sum % 11`. Se for menor que 2, o 2º dígito esperado é `0`, senão é `11 - remainder`.
3. **Uma Única Função para os Dois Dígitos (`check_CPF`):**
   - Como o peso sempre diminui até chegar em `2` na última posição, usei a conta `weight = num_digits + 1 - i` dentro do `for`. Quando passo `num_digits = 9`, o peso começa em `10` e a função compara o resultado com `CPF_digits[9]`. Quando passo `num_digits = 10`, o peso começa em `11` e ela compara com `CPF_digits[10]`.

---

## 💻 Código-Fonte

A implementação completa está disponível diretamente em [`cpf_validator.c`](cpf_validator.c).

---

## 🖥️ Saída no Terminal

### Cenário A: CPF Formatado Válido (`xxx.xxx.xxx-xx`)
```text
Enter a CPF to be validated: 529.982.247-25
This CPF is valid.
```

### Cenário B: Quantidade Incorreta de Dígitos Seguida de CPF Sem Pontuação Válido
```text
Enter a CPF to be validated: 12345

Error: The CPF must contain exactly 11 numeric digits.

Enter a CPF to be validated: 52998224725
This CPF is valid.
```

### Cenário C: Rejeição de Todos os Dígitos Iguais (`111.111.111-11`)
```text
Enter a CPF to be validated: 111.111.111-11

This CPF is invalid.
```

### Cenário D: Dígito Verificador Inválido
```text
Enter a CPF to be validated: 529.982.247-20

This CPF is invalid.
```

---

## 💡 Principais Conceitos Aplicados

- **Ponteiros (`&` e `*`):** Na função `clean_CPF(CPF, CPF_digits, &input_digits_size)`, passo o endereço de memória de `input_digits_size` com `&` e altero o valor diretamente na memória usando `*input_digits_size`. Isso permite preencher o vetor limpo e atualizar a contagem de dígitos sem usar variáveis globais.
- **Conversão de Caractere para Número (`input[i] - '0'`):** Filtra os caracteres entre `'0'` e `'9'` e subtrai o valor do caractere `'0'` (código 48) para obter o número inteiro de `0` a `9`.
- **Reaproveitamento da Função `check_CPF`:** Em vez de escrever duas funções quase idênticas, uma única rotina valida tanto o primeiro quanto o segundo dígito verificador recebendo a quantidade de dígitos (`9` ou `10`).
- **Retorno 0 e 1 nas Funções:** O programa usa `0` para indicar que a validação deu certo e `1` para indicar que o CPF é inválido ou houve erro na digitação.

---

## 🚀 Como Executar

```bash
# Compilar e executar com GCC
mkdir -p dist && gcc -Wall -O2 src/16-cpf-validator/cpf_validator.c -o dist/cpf_validator && ./dist/cpf_validator

# Ou compilar e executar com Clang (padrão macOS)
mkdir -p dist && clang -Wall -O2 src/16-cpf-validator/cpf_validator.c -o dist/cpf_validator && ./dist/cpf_validator
```
