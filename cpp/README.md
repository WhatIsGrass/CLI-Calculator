## How to run

### Prerequisites

Before you can run this calculator, ensure you have the following installed on your system:
- C++ Compiler (such as GCC, Clang, or MSVC)
- Make (optional, for automated builds)

### Getting Started

These instructions will get you a copy of the project up and running on your local machine for development and testing purposes.

### Cloning the Repository

First, clone the repository to your local machine using Git:

```bash
git clone https://github.com/WhatIsGrass/CLI-Calculator.git
cd CLI-Calculator\cpp
```

### Compiling the Program

You can compile the program using a C++ compiler. For example, if you are using `g++`, you can compile the program as follows:

```bash
g++ -o calculator main.cpp
```

This command will compile `main.cpp` and create an executable named `calculator`.

### Running the Program

After compiling the program, you can run it directly from the command line:

```bash
./calculator
```

### Usage

When you run the program, it will prompt you to enter whether the numbers are floats or integers and then to input the numbers. After that, you'll select the type of arithmetic operation you wish to perform. The calculator will display the result of the operation.

#### Example

```
Is your first number a float? Enter 1 for true, 0 for false: 0
Enter an integer number: 10
Is your second number a float? Enter 1 for true, 0 for false: 0
Enter an integer number: 5
Enter the operation you want to perform (+, -, *, /, %): +
Result: 15
```