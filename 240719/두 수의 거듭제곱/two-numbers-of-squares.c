#include <stdio.h>

int Squared(int a, int b){
    int sum = 1;
    for(int i = 0; i < b; i++){
        sum = sum * a;
    }
    return sum;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", Squared(a, b));
    return 0;
}