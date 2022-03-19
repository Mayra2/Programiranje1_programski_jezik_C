#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, prviBr=0, drugiBr=1, rez, i;

  printf("Unesite broj: \n");
  scanf("%d", &n);

  for (i=0; i<n; i++)
  {
    if (i<=1)
      rez=i;
    else
    {
      rez=prviBr+drugiBr;
      prviBr=drugiBr;
      drugiBr=rez;
    }
    printf("Brojevi: %d\n", rez);
  }

  return 0;

}

