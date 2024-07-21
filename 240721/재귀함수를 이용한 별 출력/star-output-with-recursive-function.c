#include <stdio.h>

void DrawTriangle(int n){
    if(n == 0)
        return;
    
    DrawTriangle(n - 1);
    for(int i = 0; i < n; i++){
        printf("*");
    }
    printf("\n");
}

int main() {
    int n;
    scanf("%d", &n);
    DrawTriangle(n);
    return 0;
}