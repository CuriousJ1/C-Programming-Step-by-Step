#include <stdio.h>

/*
Whats the difference between the following

++a
    int a = 5, i;
    i = ++a;

a inreases to 6 then assigned to i


a++
int a = 5, i;
    i = a++;
    
a is assigned to i first, then it will be incremented to 6

*/


int main() {

    int a = 5,b = 6, i;

    i = a++ * b++; 

    printf("a = %d, b = %d, i = %d\n", a, b, i);

    return 0;

}