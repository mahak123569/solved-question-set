#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

// Stack structure
struct Stack {
    int top;
    char items[MAX];
};

// Function to initialize the stack
void initialize(struct Stack *s) {
    s->top = -1;
}

// Function to check if the stack is empty
int isEmpty(struct Stack *s) {
    return s->top == -1;
}

// Function to push an item onto the stack
void push(struct Stack *s, char item) {
    if (s->top == MAX - 1) {
        printf("Stack overflow\n");
        return;
    }
    s->items[++(s->top)] = item;
}

// Function to pop an item from the stack
char pop(struct Stack *s) {
    if (isEmpty(s)) {
        printf("Stack underflow\n");
        return '\0';
    }
    return s->items[(s->top)--];
}

// Function to check if characters are matching pairs
int isMatchingPair(char open, char close) {
    return (open == '(' && close == ')') ||
           (open == '{' && close == '}') ||
           (open == '[' && close == ']');
}

// Function to check if the expression has balanced parentheses
int isBalanced(char *expr) {
    struct Stack s;
    initialize(&s);

    for (int i = 0; i < strlen(expr); i++) {
        char current = expr[i];

        // If it's an opening bracket, push to stack
        if (current == '(' || current == '{' || current == '[') {
            push(&s, current);
        }
        // If it's a closing bracket, pop and check
        else if (current == ')' || current == '}' || current == ']') {
            if (isEmpty(&s) || !isMatchingPair(pop(&s), current)) {
                return 0; // Unbalanced
            }
        }
    }
    // If stack is empty, parentheses are balanced
    return isEmpty(&s);
}

int main() {
    char expression[MAX];

    printf("Enter an expression: ");
    scanf("%s", expression);

    if (isBalanced(expression)) {
        printf("Balanced\n");
    } else {
        printf("Not Balanced\n");
    }

    return 0;
}  