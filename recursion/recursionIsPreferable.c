#include <stdio.h>
/*
benefit of recursion, when exactly we need to write recursion
*/
void decToBin(unsigned int n){
    if (n==1){
        printf("1");
        return ;
    }
    decToBin(n/2);
    printf("%d", n%2);
}

int main(){
    decToBin(10);
    return 0;
}