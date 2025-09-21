//to check the character is uppercase or lowercase or digit or a special character
#include <stdio.h>

int main() {
    char ch;
    printf("enter ch:");
    //input
    scanf("%c",&ch);
    if(ch>='A'&&ch<='Z'){
        printf("uppercase");
    }else if(ch>='a'&&ch<='z'){
        printf("lowercase");
    }else if(ch>='0'&&ch<='9'){
        printf("digit");
    }else{
        printf("special characters");
    }
    return 0;
}