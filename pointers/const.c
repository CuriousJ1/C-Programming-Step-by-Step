#include <stdio.h>

int main(){
    const double PI = 3.14;
    int x[] = {1, 2, 3};
    const int * p = x;

    p++;    // this is legal
    //(*p)++; // this is illegal

    return 0;
}