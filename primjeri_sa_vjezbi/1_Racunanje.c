#include<stdio.h>
void main (void)
{
    int a,b;
        int rez_sab,rez_odz,rez_mm,rez_kol;
        a=10;
        b=5;
        rez_sab=a+b;
        rez_odz=a-b;
        rez_mm=a*b;
        rez_kol=a/b;
        printf("%d+%d=%d\n",a,b,rez_sab);
        printf("%d-%d=%d\n",a,b,rez_odz);
        printf("%d*%d=%d\n",a,b,rez_mm);
        printf("%d/%d=%d\n",a,b,rez_kol);
}
