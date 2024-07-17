#define _CRT_NO_SECURE_WARNING
#include <stdio.h>

int IsInThree(int i) {
    int sum = 0;
    while (i != 0) {
        if ((i % 10) % 3 == 0 && i % 10 != 0)
            sum++;
        i = i / 10;
    }
    if (sum != 0)
        return 1;
    else
        return 0;
}

int IsThreeTimes(int i) {
    if (i % 3 == 0 || IsInThree(i) == 1)
        return 1;
    else
        return 0;
}

int main() {
    int a, b, num = 0;
    scanf("%d %d", &a, &b);
    for (int i = a; i <= b; i++) {
        if (IsThreeTimes(i) == 1)
            num++;
    }
    printf("%d", num);
    return 0;
}