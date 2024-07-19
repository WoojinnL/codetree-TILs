#include <stdio.h>

int IsContinue(int n1, int n2){
        int arr1[100], arr2[100];
            for(int i = 0; i < n1; i++)
        scanf("%d", &arr1[i]);
    for(int i = 0; i < n2; i++)
        scanf("%d", &arr2[i]);

    for(int i = 0; i < n2; i++){
        for(int j = 0; j < n1; j++){
            if(arr1[j] == arr2[i]){
                if(arr1[j + 1] == arr2[i + 1])
                    return 1;
            }
        }
    }
    return 0;
}

int main() {
    int n1, n2, cnt = 0;
    scanf("%d %d", &n1, &n2);
    if(IsContinue(n1, n2) == 1)
        printf("Yes");
    else
        printf("No");
    return 0;
}