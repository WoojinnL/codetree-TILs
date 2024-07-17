#include <stdio.h>

void printMessage(int n){
    for(int i = 0; i < n; i++){
        printf("12345^&*()_\n");
    }
}

int main() {
    int n;
    scanf("%d", &n);
    printMessage(n);
    return 0;
}