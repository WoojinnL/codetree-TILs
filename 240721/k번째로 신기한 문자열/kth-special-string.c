#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void swap(char* a, char* b) {
    char temp[101];
    strcpy(temp, a);
    strcpy(a, b);
    strcpy(b, temp);
}

void sort(char str[][101], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(str[i], str[j]) > 0)
                swap(str[i], str[j]);
        }
    }
}

int main() {
    int n, k, cnt = 0;
    char T[101];
    scanf("%d %d", &n, &k);
    scanf("%s", T);
    int len = strlen(T);
    char str[101][101];
    char Final[101][101];
    for (int i = 0; i < n; i++)
        scanf("%s", str[i]);

    sort(str, n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < len; j++) {
            if (str[i][j] == T[j])
                cnt++;
        }
        if (cnt == len) {
            strcpy(Final[i], str[i]);
            cnt = 0;
        }
        cnt = 0;
    }

    printf("%s", Final[k - 1]);
    return 0;
}