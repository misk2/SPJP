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
      printf("Największą liczbą jest liczba " "%d" ,a);
    }
    else { printf("Największą liczbą jest liczba " "%d" ,c);}
    }
    else{
    if(b>c) {printf("Największą liczbą jest liczba " "%d" ,b);}
    else{ printf("Największą liczbą jest liczba " "%d" ,c);}
    }


    return 0;
}
