#include <stdio.h>

int main(){
    int x[100], i;

    for(i=0; i<100; i++){
        x[i] = i+1;
    }

    printf("Content of the array: ");
    
    for(i=0; i<100; i++){
        printf("%d,", x[i]);
    }
    return 0;
}