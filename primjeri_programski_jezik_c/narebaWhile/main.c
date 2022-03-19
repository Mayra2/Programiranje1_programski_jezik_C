#include <stdio.h>
#include <stdlib.h>
//cijeli broj, broj cifara u broju
int main(){
    long broj;
    int i = 0;
    printf("Upisite cijeli broj: \n");
    scanf("%ld", &broj);

    while (broj){
        broj= broj/10;
        i++;
    }
    printf("Unijeli ste %d broj cifara", i);
    return 0;
}
