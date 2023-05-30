#include <stdio.h>

int main(){
    // creates 100 blank one dimensional arrays
    int x[100], i;
    
    // for loop to put numbers from 1 - 100, starting at 0
    for(i=0; i<100; i++){
        x[i] = i+1;
    }

    printf("Content of the array: ");
    // print's each array value
    for(i=0; i<100; i++){
        printf("%d,", x[i]);
    }
    
    return 0;
}