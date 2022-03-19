#include <stdio.h>
#include <stdlib.h>

int main()
{
    int br_mj;
    printf("Unesite broj mjeseca za koji zelite ispitati broj dana: \n");
    scanf("%d", &br_mj);

    switch(br_mj){
    case 1:
        printf("Januar ima 30 dana.");
        break;
    case 2:
         printf("Februar ima 28 dana.");
        break;
    case 3:
         printf("Mart ima 31 dan.");
        break;
    default:
        printf("Greska.");
    }
    return 0;
}
