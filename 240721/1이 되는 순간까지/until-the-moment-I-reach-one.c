#include <stdio.h>

int Devide(int count, int n){
    if(n == 1)
        return count;
    else if(n % 2 == 0)
        return Devide(count + 1, n / 2);
    else
        return Devide(count + 1, n / 3);
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", Devide(0, n));
    return 0;
}