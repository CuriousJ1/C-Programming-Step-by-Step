#include <stdio.h>

/*
Questions
1. how do we create a character type?
2. for a str character, can we use " "?
3. Other than scanf, how can we gather a character from the keyboard
4. What does getchar() do?
*/

int main()
{
    char ch = 'A';
    printf("Character is %c\n", ch);
    printf("Enter a character: ");
    char another;
    // scanf("%c", &another);
    another = getchar();
    printf("You have typed : %c\n", another);

    return 0;
}