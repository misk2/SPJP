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
            if(a*a<=b*b+c*c) { printf("Da się z tych liczb stworzyc trojkat prostokątny");}
            else{printf("nie da się utworzyc trojkata prostokątnego z tych liczb");}}

        else {
            if(c*c<=a*a+b*b) { printf("Da się z tych liczb stworzyc trojkat prostokątny");}
            else{printf("nie da się utworzyc trojkata prostokątnego z tych liczb");}}
    }
    else{
        if(b>c) { if(b*b<=a*a+c*c) { printf("Da się z tych liczb stworzyc trojkat prostokątny");}
            else{printf("nie da się utworzyc trojkata prostokątnego z tych liczb");}}
    else{ if(c*c<=a*a+b*b) { printf("Da się z tych liczb stworzyc trojkat prostokątny");}
    else{printf("nie da się utworzyc trojkata prostokątnego z tych liczb");}
    }
    }


    return 0;
}
