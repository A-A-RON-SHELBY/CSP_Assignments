#include <stdio.h>
#include <string.h>

int main(void){
char animal[40];
char place[40];
char verb[40];
char sentence[400];
printf("Name an animal: ");
scanf("%s", animal);
printf("Name a place: ");
fgets(place, sizeof(place), stdin);
printf("Name a past tense verb: ");
fgets(verb, sizeof(verb), stdin);
strcat(sentence, animal);
strcat(sentence, " went to the ");
strcat(sentence, place);
strcat(sentence, " and ");
strcat(sentence, verb);
strcat(sentence, " with his friend the angry turtle. \n");
printf("%s", sentence);
return 0;
}