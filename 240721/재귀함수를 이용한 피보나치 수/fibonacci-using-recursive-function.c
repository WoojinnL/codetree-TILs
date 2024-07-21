#include <stdio.h>

int Fibonnaci(int n){
    if(n == 1 || n == 2)
        return 1;
    return Fibonnaci(n - 1) + Fibonnaci(n - 2);
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", Fibonnaci(n));
    return 0;
}