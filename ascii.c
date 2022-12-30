# include <stdio.h>

/*
do for loops need a semi colon?

can we subtract character variables
- yes due to ASCII numbers associated with each character
*/

int main()
{
    char ch = 'A';

    printf("%d - %c\n", ch, ch);
    int i = 65;

    for (i = 65; i < 91; i++)
        printf("%d - %c\n", i, i);

    return 0;
}