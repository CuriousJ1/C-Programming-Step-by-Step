#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int k, i;
    long t;
    t = time(NULL);

    // to get random numbers continuouly, you must change the seed in srand
    //  time is constantly different
    srand(t);
    for (i = 1; i < 10; i++) {
        k = rand() % 1000;
        printf("%d\n", k);
    }
    
    return 0;
}