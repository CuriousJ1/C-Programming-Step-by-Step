# include <stdio.h>
# include <stdlib.h>

/*
what does scanf do and what are the parameters?
What does &age do?
    assigns age into the age variable

*/

// gcc "File name" - builds the file
// ./.aout to run file

int main()
{
    int age;

    printf("Enter age: ");
    scanf("%d", &age);
    printf("Age = %d\n", age);
    return 0;


}