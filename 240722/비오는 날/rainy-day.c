#include <stdio.h>
#include <string.h>

typedef struct{
    char date[11];
    char week[4];
    char weather[5];
} Data;

int main() {
    int n;
    Data MinData = {"9999-99-99", "", ""};
    Data data[100];
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%s %s %s", data[i].date, data[i].week, data[i].weather);
        if(strcmp(data[i].weather, "Rain") == 0){
            if(strcmp(data[i].date, MinData.date) < 0){
                MinData = data[i];
            }
        }
    }

    printf("%s %s %s", MinData.date, MinData.week, MinData.weather);
    return 0;
}