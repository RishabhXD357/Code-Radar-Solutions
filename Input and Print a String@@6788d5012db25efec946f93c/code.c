#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    printf("%s", welcome());
    char name[20];
    scanf("%s",name);
    printf("You entered: %s",name);
    return 0;
}