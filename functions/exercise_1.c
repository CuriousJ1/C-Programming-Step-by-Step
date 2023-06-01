#include <stdio.h>

unsigned int my_function(unsigned int first, unsigned int second, unsigned int third){

    unsigned int largest_divisor;
    unsigned int i;
    
    for(i = first; i <= second; i++){
        if(i % third == 0){
            largest_divisor = i;
        }
    }
    return largest_divisor;
}




int main(){

   int f, s, t, i;
    printf("Enter your first number: ");
    scanf("%d", &f);

    printf("Enter your second number: ");
    scanf("%d", &s);

    printf("Enter your divisor: ");
    scanf("%d", &t);

    i = my_function(f, s, t);
    printf("Total Interest: %d\n", i);

    return 0;
}