#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int IsPalindrome(char* str, int length) {
    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i -1])
            return 0;
    }
    return 1;
}

int main() {
    char str[100];
    scanf("%s", str);
    int length = strlen(str);
    if (IsPalindrome(str, length) == 1)
        printf("Yes");
    else
        printf("No");
    return 0;
}