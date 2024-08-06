# Calculator Project

### Illinois Institute of Technology

## Project Description
This project is a simple calculator application implemented in C. It supports various arithmetic operations such as addition, subtraction, multiplication, division, reciprocal, exponentiation, and factorial calculations. The calculator uses functions to handle these operations and ensures error handling for cases like division by zero and factorial of negative numbers.

## Features
- Addition (`+`)
- Subtraction (`-`)
- Multiplication (`*`)
- Division (`/`)
- Reciprocal (`1/X`)
- Square (`X^2`)
- Power (`X^Y`)
- Factorial (`N!`)
- User-friendly menu for selecting operations

## Prerequisites
- A C compiler (e.g., GCC)
- Basic understanding of C programming

## Installation

1. **Clone the repository:**
    ```sh
    git clone https://github.com/yourusername/calculator-project.git
    cd calculator-project
    ```

2. **Compile the program:**
    ```sh
    gcc -o calculator calculator.c -lm
    ```

## Usage

1. **Run the Program:**
    ```sh
    ./calculator
    ```

2. **Interact with the Menu:**
    - Follow the on-screen instructions to choose an operation by typing the corresponding number.
    - Input the required numbers when prompted.
    - View the result of the operation.
    - To exit the program, choose the option to quit from the menu.

## Example

```sh
Please make a selection:
type corresponding number: '1. +', '2. -', '3. *', '4. /', '5. 1/X', '6. X^2', '7. X^Y', '8. N!', '9. quit'
1
Enter first number:
5
Enter second number:
3
5.0 + 3.0 = 8.0

Please make a selection:
type corresponding number: '1. +', '2. -', '3. *', '4. /', '5. 1/X', '6. X^2', '7. X^Y', '8. N!', '9. quit'
9
Exiting...
