#include <stdio.h>

void Swap(int arr[], int i, int j){
    int temp;
    temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void Sort(int arr[], int n){
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[i] > arr[j])
                Swap(arr, i, j);
        }
    }
}

int main() {
    int n, Max = 0;
    int arr[2000];
    scanf("%d", &n);
    for(int i = 0; i < n * 2; i++){
        scanf("%d", &arr[i]);
    }
    Sort(arr, n * 2);
    for(int i = 0; i < n; i++){
        if(Max == 0)
            Max = arr[0]+arr[2*n - 1];
        
        if(Max < arr[i] + arr[2*n - i - 1])
            Max = arr[i] + arr[2*n - i - 1];
    }
    printf("%d", Max);
    return 0;
}