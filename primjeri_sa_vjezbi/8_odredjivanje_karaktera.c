/* Napisati C program koji ucitava proizvoljan karakter sa tastature a zatim
odredjuje da li je ucitani karakter veliko ili malo slovo, cifra ili ostali
karakter. U zavisnosti od odredjenog karaktera ispisati odgovarajucu poruku.*/

#include<stdio.h>
void main()
{char znak;
printf("Unesite jedan karakter:\n");
scanf(" %c",&znak);
if(znak>='A' && znak<='Z')
   printf("Veliko slovo!\n");
else if(znak>='a' && znak<='z')
        printf("Malo slovo!\n");
else if(znak>='0' && znak<='9')
        printf("Cifra!\n");
else 
    printf("Ostali karakteri!\n");
system("PAUSE");
}
