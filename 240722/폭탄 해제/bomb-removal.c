#include <stdio.h>

struct Mission{
    char SecretCode[11];
    char MeetingPoint;
    int Time;
};

int main() {
    struct Mission M1;
    scanf("%s %c %d", M1.SecretCode, &M1.MeetingPoint, &M1.Time);
    printf("code : %s \ncolor : %c \nsecond : %d", M1.SecretCode, M1.MeetingPoint, M1.Time);
    return 0;
}