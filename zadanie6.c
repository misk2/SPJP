#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, wynik;

    printf("Podaj rok a powiem Ci czy jest przestępny \n");
    scanf("%d", &a);
    wynik = a % 4;
    if(wynik==0) {
    printf("Rok jest przestępny");
    }
    else {
    printf("niestety ten rok nei jest przestepny");
    }


    return 0;
}
