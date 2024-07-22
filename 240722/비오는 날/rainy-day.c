#include <stdio.h>
#include <string.h>

typedef struct{
    int year;
    int month;
    int day;
    char week[4];
    char weather[5];
} Data;

int main() {
    int n, Minyear = 0, Minmonth = 0, Minday = 0;
    Data data[100];
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%d-%d-%d %s %s", &data[i].year, &data[i].month, &data[i].day, data[i].week, data[i].weather);
    }

    for(int i = 0; i < n; i++){
        if(Minyear == 0 && strcmp(data[i].weather, "Rain") == 0)
            Minyear = data[i].year;
        
        if(Minyear > data[i].year && strcmp(data[i].weather, "Rain") == 0)
            Minyear = data[i].year;
    }
    for(int i = 0; i < n; i++){
        if(data[i].year == Minyear && Minmonth == 0 && strcmp(data[i].weather, "Rain") == 0)
            Minmonth = data[i].month;
        
        if(Minmonth > data[i].month && data[i].year == Minyear && strcmp(data[i].weather, "Rain") == 0)
             Minmonth = data[i].month;
    }
    for(int i = 0; i < n; i++){
        if(data[i].year == Minyear && data[i].month == Minmonth && Minday == 0 && strcmp(data[i].weather, "Rain") == 0)
            Minday = data[i].day;
        
        if(Minday > data[i].day &&  data[i].year == Minyear && data[i].month == Minmonth && strcmp(data[i].weather, "Rain") == 0)
             Minday = data[i].day;
    }
    for(int i = 0; i < n; i++){
        if(data[i].year == Minyear && data[i].month == Minmonth && data[i].day == Minday && strcmp(data[i].weather, "Rain") == 0)
            printf("%d-%02d-%02d %s %s", data[i].year, data[i].month, data[i].day, data[i].week, data[i].weather);
    }
    return 0;
}