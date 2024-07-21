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
    int n;
    int arr[101];
    int temp[101];
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n; i++){
        if(i % 2 == 0){
            Sort(arr, i);
            printf("%d ", arr[i / 2]);
        }
    }
    return 0;
}