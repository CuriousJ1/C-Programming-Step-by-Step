/*
RULES
age > 0 and < 13 ----> "Child"
age >=13 and < 20 -----> "Teen"
age >= 20 and < 45 -----> "Young"
age >= 45 and < 60 -----> "Mid-aged"
age >= 60 ----> "Wise"
age <= 0 ---> "Invalid"
*/

#include <stdio.h>

int main()
{
    int age;
    printf("Input your age ");
    scanf("%d", &age);

    if (age > 0 && age < 13)
        printf("Child\n");

    else if (age >= 13 && age < 20)
        printf("Teen\n");

    else if (age >= 20 && age < 45)
        printf("Young\n");

    else if (age >= 45 && age < 60)
        printf("Mid-aged\n");

    else if (age >=60)
        printf("Wise\n");
        
    else {
        printf("Invalid\n");
    }

    return 0;

}