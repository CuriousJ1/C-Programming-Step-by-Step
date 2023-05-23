#include <stdint.h>

int main()
{
    int count;

    for(count = 1; count <= 1000; count ++)
    {
        if (count % 2 == 0)
            continue;

        printf("Counter = %d\n", count);
    }
    
    return 0;
}