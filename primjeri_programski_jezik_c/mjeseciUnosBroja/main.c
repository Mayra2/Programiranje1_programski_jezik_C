#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("Unesite jedan tocifreni broj: \n");
    scanf("%d", &x);

    int stotice=x/100;
    int ostatak=x%100;
    int desetice= ostatak/10;
    ostatak %= 10;
    int jedinice = ostatak;
    printf("Uneseni broj ima %d stotica, %d desetica i %d jedinica.", stotice, desetice, jedinice);


    int broj_mj;
     printf("Izaberite broj mjeseca za koji želite provjeriti koliko ima dana: \n");
    scanf("%d", &broj_mj);

    switch(broj_mj)
    case 1:

    return 0;
}
