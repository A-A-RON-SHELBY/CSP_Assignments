#include <stdio.h>

int main(void){
    char income[9];
    char utilities[9];
    char groceries[9];
    char longboard[9];
    printf("This is a budget calculator.\n How much do you make a month?\n");
    scanf("%s", income);
    printf("How much do your utilities cost?\n");
    scanf("%s", utilities);
    printf("You make %s\n", income);
    float spend[] = (float) income - (float) utilities;
    printf("%, spend");
    return 0;
}