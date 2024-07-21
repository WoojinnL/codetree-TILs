#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void swap(char* a, char* b){
    char temp[101];
    strcpy(temp, a);
    strcpy(a, b);
    strcpy(b, temp);
}

void sort(char str[][101], int n){
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(strcmp(str[i], str[j]) > 0)
                swap(str[i], str[j]);
        }
    }
}

int main() {
    int n, k;
    char T[101];
    scanf("%d %d", &n, &k);
    scanf("%s", T);
    char str[101][101];
    char Final[101][101];
    for(int i = 0; i < n; i++)
        scanf("%s", str[i]);
    
    sort(str, n);

    for(int i = 0; i < n; i++){
        if(strcmp(str[i], T) == 0)
            strcpy(Final[i], str[i]);
    }
    printf("%s", str[k]);
    return 0;
}