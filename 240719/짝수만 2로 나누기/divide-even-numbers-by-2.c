#include <stdio.h>

void DevideEven(int *arr){
    int length = sizeof(arr);
    for(int i = 0; i < length; i++){
        if(arr[i] % 2 == 0){
            arr[i] /= 2;
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[50];
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    DevideEven(arr);
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}