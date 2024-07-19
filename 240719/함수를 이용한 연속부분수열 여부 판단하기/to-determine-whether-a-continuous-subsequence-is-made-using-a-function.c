#include <stdio.h>

int main() {
    int n1, n2, cnt = 0;
    int arr1[100], arr2[100];
    scanf("%d %d", &n1, &n2);
    for(int i = 0; i < n1; i++)
        scanf("%d", &arr1[i]);
    for(int i = 0; i < n2; i++)
        scanf("%d", &arr2[i]);

    for(int i = 0; i < n2; i++){
        for(int j = 0; j < n1; j++){
            if(arr1[j] == arr2[i]){
                if(arr1[j + 1] == arr2[i + 1])
                    cnt++;
            }
        }
        if(cnt > 0)
            break;
    }
    if(cnt > 0)
        printf("Yes");
    else
        printf("No");
    return 0;
}