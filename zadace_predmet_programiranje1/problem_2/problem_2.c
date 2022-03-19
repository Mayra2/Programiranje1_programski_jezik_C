#include <stdio.h>
#include <stdlib.h>

int main()
{
   int x1, y1, x2, y2, x3, y3, x4, y4;
    printf ("Unesite prvu koordinatu po x: \n");
    scanf ("%d", &x1);
    printf ("Unesite prvu koordinatu po y: \n");
    scanf ("%d", &y1);
    printf ("Unesite drugu koordinatu po x: \n");
    scanf ("%d", &x2);
    printf ("Unesite drugu koordinatu po y: \n");
    scanf ("%d", &y2);
    printf ("Unesite koordinate tacke T po x: \n");
    scanf ("%d", &x3);
    printf ("Unesite  koordinate tacke T po y: \n");
    scanf ("%d", &y3);

       x4= x2-x1;
       y4=y2-y1;

    if((x3>x4 && y3>x4) || (x3<x4 && y3>x4) || (x3>x4 && y3<x4) ){
     printf ("Tacka je van pravougaonika!\n");
    }

   else if (x3<x4 && y3<x4 ){
     printf ("Tacka je unutar pravougaonika!\n");
   }

   else
     printf ("Tacka je na stranici pravougaonika!\n");

return 0;
}
