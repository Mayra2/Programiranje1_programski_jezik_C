#include <stdio.h>
#include <stdlib.h>

int main(){

    int a, b ,d;
    char c;
    printf("Odaberite osnovnu operaciju koju zelite: \n");
    scanf("%c", &c);

        if (c== '+')
            printf("Sabiranje:\n");
        else if (c== '*')
            printf("Mnozenje: \n");
        else if (c== '-')
            printf("Oduzimanje: \n");
        else if (c== '/')
            printf("Dijeljenje: \n");
        else
            printf("Greška!\n");

    printf("Unesite prvu vrijednost:\n");
    scanf("%d", &a);
    printf("Unesite drugu vrijednost:\n");
    scanf("%d", &b);

        if (c== '+'){
                d= a+b;
                printf("%d + %d = %d\n", a, b, d);
        }

        else if (c== '*'){
                d= a*b;
                printf("%d * %d = %d\n", a, b, d);
        }

        else if (c== '-'){
                d= a-b;
                printf("%d - %d = %d\n", a, b, d);
        }
        else if (c== '/' && b==0)
                printf("Dijeljenje sa nulom!");

        else if (c== '/'){
                d=a/b;
                printf("%d / %d = %d\n", a, b, d);
        }
        else
            printf("Greška!\n");
    return 0;
}

