/*22070123129*/
/*Varun Pagote*/
/*Infix-Postfix*/

#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/');
}

int precedence(char c) {
    if (c == '*' || c == '/')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return 0;
}

string infixToPostfix(const string& infix) {
    stack<char> opStack;
    string postfix;

    for (char c : infix) {
        if (isalnum(c))
            postfix += c;
        else if (c == '(')
            opStack.push(c);
        else if (c == ')') {
            while (!opStack.empty() && opStack.top() != '(') {
                postfix += opStack.top();
                opStack.pop();
            }
            opStack.pop();  // Pop the '('
        } else if (isOperator(c)) {
            while (!opStack.empty() && precedence(opStack.top()) >= precedence(c)) {
                postfix += opStack.top();
                opStack.pop();
            }
            opStack.push(c);
        }
    }

    while (!opStack.empty()) {
        postfix += opStack.top();
        opStack.pop();
    }

    return postfix;
}

int main() {
    string infix_expression = "3 + 4 * 2 / ( 1 - 5 ) ^ 2";
    cout << "Infix expression: " << infix_expression << endl;
    string postfix_expression = infixToPostfix(infix_expression);
    cout << "Postfix expression: " << postfix_expression << endl;

    return 0;
}
