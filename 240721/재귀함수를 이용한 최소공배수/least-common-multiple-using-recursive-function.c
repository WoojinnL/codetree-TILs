#include <stdio.h>

int A[10];

int Gcd(int m, int n) {
    if (n == 0)
        return m;

    return Gcd(n, m % n);
}

int FindGcd(int Len, int sum) {
    if (Len == 0) return 0;
    for (int i = Len; i > 0; i--) {
        int gcd = Gcd(A[Len], A[Len - i]);
        if (gcd != 1) {
            A[Len - i] /= gcd;
        }
    }
    return FindGcd(Len - 1, sum);
}

int main() {
    int n, sum= 1;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }
    FindGcd(n - 1, 1);
    for (int i = 0; i < n; i++) {
        sum *= A[i];
    }
    printf("%d", sum);
    return 0;
}