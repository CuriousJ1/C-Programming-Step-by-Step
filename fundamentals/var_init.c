# include <stdio.h>
# include <stdlib.h>

/*
questions
1. Why do we initilize a variable 
    so we don't get a random number as the variable

2. WHat does a 0 prefix before a int variable do?
    it will consider it as an octal

3. What are format specifiers?
    Give link

4. what does the 0x prefix do?
*/



int main()
{
    int aVar = 0xa;
    printf("Content of aVar = %d\n", aVar);
    printf("Content of aVar = %o\n", aVar);
    printf("Content of aVar = %x\n", aVar);
    return 0;
}