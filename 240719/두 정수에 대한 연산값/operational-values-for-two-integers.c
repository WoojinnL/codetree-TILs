#include <stdio.h>

void PlusAndMulti(int* a, int* b){
    if(*a > *b){
        *a += 25;
        *b *= 2;
    }
    else{
        *a *= 2;
        *b += 25;
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