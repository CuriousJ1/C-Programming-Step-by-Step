#include <stdio.h>

int main() 
{
    int n, sum, i;

    printf("Enter n: ");
    scanf("%d", &n);

    // for (initalise (frist thing in loop) which can be more than 1,
    // then you have a condition
    // then goes to the code in the for loop
    // then goes to the modifier

    // notice the semi colons in this

    for (sum = 0, i = 1; i <= n; sum += i, i++);

    printf("sum of first %d natural numbers is %d\n", n, sum);

    return 0;
}