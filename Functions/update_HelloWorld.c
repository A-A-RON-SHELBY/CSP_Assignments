#include <stdio.h>

void sayHello(char name[]) {
    printf("Hello, %s!\n", name);
}

int main() {
    sayHello("Aaron");
    sayHello("Michael");
    sayHello("Charles");
    sayHello("Fredddy");
    sayHello("Bobby");

return 0;
}