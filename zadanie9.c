#include <stdio.h>
#include <stdlib.h>

int main()
{   int a, b, c, d, pole;
    printf("Wpisz dwie liczby(x i y)pierwszej pary : \n");
    scanf("%d %d",&a,&b);
     printf("Wpisz dwie liczby(x i y) drugiej pary : \n");
    scanf("%d %d",&c,&d);
    pole= abs(a-c)*abs(b-d);
    printf("twoje pole wynosi  %d", pole);
    return 0;
}
