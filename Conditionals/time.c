#include <stdio.h>
#include <time.h>

int hour;


int main (){
    time_t now;
    struct tm*now_tm;

    now = time(NULL);
    now_tm = localtime(&now);
    hour = (now_tm->tm_hour)-6;
    printf("%d\n", hour);

    if (hour < 12){
        printf("Good Morning\n");
    }else if (hour < 18){
        printf("Good Afternoon\n");
    }else if (hour <= 20){
        printf("Good Evening\n");
    }else{
        printf("GOOD NIGHT!, go to bed!");
    }
    return 0;
}