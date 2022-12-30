# include <stdio.h>
# include <stdlib.h>


/*
How do I assign variables new values?
*/

int main()
{
    // variabiles
    int a = 10, b = 5;
    int aVar = 0;
    
    // operations
    aVar = a * b;
    b = a % b;
    a = a - b;

    //print functions
    printf("%d\n",aVar);
    printf("%d\n",a);
    printf("%d\n",b);

    return 0;
}