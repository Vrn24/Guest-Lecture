# Guest-Lecture

# Infix to Postfix Conversion using Stack

This C++ program demonstrates the conversion of infix expressions to postfix using the Shunting Yard algorithm and a stack.

## Table of Contents

- [Introduction](#introduction)
- [Features](#features)
- [How to Use](#how-to-use)
- [Installation](#installation)
- [Contributing](#contributing)
- [License](#license)
- [Credits](#credits)

## Introduction

Infix notation is a common way of writing arithmetic expressions, but it can be difficult to evaluate directly. The Shunting Yard algorithm is a method to convert infix expressions to postfix notation, which is easier to evaluate.

This C++ program utilizes the Shunting Yard algorithm and a stack to convert infix expressions to postfix notation.

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
