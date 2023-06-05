#include <stdio.h>

voidtest1(){
    auto int k;
    printf("k = %d\n",k);
    k = 20;

    printf("k = %d\n", k);
}

void test(){
    static int var;
    printf("var = %d\n", var);
    var++;
    printf("var = %d\n", var);
}

int main(){
    test();
    test();
    test();
    
    return 0;
}