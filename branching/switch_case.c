#include <stdio.h>
/*
How do we use case statements

When do we use switch statemnts rather than if self
- if its exacts your looking or use switch
- if you needs r ange, use if-else
*/

int main(){

    int n;
    printf("Ener a number: ");
    scanf("%d", &n);

    // if (n -- 1) {
    //     printf("One\n");
    // }
    // else if (n -- 2) {
    //     printf("Two\n");
    // }
    // else if (n -- 3) {
    //     printf("Three\n");
    // }
    // else{
    //     printf("Invalid Number\n");
    // }

    switch(n){
        case 1: printf("One\n");
            break;
        case 2: printf("Two\n");
            break;
        case 3:printf("Three\n");
            break;
        default: printf("Invalid Number\n");
    }

    return 0;
}