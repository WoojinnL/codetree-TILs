#include <stdio.h>

int arr[100];

int FindMax(int n, int Max){
    if(n == -1)
        return Max;
    
    if(arr[n] > Max)
        return FindMax(n - 1, arr[n]);
    else
        return FindMax(n - 1, Max);
}

int main() {
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    printf("%d", FindMax(n , arr[n - 1]));
    return 0;
}