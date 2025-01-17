#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b){
    if(*(int*)a > *(int*)b)
        return 1;
    else if(*(int*)a < *(int*)b)
        return -1;
    else
        return 0;
}

int compare2(const void *a, const void *b){
    if(*(int*)a > *(int*)b)
        return -1;
    else if(*(int*)a < *(int*)b)
        return 1;
    else
        return 0;
}

int main() {
    int n;
    int arr[100];
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    qsort(arr, n, sizeof(int), compare);

    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    qsort(arr, n, sizeof(int), compare2);

    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}