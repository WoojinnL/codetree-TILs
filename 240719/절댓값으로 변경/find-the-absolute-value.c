#include <stdio.h>
#include <stdlib.h>

void MAV(int* arr, int n){
    for(int i = 0; i < n; i++){
        if(*(arr + i) < 0){
            *(arr + i) *= -1;
        }
    }
}

int main() {
    int N;
    int arr[50];
    scanf("%d", &N);
    for(int i = 0; i < N; i++)
        scanf("%d", &arr[i]);
    MAV(arr, N);
    for(int i = 0; i < N; i++)
        printf("%d ", arr[i]);
    return 0;
}