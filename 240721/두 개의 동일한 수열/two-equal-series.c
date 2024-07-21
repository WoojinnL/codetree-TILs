#include <stdio.h>

void Sort(int* arr, int n){
    int temp;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[i] > arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int Check(int arr1[], int arr2[], int n){
    for(int i = 0; i < n; i++){
        if(arr1[i] != arr2[i])
            return 0;
    }
    return 1;
}

int main() {
    int n;
    scanf("%d", &n);
    int arr1[100];
    int arr2[100];
    for(int i = 0; i < n; i++)
        scanf("%d", &arr1[i]);
    for(int i = 0; i < n; i++)
        scanf("%d", &arr2[i]);
    
    Sort(arr1, n);
    Sort(arr2, n);
    if(Check(arr1, arr2, n) == 1)
        printf("Yes");
    else
        printf("No");
    return 0;
}