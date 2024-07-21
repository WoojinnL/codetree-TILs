#include <stdio.h>
#include <string.h>

void sort(char str[], int len) {
    char temp;
    for (int i = 0; i < len; i++) {
        for (int j = i + 1; j < len; j++) {
            if (str[i] > str[j]) {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}

int Check(char str1[], char str2[], int len) {
    for (int i = 0; i < len; i++) {
        if (str1[i] != str2[i])
            return 0;
    }
    return 1;
}

int main() {
    char str1[100000];
    char str2[100000];
    scanf("%s", str1);
    scanf("%s", str2);

    int len;
    if (strlen(str1) > strlen(str2))
        len = strlen(str1);
    else
        len = strlen(str2);

    sort(str1, len);
    sort(str2, len);

    if (Check(str1, str2, len) == 1)
        printf("Yes");
    else
        printf("No");
    return 0;
}