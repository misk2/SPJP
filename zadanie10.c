#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;

    printf("Podaj pierwsza liczbe ");
    scanf("%d", &a);
    printf("Podaj druga liczbe ");
    scanf("%d", &b);
    printf("Podaj trzecia liczbe ");
    scanf("%d", &c);
    if(a>b){
        if(a>c) {
            if(a<=b+c) { printf("Da się z tych liczb stworzyc trojkat");}
            else{printf("nie da się utworzyc trojkata z tych liczb");}}

        else {
            if(c<=a+b) { printf("Da się z tych liczb stworzyc trojkat");}
            else{printf("nie da się utworzyc trojkata z tych liczb");}}
    }
    else{
        if(b>c) { if(b<=a+c) { printf("Da się z tych liczb stworzyc trojkat");}
            else{printf("nie da się utworzyc trojkata z tych liczb");}}
    else{ if(c<=a+b) { printf("Da się z tych liczb stworzyc trojkat");}
    else{printf("nie da się utworzyc trojkata z tych liczb");}
    }
    }


    return 0;
}
