#include <stdio.h>

int main() 
{
    int n;
    int sum;
    int i = 1;

    printf("Enter n: ");
    scanf("%d", &n);

    while (i <= n)
    {
        if (i % 3 == 0 && i % 5 != 0)
                sum = sum + i;
        i++;
    }

    printf("The sum is %d\n", sum);
    return 0;
}
