#include <stdio.h>

int arr[100];

int Plus(int n, int m){
    int sum = 0;
    while(m != 0){
        sum += arr[m - 1];
        if(m % 2 == 0)
            m /= 2;
        else
            m -= 1;
    }
    return sum;
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("%d", Plus(n, m));
    return 0;
}