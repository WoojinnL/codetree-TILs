#include <stdio.h>

int SumFirst(int n){
    if(n / 10 == 0)
        return n;
    
    return n % 10 + SumFirst(n / 10);
}

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d", SumFirst(a * b * c));
    return 0;
}