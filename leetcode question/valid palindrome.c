#include<stdio.h>
#include<string.h>
#include<ctype.h>

int isPalindrome(char *s) {
    int left = 0;
    int right = strlen(s) - 1;

    while (left < right) {
        // Skip non-alphanumeric characters
        while (left < right && !isalnum(s[left])) left++;
        while (left < right && !isalnum(s[right])) right--;

        // Compare characters (case-insensitive)
        if (tolower(s[left]) != tolower(s[right])) return 0;

        left++;
        right--;
    }
    return 1;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;  // Remove newline character

    if (isPalindrome(str)) {
        printf("The string is a valid palindrome.\n");
    } else {
        printf("The string is not a valid palindrome.\n");
    }

    return 0;
}