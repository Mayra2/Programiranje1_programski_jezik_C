/* Funkcija f(x) definisana je po segmentima
     {0, x<=0
f(x)={x, 0<x<=2
     {1-x, 2<x<=5
     {x^2-1, x>5
Napisati program koji ispituje da li je funckija definisana za unos x*/

#include<stdio.h>

void main()
{
    float x,fx;
printf("Unesite vrijednost x:\n");
scanf("%f",&x);

    if(x<=0)
    fx=0;
   else if(x<=2 && x>=0)
           fx=x;
    else if(x<=5 && x>=2)
            fx=1-x;
    else
    fx=x*x-1;

    printf("f(%.2f) = %.2f\n",x,fx);
    return 0;
}
