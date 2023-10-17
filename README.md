# Infix to Postfix Conversion using Stack

This C++ program demonstrates the conversion of infix expressions to postfix using the Shunting Yard algorithm and a stack.

## Table of Contents

- [Introduction](#introduction)
- [Algorithm](#algorithm)
- [Features](#features)
- [How to Use](#how-to-use)
- [Installation](#installation)
- [Contributing](#contributing)
- [License](#license)
- [Credits](#credits)

## Introduction

Infix notation is a common way of writing arithmetic expressions, but it can be difficult to evaluate directly. The Shunting Yard algorithm is a method to convert infix expressions to postfix notation, which is easier to evaluate.

This C++ program utilizes the Shunting Yard algorithm and a stack to convert infix expressions to postfix notation.

## Algorithm

The Shunting Yard algorithm is a method for parsing mathematical expressions specified in infix notation. It uses two stacks, one for operators and another for operands, to transform an infix expression to a postfix expression.

The algorithm works as follows:
1. Initialize an empty stack for operators and an empty output queue for the postfix expression.
2. Read the expression from left to right.
3. If an operand is encountered, add it to the output queue.
4. If an operator is encountered, pop operators from the stack and add them to the output queue until an operator with lower precedence is at the top of the stack or the stack is empty. Push the current operator onto the stack.
5. If an open parenthesis is encountered, push it onto the stack.
6. If a closing parenthesis is encountered, pop operators from the stack and add them to the output queue until an open parenthesis is at the top of the stack. Pop the open parenthesis from the stack.
7. Repeat steps 3-6 until the end of the expression.
8. Pop any remaining operators from the stack and add them to the output queue.

The resulting output queue will be the postfix notation of the input infix expression.

## Features

- Converts infix expressions to postfix notation.
- Supports addition, subtraction, multiplication, division operators.
- Handles parentheses to enforce proper order of operations.

## How to Use

1. **Clone the repository:**

    ```bash
    git clone https://github.com/your-username/infix-to-postfix.git
    ```

2. **Compile the program:**

    Navigate to the project directory and compile the C++ code using a C++ compiler:

    ```bash
    g++ -o infix_to_postfix main.cpp
    ```

3. **Run the program:**

    Execute the compiled binary:

    ```bash
    ./infix_to_postfix
    ```

    Follow the on-screen prompts to enter an infix expression and see its corresponding postfix expression.

## Installation

Ensure you have a C++ compiler (e.g., g++) installed on your system.

```bash
sudo apt-get update
sudo apt-get install g++
