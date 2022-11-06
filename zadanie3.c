#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;

    printf("Podaj pierwsza liczbe ");
    scanf("%d", &a);
    printf("Podaj druga liczbe ");
    scanf("%d", &b);
    if(a>b){
    printf("Większą liczbą jest liczba " "%d" ,a);}
    else {
    printf("Większą liczbą jest liczba " "%d" ,b);
    }
    return 0;
}
