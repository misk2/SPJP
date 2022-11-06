#include <stdio.h>
#include <stdlib.h>

int main()
{
     int dni, msc, rok;

    printf("Podaj liczbe dni");
    scanf("%d", &dni);
    printf("Podaj liczbe miesiecy ");
    scanf("%d", &msc);
    printf("Podaj rok ");
    scanf("%d", &rok);
    if(rok>0) {
    if (msc<=12) {
    if(msc==1 || msc==3 || msc==5 || msc==7 || msc==8 || msc ==10 || msc==12){
    if(dni<=31) {
    printf("Twoja data jest prawidłowa");

    }
    else{printf("z twoich liczb powstanie nieprawidłowa data");}

    }
    else if (msc==4 || msc==6 || msc==9 || msc==11) {
    if(dni<=30) {
    printf("Twoja data jest prawidłowa");

    }
    else{printf("z twoich liczb powstanie nieprawidłowa data");}

    }
    else {
        if(dni<=28) {
        printf("Twoja data jest prawidłowa");

    }
    else{printf("z twoich liczb powstanie nieprawidłowa data");}
        }
    }
    }


    else{printf("z twoich liczb powstanie nieprawidłowa data");}
    return 0;
}
