#include <stdio.h>

void PlusAndMulti(int* a, int* b){
    if(*a > *b){
        *a *= 2;
        *b += 10;
    }
    else{
        *a += 10;
        *b *= 2;
    }
}

int main() {
    int a, b;
    int* n = &a;
    int* m = &b;
    scanf("%d %d", &a, &b);
    PlusAndMulti(n, m);
    printf("%d %d", a, b);
    return 0;
}