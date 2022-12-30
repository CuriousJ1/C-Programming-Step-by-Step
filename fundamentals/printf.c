# include <stdio.h>
# include <stdlib.h>

/*
Question 1: what does %d do?
    It's a format specifier as a signed integer

*/

int main()
{
    int id = 5;
    int age = 20;
    double weight = 50.75;
    char grade = 'A';

    // once it hits the format specifier which is an integer, it pulls the id
    printf("The content of ID is: %d, age = %d, weight = %f\n" id, age, weight);

    return 0;
}