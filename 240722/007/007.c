#include <stdio.h>

struct Mission{
    char SecretCode[11];
    char MeetingPoint;
    int Time;
};

int main() {
    struct Mission M1;
    scanf("%s %c %d", M1.SecretCode, &M1.MeetingPoint, &M1.Time);
    printf("secret code : %s \nmeeting point : %c \ntime : %d", M1.SecretCode, M1.MeetingPoint, M1.Time);
    return 0;
}