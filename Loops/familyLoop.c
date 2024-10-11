#include <stdio.h>

int main() {
    char *family[] = {"Tj", "Nicole", "Hannah", "Adam", "Caleb", "Aaron"};


    for(int i=0;i<6;i++) {
        printf("Hello, %s!\n", family[i]);
    }

    return 0;
}