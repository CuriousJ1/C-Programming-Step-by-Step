#include <stdio.h>

voidtest1(){
    auto int k;
    printf("k = %d\n",k);
    k = 20;

    printf("k = %d\n", k);
}

void test(){
    auto int var;
    printf("var = %d\n", var);
    var++;
    printf("var = %d\n", var);
}

int main(){
    test1();
    test();

    return 0;
}