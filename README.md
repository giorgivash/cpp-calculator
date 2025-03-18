# C++ Console Calculator

## Description
This is a simple command-line calculator built in C++. It supports basic arithmetic operations and runs continuously until the user decides to exit. The calculator takes user input in the format:
```
number operator number
```
and performs the requested operation.

## Features
- Supports basic arithmetic operations:
  - Addition (`+`)
  - Subtraction (`-`)
  - Multiplication (`*`)
  - Division (`/`)
  - Exponentiation (`^`)
  - Percentage calculation (`%`)
- Input validation to handle invalid input formats
- Prevents division by zero
- Continuous operation until the user exits

## How to Use
1. Compile the program using a C++ compiler:
   ```sh
   g++ calculator.cpp -o calculator
   ```
2. Run the executable:
   ```sh
   ./calculator
   ```
3. Enter expressions in the format `number operator number` (e.g., `10 + 5`).
4. To exit, enter `0`.

## Example Usage
```
******************************
**********Calculator**********
Enter number operator number (0 to terminate) 10 + 5
10 + 5 = 15
Enter number operator number (0 to terminate) 8 ^ 2
8 ^ 2 = 64
Enter number operator number (0 to terminate) 100 % 20
100 % 20 = 20
Enter number operator number (0 to terminate) 0
**********Calculator Terminated**********
```

## Error Handling
- **Invalid input format:**
  - Example: `10 & 5`
  - Output: `Invalid operator. Allowed (+, -, *, /, ^, %)`
- **Extra characters in input:**
  - Example: `10 + 5 extra`
  - Output: `Invalid input: extra characters detected. Try again!`
- **Division by zero:**
  - Example: `10 / 0`
  - Output: `Cannot divide by zero`

## Future Improvements
- Add support for more complex expressions (e.g., `(10 + 5) * 2`)
- Implement a GUI version using C++ graphics libraries
- Add floating-point precision control

## License
This project is open-source and free to use under the MIT License.

