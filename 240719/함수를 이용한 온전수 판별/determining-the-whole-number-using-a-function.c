#include <stdio.h>

int CheckNum(int a, int b){
    int cnt = 0;
    for(int i = a; i <= b; i++){
        if(i % 2 != 0 && i % 10 != 5 && (i % 3 != 0 || i % 9 == 0))
            cnt++;
    }
    return cnt;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", CheckNum(a, b));
    return 0;
}