#include <stdio.h>

int main(){
    int *p;
    float *f;
    double *d;
    char *k;

    printf("%lu %lu %lu\n", sizeof(p), sizeof(f), sizeof(d), sizeof(k));

    printf("%lu %lu %lu\n", sizeof(*p), sizeof(*f), sizeof(*d), sizeof(*k));
}