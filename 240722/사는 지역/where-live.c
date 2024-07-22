#include <stdio.h>
#include <string.h>

typedef struct{
    char name[11];
    int StreetNum1;
    int StreetNum2;
    char Region[11];
}User;

int main() {
    int n, MinNum;
    char MinName[11];
    User user[10];
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%s %d-%d %s", user[i].name, &user[i].StreetNum1, &user[i].StreetNum2, user[i].Region);
    }
    strcpy(MinName, user[0].name);
    for(int i = 0; i < n; i++){
        if(strcmp(MinName, user[i].name) < 0){
            strcpy(MinName, user[i].name);
            MinNum = i;
        }
    }
    printf("name %s\naddr %d-%d\ncity %s", user[MinNum].name, user[MinNum].StreetNum1, user[MinNum].StreetNum2, user[MinNum].Region);
    return 0;
}