#include <stdio.h>
#include <stdlib.h>

int main()
{
    int broj;
   printf("Unesite trocifreni br");
   scanf("d", &broj);
   int ostatak = broj%10;
   broj/=10;
   int desetice= broj%10;
   broj/=10;
   int stotice=broj/10;
   printf("stotice %d desetice %d jedinice %d", stotice, desetice, ostatak);
    return 0;
}
