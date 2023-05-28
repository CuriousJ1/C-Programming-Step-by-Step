#include <stdio.h>

int main() 
{
    int n, sum, i;

    printf("Enter n: ");
    scanf("%d", &n);

    // for (initalise (frist thing in loop) which can be more than 1, 
    // termination condition, modifier)
    // you can have more than one modifer by extending;
    // notice the semi colons in this
    for (sum = 0, i = 1; i <= n; sum = sum + i, i++);

    printf("sum of first %d natural numbers is %d\n", n, sum);

    return 0;
}