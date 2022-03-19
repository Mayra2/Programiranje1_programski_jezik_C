#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x1, iy1, x2, iy2, suma1, suma2, razlika1, razlika2;
    printf("Unesite realni dio prvog kompleksnog broja x1: \n");
    scanf("%f", &x1);
    printf("Unesite imaginarni dio prvog kompleksnog broja iy1: \n");
    scanf("%f", &iy1);
    printf("Unesite realni dio drugog kompleksnog broja x2: \n");
    scanf("%f", &x2);
    printf("Unesite imaginarni dio dugog kompleksnog broja iy2: \n");
    scanf("%f", &iy2);
    suma1=x1+x2;
    suma2=iy1+iy2;
    printf("Realni dio brojeva %.2f i %.2f i imaginarni dio brojeva i%.2f i i%.2f daju sumu: %.2f + i%.2f \n", x1, x2, iy1, iy2, suma1, suma2);

    razlika1=x1-x2;
    razlika2=iy1-iy2;
    printf("Realni dio brojeva %.2f i %.2f i imaginarni dio brojeva i%.2f i i%.2f daju razilku: %.2f + i%.2f", x1, x2, iy1, iy2, razlika1, razlika2);
}
