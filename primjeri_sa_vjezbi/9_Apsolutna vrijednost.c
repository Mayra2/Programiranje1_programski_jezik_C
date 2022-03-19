#include<stdio.h>
void main(){
	char op, broj,broj2;
	printf("Unesite broj 1 ");
	scanf("%c",&broj);
	printf("Unesite operaciju ");
	scanf("%c", &op);
	printf("Unesite broj 2 ");
	scanf("%c", &broj2);
	switch (op){
case '+':
     printf("Suma je %c. \n", broj+broj2);
     break;

case '-':
    printf("Razlika je %c", broj-broj2);
    break;
   default:
   printf("Greska");

	}
	return 0;
}

