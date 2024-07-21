#include <stdio.h>

int Sequence(int n){
    if(n == 1)
        return 1;
    if(n == 2)
        return 2;
    
    return Sequence(n / 3) + Sequence(n - 1);
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", Sequence(n));
    return 0;
}