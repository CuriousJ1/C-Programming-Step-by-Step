#include <stdio.h>
#include <math.h>

/*
Requirements
1.
Declare 2 arrays
    - maximum of 20 float numbers


2.
Prompt use to inut some real numbers
    stop when input is 0.0 or above 20 inputs.
        USE A WHILE LOOP HERE


3.


*/
const int MAX = 20;

int main(){
    float first[MAX];
    float second[MAX];
    int num_of_inputs = 0;
    // unsure what temp is used for?
    float temp;
    
    printf("Enter maximum %d numbers, terminate with 0.0\n", MAX);
    printf("First number: ");
    scanf("%f", &temp);


    while(num_of_inputs < MAX && temp != 0.0){
        // first number input was not a zero
        // therefore we still have rooms in the array
        first[num_of_inputs++] = temp;
        printf("Next: ");
        scanf("%f", &temp);
    }

    printf("There are in total %d numbers given as an input \n", num_of_inputs);

    int i;

    // Had some trouble here on the for loop construction
    for(i = 0; i < num_of_inputs; ++i){
        // if even
        if(i % 2 ==0){
            second[i] = 2 * first[i];
        }
        // if odd, sqrt
        else{
            second[i] = cbrt(first[i]);
        }
    }
    
    //%12s gives spaces before the string
    printf("%12s %12s\n\n", "Input Array", "2nd Array");


    float sum_of_first = 0;
    float sum_of_sec = 0;
    
    for(i=0; i<num_of_inputs; ++i){
        //printf("%f\n", first[i]);
        printf("%12.5f  %12.5f \n",first[i], second[i]);
        sum_of_first += first[i];
        sum_of_sec += second[i];
    }

    printf("\n\n");
    printf("Sum of the first array is: %f\n", sum_of_first);
    printf("Sum of the second array %f", sum_of_sec);

}