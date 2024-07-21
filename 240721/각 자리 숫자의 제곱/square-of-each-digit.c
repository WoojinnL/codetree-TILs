#include <stdio.h>

int Squared(int n){
    return n * n;
}

int PlusSquared(int n){
    if(n == 0)
        return 0;
    
    return Squared(n % 10) + PlusSquared(n / 10);
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", PlusSquared(n));
    return 0;
}