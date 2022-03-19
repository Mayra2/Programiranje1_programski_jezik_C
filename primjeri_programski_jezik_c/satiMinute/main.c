#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Veliko slovo %4c, \n malo slovo %6c.", 'A', 'a');

    int min, h, s;
    printf("Unesite minute: \n");
    scanf("%.2f", &min);

    h=min/60;
    s=min%60;

    printf("Sati je %.2f i minuta %.2f\n", h, s);
    return 0;
}
