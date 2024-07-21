#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void* a, const void* b){
    return strcmp((char*)a, (char*)b);
}

int main() {
    char str[100];
    scanf("%s", str);
    qsort(str, sizeof(str), sizeof(str[0]), compare);
    printf("%s", str);
    return 0;
}