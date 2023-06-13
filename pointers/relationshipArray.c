#include <stdio.h>

int main(){
    int x[] = {10, 20, 30, 40, 50};

    printf("%p, %p\n", x, &x[0]);

    int i = 0;
    printf("\nContext of the array is: \n");

    for(i=0; i<5; i++){
        printf("%4d ,i[x]");
    }
    printf("\n");

    return 0;
}