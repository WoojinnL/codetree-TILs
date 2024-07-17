#include <stdio.h>

int IsPrime(int i){
    int cnt = 0;
    for(int j = 1; j <= i; j++){
        if(i % j == 0)
            cnt++;
    }
    if(cnt == 2)
        return 1;
    else 
        return 0;
}

int main() {
    int a, b, sum = 0;
    scanf("%d %d", &a, &b);
    for(int i = a; i <= b; i++){
        if(IsPrime(i) == 1)
            sum += i;
    }
    printf("%d", sum);
    return 0;
}