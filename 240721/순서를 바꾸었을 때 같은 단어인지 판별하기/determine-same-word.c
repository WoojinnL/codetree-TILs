#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
    if (*(char*)a > *(char*)b)
        return 1;
    else if (*(char*)a < *(char*)b)
        return -1;
    else
        return 0;
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

    qsort(str1, len, sizeof(char), compare);
    qsort(str2, len, sizeof(char), compare);

    if (Check(str1, str2, len) == 1)
        printf("Yes");
    else
        printf("No");
    return 0;
}