#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
    char name[11];
    int height;
    int weight;
}Student;

int compare(const void *a, const void *b){
    if(((Student*)a)->height > ((Student*)b)->height)
        return 1;
    else if(((Student*)a)->height < ((Student*)b)->height)
        return -1;
    else
        return 0;
}

int main() {
    int n;
    scanf("%d", &n);
    Student s[5];
    for(int i = 0; i < n; i++){
        scanf("%s %d %d", s[i].name, &s[i].height, &s[i].weight);
    }

    qsort((Student*)s, n, sizeof(Student), compare);

    for(int i = 0; i < n; i++){
        printf("%s %d %d\n", s[i].name, s[i].height, s[i].weight);
    }
    return 0;
}