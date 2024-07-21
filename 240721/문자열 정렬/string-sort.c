#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void sort(char str[], int len){
    char temp;
    for(int i = 0; i < len; i++){
        for(int j = i + 1; j < len; j++){
            if(str[i] > str[j]){
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}

int main() {
    char str[100];
    scanf("%s", str);
    int len = strlen(str);
    sort(str, len);
    for(int i = 0; i< len; i++){
        printf("%c", str[i]);
    }
    return 0;
}