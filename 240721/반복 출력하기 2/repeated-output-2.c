#include <stdio.h>

void PrintHello(int n){
    if(n == 0)
        return;
    
    printf("HelloWorld\n");
    PrintHello(n-1);
}

int main() {
    int n;
    scanf("%d", &n);
    PrintHello(n);
    return 0;
}