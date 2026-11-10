<div align="center">

  🇧🇷 **[Versão em Português](README.pt-BR.md)**
  <br>

  # 🏆 CPF Validator: Final Course Assessment (`cpf_validator.c`)

  [![YouTube Assessment Video](https://img.shields.io/badge/YouTube-Watch_5--Min_Code_Explanation-FF0000?style=for-the-badge&logo=youtube&logoColor=white)](https://youtu.be/MwPf94gYgpY)

</div>

> **Origin:** Class 14 (Final Course Assessment and Practical Exam)  
> **Topic:** CPF Validation, Pointers (& and *), char to int Conversion, and Functions  
> **Video Presentation (English):** [Assessment: Code Explanation - Introduction to the C Programming Language | Lucas Resende](https://youtu.be/MwPf94gYgpY)

---

## 🎯 Problem Statement

For the **Final Assessment** of the *Introduction to the C Programming Language* course, Professor Luciano Gonçalves de Carvalho asked each student to build a C program solving a real-world problem different from the ones covered in class, and to record a video of up to 5 minutes in English explaining the code line by line.

I chose to build a **Brazilian CPF Validator** from scratch. In Brazil, the CPF (*Cadastro de Pessoas Físicas*) is the national individual taxpayer ID number (similar to a Social Security Number in the US), used in everyday life to open bank accounts, shop online, or enroll at university. It has 11 digits formatted as `xxx.xxx.xxx-xx`, where the first 9 digits are the base number and the last 2 digits (`-xx`) are check digits calculated from the first 9.

Since this is a terminal program in C, validating a CPF here does not mean querying a government database to see if a person exists. Instead, the goal is to perform the same validation used by registration forms and websites to detect typing mistakes or fake numbers: the program accepts the CPF with punctuation (`xxx.xxx.xxx-xx`) or only numbers (`xxxxxxxxxxx`), removes non-numeric characters, checks if there are 11 digits, blocks sequences where all digits are identical (such as `111.111.111-11`, which pass the math formula by coincidence but are invalid), and calculates both check digits using a single function (`check_CPF`) to see if they match the typed CPF.

### 🧮 How the CPF Calculation Works

1. **First Check Digit (10th digit, index `9`):**
   - Multiplies the first 9 digits by weights `10, 9, 8, 7, 6, 5, 4, 3, 2` and adds up the results (`weighted_sum`).
   - Calculates the division remainder by 11 using `remainder = weighted_sum % 11`.
   - If the remainder is less than 2 (`remainder < 2`), the expected check digit is `0`. Otherwise, it is `11 - remainder`.
2. **Second Check Digit (11th digit, index `10`):**
   - Performs the same calculation using the first 10 digits (the 9 initial digits plus the 1st check digit), multiplying by weights `11, 10, 9, 8, 7, 6, 5, 4, 3, 2`.
   - Calculates `remainder = weighted_sum % 11`. If it is less than 2, the expected 2nd check digit is `0`, otherwise it is `11 - remainder`.
3. **A Single Function for Both Digits (`check_CPF`):**
   - Because weights always decrease down to `2` at the last position, I used the formula `weight = num_digits + 1 - i` inside the `for` loop. When passing `num_digits = 9`, the weight starts at `10` and the function compares the result with `CPF_digits[9]`. When passing `num_digits = 10`, the weight starts at `11` and compares with `CPF_digits[10]`.

---

## 💻 Source Code

The full implementation is available directly in [`cpf_validator.c`](cpf_validator.c).

---

## 🖥️ Terminal Output

### Scenario A: Valid Formatted CPF (`xxx.xxx.xxx-xx`)
```text
Enter a CPF to be validated: 529.982.247-25
This CPF is valid.
```

### Scenario B: Wrong Digit Count Followed by Valid Unformatted CPF
```text
Enter a CPF to be validated: 12345

Error: The CPF must contain exactly 11 numeric digits.

Enter a CPF to be validated: 52998224725
This CPF is valid.
```

### Scenario C: Repeated Digits Rejection (`111.111.111-11`)
```text
Enter a CPF to be validated: 111.111.111-11

This CPF is invalid.
```

### Scenario D: Invalid Check Digit
```text
Enter a CPF to be validated: 529.982.247-20

This CPF is invalid.
```

---

## 💡 Key Concepts Applied

- **Pointers (`&` and `*`):** In `clean_CPF(CPF, CPF_digits, &input_digits_size)`, I pass the address of `input_digits_size` with `&` and modify it directly using `*input_digits_size`. This allows the function to fill the cleaned digit array and update the digit counter without global variables.
- **Converting Characters to Numbers (`input[i] - '0'`):** Filters characters between `'0'` and `'9'` and subtracts `'0'` (code 48) to get the integer value from `0` to `9`.
- **Reusing the `check_CPF` Function:** Instead of writing two separate functions with duplicate code, a single routine validates both check digits by taking the number of digits (`9` or `10`) as an argument.
- **Return Values 0 and 1:** The program uses `0` to signal success and `1` to signal that the CPF is invalid or that an error occurred.

---

## 🚀 How to Run

```bash
# Compile and run with GCC
mkdir -p dist && gcc -Wall -O2 src/16-cpf-validator/cpf_validator.c -o dist/cpf_validator && ./dist/cpf_validator

# Or compile and run with Clang (macOS default)
mkdir -p dist && clang -Wall -O2 src/16-cpf-validator/cpf_validator.c -o dist/cpf_validator && ./dist/cpf_validator
```
