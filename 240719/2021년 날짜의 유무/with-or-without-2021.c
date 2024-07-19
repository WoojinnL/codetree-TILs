#include <stdio.h>

int IsExist(int Month, int Day){
    if(Month <= 12){
        if(Month == 1 || Month == 3 || Month == 5 || Month == 7 || Month == 8 || Month == 10 || Month == 12){
            if(Day <= 31)
                return 1;
            else
                return 0;
        }
        else if(Month == 4|| Month == 6 || Month == 9 || Month == 11){
            if(Day <= 30)
                return 1;
            else
                return 0;
        }
        else{
            if(Day <= 28)
                return 1;
            else
                return 0;
        }
    }
}

int main() {
    int Month, Day;
    scanf("%d %d", &Month, &Day);
    if(IsExist(Month, Day) == 1)
        printf("Yes");
    else
        printf("No");
    return 0;
}