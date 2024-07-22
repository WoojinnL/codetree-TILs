#include <stdio.h>

typedef struct{
    char name[10];
    int level;
}user;

int main() {
    user User = {"codetree", 50};
    user user1;
    scanf("%s %d", user1.name, &user1.level);
    printf("product %d is %s\n", User.level, User.name);
    printf("product %d is %s\n", user1.level, user1.name);
    return 0;
}