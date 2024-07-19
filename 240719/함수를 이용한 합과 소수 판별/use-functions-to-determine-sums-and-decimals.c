#include <stdio.h>

int CheckNum(int a, int b){
    int cnt = 0, count = 0;
    for(int i = a; i <= b; i++){
        for(int j = 1; j <= i; j++){
            if(i % j == 0)
                cnt++;
        }
        if(cnt == 2 && ((i / 100 + i / 10 % 10 + i % 10) % 2 == 0))
            count++;
        cnt = 0;
    }
    return count;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", CheckNum(a, b));
    return 0;
}