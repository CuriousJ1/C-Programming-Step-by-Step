#include <stdio.h>

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