#include <stdio.h>

int IsExist(int Year, int Month, int Day){
    if(Month <= 12){
        if(Month == 1 || Month == 3 || Month == 5 || Month == 7 || Month == 8 || Month == 10 || Month == 12){
            if(Day <= 31){
                if(Month == 1 || Month == 12)
                    return 4;
                else if(Month == 3 || Month == 5)
                    return 1;
                else if(Month == 7 || Month == 8)
                    return 2;
                else
                    return 3;
            }
            else
                return 0;
        }
        else if(Month == 4|| Month == 6 || Month == 9 || Month == 11){
            if(Day <= 30){
                if(Month == 4)
                    return 1;
                else if(Month == 6)
                    return 2;
                else
                    return 3;
            }
            else
                return 0;
        }
        else{
            if((Year % 4 == 0 && Year % 100 != 0) || (Year % 4 == 0 && Year % 100 == 0 && Year % 400 == 0)){
                if(Day <= 29)
                    return 4;
                else
                    return 0;
            }
            else{
                if(Day <= 28)
                    return 4;
                else
                    return 0;
            }
        }
    }
}

int main() {
    int Year, Month, Day, result;
    scanf("%d %d %d", &Year, &Month, &Day);
    result = IsExist(Year, Month, Day);
    switch(result){
        case 1 :
            printf("Spring");
            break;
        case 2 :
            printf("Summer");
            break;
        case 3 :
            printf("Fall");
            break;
        case 4 :
            printf("Winter");
            break;
        default :
            printf("-1");
    }
    return 0;
}