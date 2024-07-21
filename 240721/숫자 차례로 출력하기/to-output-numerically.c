#include <stdio.h>

void PrintNum(int i, int n){
    if(i == n + 1){
        printf("\n");
        return;
    }

    printf("%d ", i);
    PrintNum(i + 1, n);
    printf("%d ", i);
}

int main() {
    int n;
    scanf("%d", &n);
    PrintNum(1, n);
    return 0;
}