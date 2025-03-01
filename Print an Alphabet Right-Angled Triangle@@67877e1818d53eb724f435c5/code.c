#include <stdio.h>
int main (){
        int n;
    scanf("%d",&n);
    for(int rows=0;rows<n;rows++){
        for(int cols=0;cols<=rows;cols++){
            printf("%c ",(cols)+'A');
        }
        printf("\n");
    }
    return 0;

}