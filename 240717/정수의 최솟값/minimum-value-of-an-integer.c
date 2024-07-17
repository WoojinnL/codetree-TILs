#include <stdio.h>

int FindMin(int a, int b, int c){
    int Min = a;
    int num[2] = {b, c};
    for(int i = 0; i < 2; i++){
        if(Min > num[i]){
            Min = num[i];
        }
    }
    return Min;
}

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d", FindMin(a, b, c));
    return 0;
}