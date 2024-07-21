#include <stdio.h>

int A[100];
int n, m;

int Plus(int n, int m){
    int a1, a2;
    for(int i = 0; i < m; i++){
        int sum = 0;
        scanf("%d %d", &a1, &a2);
        for(int j = a1-1; j < a2; j++){
            sum = sum + A[j];
        }
        printf("%d\n", sum);
    }
}

int main() {
    scanf("%d %d", &n, &m);
    for(int i = 0; i < n; i++)
        scanf("%d", &A[i]);
    Plus(n, m);
    return 0;
}