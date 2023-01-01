#include <stdio.h>

int main() {
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);


    // if (year % 4 == 0)
    //     if (year % 100 == 0)
    //         if (year % 400 == 0)
    //             printf("Yes, the year is leap year\n");
    //         else
    //             printf("No this is not a leap year\n");
    //     else
    //         printf("Yes, the year is leap year\n");
    // else
    //     printf("No this is not a leap year\n");

    if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        printf("Yes, %d is lear year\n", year);
    else  
        printf("No, %d is not a leap year\n", year);
    return 0;
}