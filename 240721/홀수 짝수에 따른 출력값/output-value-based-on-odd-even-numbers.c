#include <stdio.h>

int Plus(int n){
    if(n == 1)
        return 1;
    if(n == 2)
        return 2;
    
    return n + Plus(n - 2);
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", Plus(n));
    return 0;
}