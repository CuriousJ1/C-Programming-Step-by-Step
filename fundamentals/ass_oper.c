#include <stdio.h>

int main() {

    int x;
    // The following line will not compile
    10 = x;
    printf("x = %d\n", x);
    return 0;
}