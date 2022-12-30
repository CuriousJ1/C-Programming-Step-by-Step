#include <stdio.h>

/*
Questions
1. What is casting?
2. How can we convert the type of one variable to a float without
    changing the data type?
3.

*/

int main()
{
    int a = 5 , b = 2;
    float r;
    // casting below
    r = (float)a / b;
    printf("r = %f\n", r);
    return 0;

}