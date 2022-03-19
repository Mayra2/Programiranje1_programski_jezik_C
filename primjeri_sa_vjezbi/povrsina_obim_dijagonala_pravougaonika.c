/* Napisati C program koji ce za unesene velicine stranica pravougaonika u
zavisnosti od izbora korisnika racunati povrsinu, obim ili dijagonalu. */

#include<stdio.h>
#include<math.h>

void main()
{float a,b,rez;
int izbor;
printf("Ovaj program racuna povrsinu, obim i dijagonalu pravougaonika\n");
printf("Unesite stranice a i b pravougaonika:\n");
scanf("%f %f",&a,&b);
printf("*****MENI:*****\n");
printf("1. Racunanje povrsine,\n2. Racunanje obima,\n3. Racunanje dijagonale\n");
printf("Unesite svoj izbor:\n");
scanf("%d",&izbor);
switch(izbor){
              case 1:
                   rez=a*b;
                   printf("P = %f\n",rez);
              break;
              case 2:
                   rez=2*(a+b);
                   printf("O = %f\n",rez);
              break;
              case 3:
                   rez=sqrt(a*a+b*b);
                   printf("d = %f\n",rez);
              break;
              default:
                      printf("Pogresan izbor! Kraj programa.\n");
                      }
system("PAUSE");
}
