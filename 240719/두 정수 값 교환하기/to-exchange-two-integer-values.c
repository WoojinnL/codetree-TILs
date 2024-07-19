#include <stdio.h>

void Swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int *a = &n;
    int *b = &m;
    Swap(a, b);
    printf("%d %d", n, m);
    return 0;
}