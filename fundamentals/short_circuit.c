#include <stdio.h>


/*
Whats a short circuit?
    for the operators, as soon as false its for ++a which will give 0, it skips ++b

*/
int main() {
    int a = -1, b = 10, c;

    c = ++a && ++b;

    printf("a = %d, b = %d, c = %d\n", a, b, c);

    return 0;
}