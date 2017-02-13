#include <stdio.h>

int main()
{
    int i, x, y, n=1, t, c, a, v[5];
    while(n==1)
    {
        c=1;
        printf("1: imprimir los numeros del 1 al 100\n");
        printf("2: imprimir las tablas de multiplicar de un numero, del 1 al 20\n");
        printf("3: solucionar el factorial de un numero\n");
        printf("4: solucionar el numero de fibonacci\n");
        printf("5: pedir al usuario que ingrese 5 numeros aleatorios, y almacenarlos en un array, y mostrarlos en pantalla\n\n");
        printf("Digite la opcion: ");
        scanf("%d", &x);

        switch(x)
        {
        case 1:
            {
                for(i=1;i<=100;i++)
                {
                    printf("%d ",i);
                }
            }
            break;
        case 2:
            {
                printf("ingrese numero: ");
                scanf("%d", &y);
                for(i=1;i<=20;i++)
                {
                    t= y*i;
                    printf("%d * %d = %d\n", y, i, t);
                }
            }
            break;
        case 3:
            {
                printf("ingrese numero: ");
                scanf("%d", &y);
                for(i=1;i<=y;i++)
                {
                    c=c*i;
                }
                printf("El factorial de %d es: %d", y, c);
            }
            break;
        case 4:
            {
                c=0;
                a=0;
                printf("Ingrese numero: ");
                scanf("%d", &y);
                for(i=1;i<=y;i=c)
                {
                    c= i+a;
                    if(c<=y)
                    {
                       printf("%d + %d = %d\n", a, i, c);
                    }
                    a=i;
                }
            }
            break;
        case 5:
            {
                for(i=0;i<5;i++)
                {
                    printf("Ingrese numero: ");
                    scanf("%d", &v[i]);
                }
                for(i=0;i<5;i++)
                {
                    printf("%d ", v[i]);
                }
            }
        }
        printf("\nDesea realizar otra operacion 1.SI  2.NO ");
        scanf("%d", &n);
        system("cls");
    }
    return 0;
}
