#include <stdio.h>

int main(){
    
    char str[80];
    printf("Enter a string: ");
    scanf("%[^\n]", str);

    // can clean this code up alot more but I cbf

    int i;
    int zero = 0;
    int one = 0;
    int two = 0;
    int three = 0;
    int four = 0;
    int five = 0;
    int six = 0;
    int seven = 0;
    int eight = 0;
    int nine = 0;

   
    // \0 is null
    for(i=0; str[i]!='\0'; i++){
        if(str[i] == '0')
            zero++;
        else if(str[i] == '1')
            one++;
        else if(str[i] == '2')
            two++;
        else if(str[i] == '3')
            three++;
        else if(str[i] == '4')
            four++;
        else if(str[i] == '5')
            five++;
        else if(str[i] == '6')
            six++;
        else if(str[i] == '7')
            seven++;
        else if(str[i] == '8')
            eight++;
        else if(str[i] == '9')
            nine++;
        else
            continue;
    }

    printf("%d ", zero);
    printf("%d ", one);
    printf("%d ", two);
    printf("%d ", three);
    printf("%d ", four);
    printf("%d ", five);
    printf("%d ", six);
    printf("%d ", seven);
    printf("%d ", eight);
    printf("%d ", nine);

    return 0;
}