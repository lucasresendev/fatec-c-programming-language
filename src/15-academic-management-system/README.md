<div align="center">

  🇧🇷 **[Versão em Português](README.pt-BR.md)**
  <br>

  # ⚙️ Academic Management System (`academic_management_system.c`)

</div>

> **Origin:** Class 12 (User-Defined Types: `struct` & `typedef`) & Class 13 (File Handling & Data Persistence: `FILE *`, `fopen`, `fprintf`, `fscanf`, `fclose`)  
> **Topic:** Structs (struct and typedef), Reading and Writing Files (FILE *), and Saving to .txt

---

## 🎯 Problem Statement

Build an interactive terminal **Academic Management System** capable of registering and listing students (`id` and `name`) in memory using `struct` and `typedef`, generating and reading text reports (`report.txt`), and preserving registered student data across program runs by saving files on disk (`total.txt`, `ids.txt`, and `names.txt`).

### 🔄 Evolution Across Classes 12 and 13

#### 1. Class 12: User-Defined Types (`struct` & `typedef`)
- **Classroom Progression:** We began by writing the student registry with parallel arrays (`int ids[10]` and `char names[10][15]`), which left student fields split across disconnected memory arrays. We then upgraded to `struct STUDENT` so each student's `id` and `name` are kept together in a single record, adding `typedef struct STUDENT STUDENT;` to declare student variables cleanly without having to type `struct` every time.
- **My Implementation in Class 12:**
  - Added a continuous registration loop (`Do you want to continue adding students? (y/n): `) with buffer clearing using `scanf(" %c", &continue_adding)`, allowing multiple students to be added without returning to the main menu after each entry.
  - Increased capacity to `#define MAX 100` with boundary checks and a friendly message when the registry is empty (`No students registered yet.`).

#### 2. Class 13: File Handling & Data Persistence (`FILE *`, `fopen`, `fprintf`, `fscanf`, `fclose`)
- **Classroom Progression:** Until Class 12, all registered students existed only in RAM and were lost as soon as the terminal closed. In Class 13, the professor introduced text file manipulation using `FILE *pointer`, opening modes `"wt"` (write text) and `"rt"` (read text), `fprintf`, `fscanf`, and `fclose`. We also compared reading with `%s` (which stops at the first space) against `%[^\n]` (which reads the full line including spaces until the newline).
- **Exercise 1 (Report Generation and Reading in Option 3):** Added Option `3) Save and read report` to write registered students to `report.txt` and immediately read the file back to display it on screen. In my code, I used `continue` instead of `break` on error checks inside the menu (to avoid accidentally exiting the outer loop) and placed `fclose(pointer)` only when the file opened successfully.
- **Exercise 2 (Saving to Disk & Line-by-Line Report):**
  - **On Startup (`"rt"`):** The program attempts to open `total.txt` to restore `total_students`, then loops through `ids.txt` and `names.txt` to rebuild the in-memory array in RAM before showing the menu.
  - **In Option 3 (`report.txt`):** Writes one student per line and reads each record back using `fscanf(pointer, " %[^\n]", string)`, where the leading space consumes the leftover Enter from prior input.
  - **On Exit (`"wt"` in Option 4):** Writes the updated student count to `total.txt`, all IDs to `ids.txt`, and all names to `names.txt` before closing.

---

## 💻 Source Code

The full implementation is available directly in [`academic_management_system.c`](academic_management_system.c).

---

## 🖥️ Terminal Output

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

When reopening the program in a new run, the saved files are automatically loaded back into RAM:

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

## 💡 Key Concepts Applied

- **Structs with `struct` and `typedef` (Class 12):** Bundling `int id` and `char name[50]` together in the same `STUDENT` record, replacing fragile parallel arrays.
- **File Streams (`FILE *`, `fopen`, `fclose`, Class 13):** Managing text streams in write (`"wt"`) and read (`"rt"`) modes, verifying that `pointer != NULL` before performing file operations.
- **Reading Names with Spaces (`" %[^\n]"`, Class 13):** Unlike `%s`, which stops at whitespace, `%[^\n]` reads all characters up to the newline. The leading space skips the leftover Enter from prior input.
- **Saving to Files on Disk (Class 13):** Writing data to distinct text files (`total.txt`, `ids.txt`, and `names.txt`) when exiting the application, allowing the array in RAM to be reconstructed on startup.

---

## 🚀 How to Run

```bash
# Compile and run with GCC
mkdir -p dist && gcc -Wall -O2 src/15-academic-management-system/academic_management_system.c -o dist/academic_management_system && ./dist/academic_management_system

# Or compile and run with Clang (macOS default)
mkdir -p dist && clang -Wall -O2 src/15-academic-management-system/academic_management_system.c -o dist/academic_management_system && ./dist/academic_management_system
```
