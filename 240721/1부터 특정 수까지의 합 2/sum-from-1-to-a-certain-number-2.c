#include <stdio.h>

int PlusAll(int n){
    if (n == 0)
        return 0;
    return n + PlusAll(n - 1);
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", PlusAll(n));
    return 0;
}