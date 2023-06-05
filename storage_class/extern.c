#include <stdio.h>

void test(){
    extern int gVar;
    printf("gVar = %d\n", gVar);
    gVar = 20;
}

int main(){
    extern int gVar;
    printf("gVar = %d\n", gVar);
    gVar = 10l
    test();
    printf("gVar = %d\n", gVar);
    
    return 0;
}