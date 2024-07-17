#include <stdio.h>

int IsLeep(int y){
    if(y % 4 == 0)
        if(y % 100 == 0 && y % 400 != 0)
            return 0;
        else
            return 1;
    else
        return 0;
}

int main() {
    int y;
    scanf("%d", &y);
    if(IsLeep(y) == 1)
        printf("true");
    else
        printf("false");
    return 0;
}