#include <stdio.h>
#include <string.h>

int IsDouble(char str[]){
    int length = strlen(str);
    int alpha[26] = {0,};
    for(int i = 0; i < length; i++){
        alpha[str[i] - 97]++;
    }
    for(int i = 0; i < 26; i++){
        if(alpha[i] > 1)
            return 1;
    }
    return 0;
}

int main() {
    char str[100];
    scanf("%s", str);
    if(IsDouble(str) == 1)
        printf("Yes");
    else
        printf("No");
    return 0;
}