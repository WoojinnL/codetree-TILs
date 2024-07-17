#include <stdio.h>

int bcd(int n, int m){
    if(m == 0){
        return n;
    }
    else{
        bcd(m, n%m);
    }
}

int main() {
    int n, m, result;
    scanf("%d %d", &n, &m);
    result = bcd(n, m);
    printf("%d", result);
    return 0;
}