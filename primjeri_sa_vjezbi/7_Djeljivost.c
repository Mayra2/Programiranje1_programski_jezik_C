#include<stdio.h>
void main(){
	int a,b;
	printf("Unesite a i b:");
	scanf("%d %d", &a, &b);
	if (b != 0) {
		if (a%b==0) {
			printf("%d jest djeljiv s %d\n", a, b); }
		else {
			printf("%d nije djeljiv s %d\n", a, b); }
	}
	else {printf("nema djeljenja sa nulom");}
}
