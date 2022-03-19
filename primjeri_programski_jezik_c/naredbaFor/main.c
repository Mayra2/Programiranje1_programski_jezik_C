#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){

    int broj;
    int proizvod =1;
    printf("Upisite cijeli broj: \n");
    scanf("%d", &broj);

    for (int i = 1; i<=broj; i++){
        proizvod *= i;
    }
     printf("%d ", proizvod);
     return 0;

}


