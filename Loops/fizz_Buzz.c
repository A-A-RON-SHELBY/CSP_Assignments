#include <stdio.h>
#include <string.h>
int i;
int usr;
char one[50];
char two[50];
char three[49];
int main(){
    printf("Give me a number\n");
    scanf("%d", &usr);
    printf("Give me a short word!\n");
    scanf("%s", &one);
    printf("Give me another short word!\n");
    scanf("%s", &two);
    strcat(three, one);
    strcat(three, two);
    //loop that counts to 50
    for(i=1;i<=usr;i++){

    //replace #'s divisible by 3 and 5 with "FizzBuzz"
    if(i%3==0 && i%5==0){
        printf("%s\n", three);
    
        //replace #'s divisible by 3 with "Fizz"
        }else if(i%3==0){
        printf("%s\n", one);

        //replace #'s divisible by 5 with "Buzz"
            }else if (i%5==0){
        printf("%s\n", two);
    
        //print the the number
        }else {
        printf("%d\n", i);
    }
}

    return 0;

}