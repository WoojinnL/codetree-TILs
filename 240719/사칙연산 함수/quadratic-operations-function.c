#include <stdio.h>

int Plus(int a, int c){
    return a + c;
}
int Minus(int a, int c){
    return a - c;
}
int Devide(int a, int c){
    return a / c;
}
int Multi(int a, int c){
    return a * c;
}

int main() {
    int a, c;
    char o;
    scanf("%d %c  %d", &a, &o, &c);
    switch(o){
        case '+' :
            printf("%d %c %d = %d", a, o, c, Multi(a, c));
            break;
        case '-' :
            printf("%d %c %d = %d", a, o, c, Multi(a, c));
            break;
        case '/' :
            printf("%d %c %d = %d", a, o, c, Multi(a, c));
            break;
        case '*' :
            printf("%d %c %d = %d", a, o, c, Multi(a, c));
            break;
        default :
            printf("False");
    }
    return 0;
}