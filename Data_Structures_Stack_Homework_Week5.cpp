//infix to postfix with Shunting Yard algorithm

#include <stdio.h>
#include <ctype.h>

#define MAX 100

char stack[MAX];
int top = -1;

void push(char x) {
    stack[++top] = x;
}

char pop() {
    return stack[top--];
}

char peek() {
    return stack[top];
}

int isEmpty() {
    return top == -1;
}

int precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    if (op == '^') return 3;
    return 0;
}


void infixToPostfix(char infix[], char postfix[]) {
    int i = 0, k = 0;
    char ch;

    while ((ch = infix[i++]) != '\0') {

        
        if (isalnum(ch)) {
            postfix[k++] = ch;
        }

       
        else if (ch == '(') {
            push(ch);
        }

        
        else if (ch == ')') {
            while (!isEmpty() && peek() != '(') {
                postfix[k++] = pop();
            }
            pop(); 
        }
        else {
            while (!isEmpty() && precedence(peek()) >= precedence(ch)) {
                postfix[k++] = pop();
            }
            push(ch);
        }
    }
    while (!isEmpty()) {
        postfix[k++] = pop();
    }

    postfix[k] = '\0';
}

int main() {
    char infix[] = "A+B*(C-D)";
    char postfix[MAX];

    infixToPostfix(infix, postfix);

    printf("Infix   : %s\n", infix);
    printf("Postfix : %s\n", postfix);

    return 0;
}
















