#include <stdio.h>

/*
Questions.
1.
What's the structure of an if statement?

2.
True or False
Each and every character has a predefined and fixed integer value according
to the ASCII chart, when we use a character in program actually the integer
value for each character is stored.

*/

int main()
{
    char ch;
    printf("Enter and alphabetic character: ");
    scanf("%c", &ch);

    // greater than A or less than Z
    // if True, ch + 32
    if (ch >= 'A' && ch <= 'Z'){
        ch = ch + 32;
        printf("The corresponding lower case is: %c\n", ch);
    }

    // else if its the lwoer case
    // c - 32
    else if (ch >= 'a' && ch <= 'z'){
        ch = ch - 32;
        printf("The corresponding upper case is : %c\n", ch);
    }

    else{
        printf("The given character is not alphabetic\n");
    }

    return 0;

}