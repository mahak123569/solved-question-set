#include<stdio.h>
#include<stdbool.h>
#define N;
#define N 1000

bool isValid(char* s) {  
    char stack[N];
    int top = -1;

    for (int i = 0; i < strlen(s); i++) {
        char c = s[i];

        if (c == '(' || c == '{' || c == '[') {
            if (top < N - 1) {
                top++;
                stack[top] = c;
            }
        } else if (c == ')' || c == '}' || c == ']') {
            if (top == -1) {
                return false;
            }
            char popped = stack[top];
            top--;
            if ((c == ')' && popped != '(') ||
                (c == '}' && popped != '{') ||
                (c == ']' && popped != '[')) {
                return false;
            }
        }
    }

    return top == -1;
}
int main() {
    char s[N];
    printf("Enter a string of parentheses: ");
    scanf("%s", s);

    if (isValid(s)) {
        printf("The parentheses are valid.\n");
    } else {
        printf("The parentheses are not valid.\n");
    }

    return 0;
}
 
    
    