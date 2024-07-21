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
    int arr[1000];
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    Sort(arr, n);
    printf("%d", arr[0] + arr[n - 1]);
    return 0;
}