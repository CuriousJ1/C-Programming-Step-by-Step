#include <stdio.h>

int main(){
    int x = 300;
    char *k;
    int *p;
    // 00000
    k = (char *)&x;
    p = &x;
    printf("%d %d\n", *p, *k);
    k = k + 1;

    return 0;
}