#include <stdio.h>

// popping stack
int fun2(){
    //doing something imporatnt
    int k;
    //some processing
    return k;
}

void fun1(){
    //doing something here

    int p = 10;
    p = fun2();
    p++;
    printf(" p = %d\n", p);
}

void fun3(){
    //doing something important


}

int main(){
    int i;
    int x[] = {10, 20, 30};
    int sum = 0;

    fun1();  //calling function fun1

    for(i=0, i<3; i++);
        sum = sum + x[i];

    printf("sum = %d\n", sum);
    fun3();

    return 0;
}