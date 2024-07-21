#include <stdio.h>
#include <string.h>

char M[1000];
char N[1000];

int CountAll() {
    int count = 0;
    int lengthM = strlen(M);
    int lengthN = strlen(N);
    for (int i = 0; i < lengthM; i++) {
        if (M[i] == N[0]) {
            for (int j = 0; j < lengthN; j++) {
                if (M[i + j] == N[j])
                    count++;
            }
            if (count == lengthN)
                return i;
            else
                count = 0;
        }
    }
    return -1;
}

int main() {
    scanf("%s", M);
    scanf("%s", N);
    printf("%d", CountAll());
    return 0;
}