#include <stdio.h>

int A[10];

int Gcd(int m, int n) {
    if (n == 0)
        return m;

    return Gcd(n, m % n);
}

int FindGcd(int Len, int sum) {
    int cnt = 0;
    if (Len == 0)
        return sum;
    for (int i = Len - 1; i > 0; i--) {
        int gcd = Gcd(A[Len], A[Len - i]);
        if (gcd != 1) {
            A[Len - i] /= gcd;
            sum = sum * A[Len] / gcd;
            cnt++;
        }
    }
    if (cnt == 0) {
        sum = sum * A[Len];
    }
    return FindGcd(Len - 1, sum);
}

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }
    printf("%d", FindGcd(n - 1, 1));
    return 0;
}