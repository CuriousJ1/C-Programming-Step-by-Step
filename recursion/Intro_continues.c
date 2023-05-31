#include <stdio.h>

void printMsg(unsigned int n){
    if (n==0)
        return;

    printf("Hello Word %d\n", n);
    n--;
    printMsg(n);  // recursively calling printMsg
}

int main(){
    printMsg(5);  //call to printMsg function
    return 0;
}