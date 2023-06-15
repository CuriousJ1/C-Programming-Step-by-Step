#include <stdio.h>

int main(){
    // know that pointers are in the stack
    int *p, *g;
    int **k;
    int x = 100;
    p = &x;

    // k is now assigned to the p pointer, which now has access to *p value
    k = &p;
    printf("%d\n", &**k);
  
    **k = **k + 1;
    printf("%d\n", x);

    return 0;
}