#include <stdio.h>


/*
Question
How can we negate the carriage return error
*/
int main()
{
    char ch;
    int i, j;

    printf("Enter an integer: ");
    scanf("%d", &i);
    printf("Enter a character: ");
    // note that you need to put a space due to the carriage return properties
    scanf(" %c", &ch);
    printf("Enter another integer");
    scnaf("%d", &j);


}