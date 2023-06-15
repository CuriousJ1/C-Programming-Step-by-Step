#include <stdio.h>

int main(){
    int var = 5;
    // to declare a pointer
    int *p;

    printf("%p\n", &var);
    // p points to the address of &var . Example being 9394
    p = &var;

    printf("%d\n", var);
    // *p adrress being 9394's value is now changed to 10
    // therefore the * depicts the values at the pointed address
    *p = 10;

    printf("%d\n", var);

    *p = *p + 1;
    //printf("%lu", &var);
    return 0;
}