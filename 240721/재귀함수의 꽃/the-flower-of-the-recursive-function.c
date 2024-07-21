#include <stdio.h>

void PrintNum(int n){
    if(n == 0)
        return;

    printf("%d ", n);
    PrintNum(n-1);
    printf("%d ", n);
}

int main() {
    int n;
    scanf("%d", &n);
    PrintNum(n);
    return 0;
}