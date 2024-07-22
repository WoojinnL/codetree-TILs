#include <stdio.h>

typedef struct {
    char CodeName;
    int score;
}Agent;

int main() {
    Agent agent[5];
    for (int i = 0; i < 5; i++) {
        scanf(" %c %d", &agent[i].CodeName, &agent[i].score);
    }
    int Min = agent[0].score, LowNumber = 0;
    for (int i = 0; i < 5; i++) {
        if (Min > agent[i].score) {
            Min = agent[i].score;
            LowNumber = i;
        }
    }
    printf("%c %d", agent[LowNumber].CodeName, agent[LowNumber].score);
    return 0;
}