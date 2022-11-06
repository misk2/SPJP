#include <stdio.h>
#include <stdlib.h>

int main()
{
    char znak;
     printf("Podaj znak\n");
     scanf("%c", &znak);
     if (znak>97 && znak<122) {
     printf("znak znajduje sie w tablicy ascii");}
     else {printf("znak nie znajduje sie w tablicy ascii");}
    return 0;
}
