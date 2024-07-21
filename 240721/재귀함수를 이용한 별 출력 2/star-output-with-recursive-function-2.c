#include <stdio.h>

void PrintNum(int n){
    if(n == 0)
        return;

    for(int i = 0; i < n; i++)
        printf("* ");
    printf("\n");
    PrintNum(n-1);
    for(int i = 0; i < n; i++)
        printf("* ");
    printf("\n");
}

int main() {
    int n;
    scanf("%d", &n);
    PrintNum(n);
    return 0;
}