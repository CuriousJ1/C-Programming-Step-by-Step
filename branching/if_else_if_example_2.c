#include <stdio.h>

/*
Why is this not working?

*/

int main() {
    int a = 10, b = 10;
    // if (a <= b); if this occurs, the contents of the if statement will not occur
    if (a <= b)
    {
        printf("Hello World!");
    }
    printf("This line will always printed\n");
    return 0;
}