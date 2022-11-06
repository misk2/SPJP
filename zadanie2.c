#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, wd, wdz, wm, wo, wrzdz;

    printf("Podaj pierwsza liczbe ");
    scanf("%d", &a);
    printf("Podaj druga liczbe ");
    scanf("%d", &b);
    wd = a+b;
    wdz = a/b;
    wm = a * b;
    wo = a - b;
    wrzdz = a%b;

    printf("wynik dodawania równa się " "%d\n", wd );
    printf("wynik odejmowania równa się " "%d\n", wo);
    printf("wynik mnozenia równa się " "%d\n", wm);
    printf("wynik dzielenia równa się " "%d\n", wdz);
    printf("wynik dzielenia z reszta równa się " "%d reszty %d\n", wdz, wrzdz);
    return 0;
}
