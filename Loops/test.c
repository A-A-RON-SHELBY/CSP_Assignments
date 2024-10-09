#include <stdio.h>
char sibs[8][20] = {"Hannah", "Adam", "Caleb", "Aaron"};
int i;
int main (){
    while(i<4){
        printf("%s\n", sibs[i]);
        i+=1;
    }
        return 0;
}