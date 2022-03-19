#include <stdio.h>
#include <stdlib.h>

float sabiranje(float a, float b){
    printf("Unesite dva broja: \n");
    scanf("%f%f", &a, &b);
    float rez;
    rez=a+b;
    return rez;
}

float oduzimanje(float a, float b){
     printf("Unesite dva broja: \n");
    scanf("%f%f", &a, &b);
    float rez;
    rez=a-b;
    return rez;
}
float mnozenje(float a, float b){
     printf("Unesite dva broja: \n");
    scanf("%f%f", &a, &b);
    float rez;
    rez=a*b;
    return rez;
}
float dijeljenje(float a, float b){
     printf("Unesite dva broja: \n");
    scanf("%f%f", &a, &b);
    float rez;
    if(b>0)
    rez=a/b;
    else
         printf("Dijeljenje 0 nije moguce.");
    return rez;
}
float kvadrat(float a){
     printf("Unesite broj: \n");
    scanf("%f", &a);
    float rez;
    rez=pow(a, 2);
    return rez;
}
float korjen(float a){
     printf("Unesite broj: \n");
    scanf("%f", &a);
    float rez;
    rez=sqrt(a);
    return rez;
}

int main()
{
    int brojOp;
    float prviBr, drugiBr, rezultat;
    char kraj;

do{
    printf("Odaberite broj zeljene operacije:\n 1.Sabiranje\n 2.Oduzimanje\n 3.Mnozenje\n 4.Dijeljenje\n 5.Kvadriranje\n 6.Korjenovanje\n");
    scanf("%d", &brojOp);

switch(brojOp){

case 1:
    rezultat=sabiranje(prviBr, drugiBr);
     printf("Rezultat sabiranja je: %f\n", rezultat);
    break;

case 2:
    rezultat=oduzimanje(prviBr, drugiBr);
     printf("Rezultat oduzimanja je: %f\n", rezultat);
    break;

case 3:
    rezultat=mnozenje(prviBr, drugiBr);
     printf("Rezultat mnozenja je: %f\n", rezultat);
    break;
case 4:

    rezultat=dijeljenje(prviBr, drugiBr);
     printf("Rezultat dijeljenja je: %f\n", rezultat);
    break;
case 5:

    rezultat=kvadrat(prviBr);
     printf("Rezultat kvadriranja je: %f\n", rezultat);
    break;

case 6:
    rezultat=korjen(prviBr);
     printf("Rezultat korjenovanja je: %f\n", rezultat);
    break;
default:
    printf("Greska.\n");
    break;
   }

    printf("Za izlazak iz programa unesite: \"kraj\" ");
   scanf("%c", &kraj);

   if(kraj =="kraj"|| kraj=="KRAJ")
    break;

} while(brojOp<=6);

}


