#include <stdio.h>

void print10(){
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 10; j++){
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    print10();
    return 0;
}