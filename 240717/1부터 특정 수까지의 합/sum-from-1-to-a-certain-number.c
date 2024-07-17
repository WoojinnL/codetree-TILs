#include <stdio.h>

int Sum(int N){
    int Result = 0;
    for(int i = 1; i <= N; i++){
        Result += i;
    }
    return Result;
}

int main() {
    int N, Result;
    scanf("%d", &N);
    Result = Sum(N) / 10;
    printf("%d", Result);
    return 0;
}