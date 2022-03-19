#include <stdio.h>
#include <stdlib.h>

void main(void)
{ int x,y,z;
x=128;
y=2;
z=x&y;
printf("Broj z=x&y iznosi: %d\n",z);
z=x|y;
printf("Broj z=x|y iznosi: %d\n",z);
z=y<<1;
printf("Broj z=<<1 iznosi: %d\n",z);

  system("PAUSE");	
  return 0;
}
