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
    int n, m;
    scanf("%d %d", &n, &m);
    int result = bcd(n , m);
    printf("%d", n*m/result);
    return 0;
}