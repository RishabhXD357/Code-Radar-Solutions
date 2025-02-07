#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    if ( a & (1 << 32)){
        printf("Set");
    }   
    else {
        printf("Not Set");
    }
    return 0;
}