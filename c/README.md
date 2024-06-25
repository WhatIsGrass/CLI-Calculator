## How to Run

### Prerequisites
- Ensure you have `gcc` (GNU Compiler Collection) installed on your system.

### Build Instructions

1. **Clone the repository:**
   ```bash
   git clone https://github.com/WhatIsGrass/CLI-Calculator.git
   cd CLI-Calculator\c
   ```

2. **Compile the program:**
   ```bash
   gcc -o calculator main.c addition.c subtraction.c multiplication.c division.c modulus.c -lm
   ```
   - `-o calculator`: Specifies the output executable name as `calculator`.
   - `main.c`, `addition.c`, `subtraction.c`, `multiplication.c`, `division.c`, `modulus.c`: Source files to compile.
   - `-lm`: Links the math library for floating-point arithmetic (`-lm` is required to link `libm`).

### Running the Program

- After successfully compiling the program, you can run it using:
  ```bash
  ./calculator
  ```

### Usage

- Follow the prompts to specify whether each number is a float or integer.
- Enter the respective numbers as prompted.
- Choose an operation (1 for Addition, 2 for Subtraction, etc.).
- The program will display the result of the selected operation.

### Example

```bash
$ ./calculator
Is the first number a float? (True/False): True
Enter the first float number: 102.5
Is the second number a float? (True/False): False
Enter the second integer number: 1992
Choose an operation:
1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Modulus
Enter your choice (1-5): 1
Result: 2094.50
```

### Notes

- Ensure correct input format (`True`/`False` for float determination).
- Handle division by zero or modulus by zero gracefully (program provides error message).