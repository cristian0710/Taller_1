#include <stdio.h>

int main()
{
    int i=1, x;
    while(i==1)
    {
        printf("1: imprimir los numeros del 1 al 10\n");
        printf("2: sumar numeros del 1 al 100\n");
        printf("3: sumar numeros pares del 1 al 50\n");
        printf("4: sumar los numeros ipares del 1 al 50\n");

        printf("seleccione una opcion: ");
        scanf("%d", &x);
        i=0;
    }
    return 0;
}
