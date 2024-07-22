#include <stdio.h>

typedef struct User{
    char name[10];
    int level;
}user;

int main() {
    user User = {"codetree", 10};
    user user1;
    scanf("%s %d", user1.name, &user1.level);
    printf("user %s lv %d\n", User.name, User.level);
    printf("user %s lv %d", user1.name, user1.level);
    return 0;
}