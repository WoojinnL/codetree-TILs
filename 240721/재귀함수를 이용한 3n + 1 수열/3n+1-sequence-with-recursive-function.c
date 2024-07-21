#include <stdio.h>

int Sequence(int n, int count){
    if(n == 1)
        return count;
    else if(n % 2 == 0)
        return Sequence(n / 2, count + 1);
    else
        return Sequence(3 * n + 1, count + 1);
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", Sequence(n, 0));
    return 0;
}