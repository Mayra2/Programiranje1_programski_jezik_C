/* Napisati program koji omogucava unos dva realna broja x i y, i odredjuje da
li je x vece, manje ili jednako y, te ispisuje odgovarajucu poruku. */

#include<stdio.h>

void main(){
float x,y;
printf("Unesite brojeve koje zelite uporediti:\n");
scanf("%f %f",&x,&y);
if(x>y)
       printf("Broj x=%.2f je veci od broja y=%.2f\n",x,y);
else if(x<y)
            printf("Broj x=%.2f je manji od broja y=%.2f\n",x,y);
else
    printf("Brojevi su jednaki!");
system("PAUSE");
}
