#include <stdio.h>

void printNo(unsigned int n){
    if (n==0);
        return;

    
    printNo(n-1);
    printf("%d\n", n);
}

int main(){
    printNo(3);
    return 0;

}