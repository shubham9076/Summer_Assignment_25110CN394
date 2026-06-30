#include <stdio.h>

int main() {
    char str[100];
    int i, length = 0, flag = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Find length (excluding newline)
    while (str[length] != '\n' && str[length] != '\0') {
        length++;
    }

    // Check palindrome
    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i]) {
            flag = 0;
            break;
        }
    }

    if (flag)
        printf("Palindrome String");
    else
        printf("Not a Palindrome String");

    return 0;
}