/* Napisati program koji omogucava unos jednog slova sa tastature, i ukoliko je
slovo malo pretvara ga u veliko, a ako je slovo veliko pretvara ga u malo. */
#include<stdio.h>
void main()
{char slovo;
printf("Unesite jedno slovo:\n");
scanf(" %c",&slovo);
if(slovo>='a' && slovo<='z'){
   slovo=slovo+('A'-'a');
   printf("Uneseno slovo je pretvoreno u veliko: %c\n",slovo);
   }
else if(slovo>='A' && slovo<='Z'){
        slovo=slovo-('A'-'a');
        printf("Uneseno slovo je pretvoreno u malo: %c\n",slovo);
        }
     else
         printf("Pogresan unos!\n");
system("PAUSE");
}
