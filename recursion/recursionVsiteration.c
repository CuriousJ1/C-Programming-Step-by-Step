#include <stdio.h>

// this is an example of tailr ecursion as printNo doesn't return anything

void printNo(unsigned int n){
    if (n==0)
        return;

    printf("%d\n", n);
    n--;
    printNo(n);
}

int main(){
    printNo(3);
    return 0;
}