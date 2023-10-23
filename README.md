# Infix to Postfix Conversion using Stack

This C++ program demonstrates the conversion of infix expressions to postfix using the Shunting Yard algorithm and a stack.

## Table of Contents

- [Introduction](#introduction)
- [Algorithm](#algorithm)
- [Code](#code)
- [Output](#output)
## Introduction

Infix notation is a common way of writing arithmetic expressions, but it can be difficult to evaluate directly. The Shunting Yard algorithm is a method to convert infix expressions to postfix notation, which is easier to evaluate.

This C++ program utilizes the Shunting Yard algorithm and a stack to convert infix expressions to postfix notation.

## Algorithm

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

## Code
/*22070123129*/
/*Varun Pagote*/
/*Stack Implementation*/
#include <iostream>
#include <stack>

using namespace std;

void displayStack(stack<int> s) {
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}

int main() {
    stack<int> myStack;
    int choice;
    int value;

    do {
        cout << "Menu:\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Display\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter a value to push: ";
                cin >> value;
                myStack.push(value);
                break;

            case 2:
                if (!myStack.empty()) {
                    cout << "Popped value: " << myStack.top() << endl;
                    myStack.pop();
                } else {
                    cout << "Stack is empty.\n";
                }
                break;

            case 3:
                cout << "Stack elements: ";
                displayStack(myStack);
                break;

            case 4:
                cout << "Exiting program.\n";
                break;

            default:
                cout << "Invalid choice. Please try again.\n";
                break;
        }
    } while (choice != 4);

    return 0;
}

## Output

![image](https://github.com/Vrn24/Guest-Lecture/assets/112547439/adda7da6-47a2-4c13-b53f-0be7d4e113af)

# Infix to Postfix Conversion using Stack

# Queue Implementation in C++

This repository contains a simple C++ program that demonstrates the implementation of a queue data structure with a menu-driven interface. The program allows you to enqueue, dequeue, display the queue elements, and exit the application.

## Introduction

A queue is a linear data structure that follows the First-In-First-Out (FIFO) principle. In a queue, elements are inserted at the rear (enqueue) and removed from the front (dequeue). This C++ program provides a basic queue implementation with user-friendly menu options to interact with the queue.

## Algorithm

The program utilizes a circular array to represent the queue. Here's a high-level overview of the algorithm:

1. Initialize an empty queue with a front and rear set to -1.
2. Display a menu with the following options:
   - Enqueue: Add an element to the rear of the queue.
   - Dequeue: Remove an element from the front of the queue.
   - Display: Show the elements in the queue.
   - Exit: Terminate the program.
3. Based on the user's choice, perform the respective operation:
   - Enqueue: Insert an element at the rear of the queue, updating the rear index.
   - Dequeue: Remove an element from the front of the queue, updating the front index.
   - Display: Show the elements in the queue from front to rear.
   - Exit: End the program.
4. Continue executing menu options until the user chooses to exit.

## Usage

To use this program:

1. Clone or download this repository to your local machine.
2. Open a C++ compiler or IDE.
3. Build and run the program.
4. Follow the on-screen menu to enqueue, dequeue, display, or exit.

## Output

![image](https://github.com/Vrn24/Guest-Lecture/assets/112547439/b8b3e5ef-b6bd-4a71-ae93-fcd35c97b0e8)

# Searching Algorithm

# Linear and Binary Search in C++

This repository contains a C++ program that demonstrates both linear and binary search algorithms for finding an element in a sorted array. This program allows users to input an array and a target element, and it will perform both linear and binary search operations to find the target element.

## Introduction

Searching is a fundamental operation in computer science. Two commonly used search algorithms are:

1. **Linear Search**: This algorithm sequentially checks each element of the array until a match is found or the entire array is traversed. It is suitable for unsorted arrays.

2. **Binary Search**: This algorithm works on a sorted array by repeatedly dividing the search interval in half. It efficiently narrows down the search space and is much faster for large sorted datasets.

This C++ program provides both linear and binary search functionalities and is a useful tool to understand and compare these search algorithms.

## Algorithm

Here is a high-level overview of the program's algorithm:

1. Input the number of elements in the array and the sorted array itself from the user.
2. Prompt the user to input the target element they want to search for.
3. Perform **Linear Search**:
   - Iterate through the array sequentially to find the target element.
   - If found, return the index; otherwise, return -1.
4. Perform **Binary Search**:
   - Set the left and right boundaries to the first and last elements of the array, respectively.
   - Continuously divide the search space in half and compare the middle element with the target.
   - If the middle element matches the target, return the index; otherwise, update the boundaries accordingly.
   - Repeat the process until the target is found or the search space is empty.
   - If found, return the index; otherwise, return -1.
5. Display the search results for both linear and binary search.

## Usage

To use this program:

1. Clone or download this repository to your local machine.
2. Open a C++ compiler or IDE.
3. Build and run the program.
4. Follow the on-screen instructions to input the array and the element you want to search for.
5. The program will execute both linear and binary search and display the results.

## Output

![Screenshot 2023-10-23 155239](https://github.com/Vrn24/Guest-Lecture/assets/112547439/6f9409ff-798e-4471-ba2e-4ae602542445)






