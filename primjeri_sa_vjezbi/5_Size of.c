#include <stdio.h>
void main (void)
{
    int i;

    i=sizeof(char);

    printf("Na ovoj masini 1. Charu je dodjijeljeno %d B memorije\n",i);

    i=sizeof(short);

    printf("Na ovoj masini 1. Shortu je dodijeljeno %d B memorije",i);
}
