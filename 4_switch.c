#include <stdio.h>
#include <time.h>



int main()
{
    int x, a=1, n;
    char b;

    while(a==1)
    {
        system("cls");
        printf("1. Imprimir el mes del sistemas\n");
        printf("2. vocales en codigo ascii\n");
        printf("3. codigo ascii de los numeros del 0-9\n");
        scanf("%d",&x);


        switch(x)
        {
        case 1:
            {
                struct tm *tiempo;
                int dia;
                int mes;
                int anio;

                time_t fecha_sistema;
                time(&fecha_sistema);
                tiempo=localtime(&fecha_sistema);

                anio=tiempo->tm_year + 1900;
                mes=tiempo->tm_mon + 1;
                dia=tiempo->tm_mday;

                /*printf("Dia: %d",dia);
                printf("Mes: %d",mes);
                printf("Año: %d",anio);
                return 0;*/
                switch(mes)
                {
                case 1:
                    {
                        printf("Enero");
                    }
                    break;
                case 2:
                    {
                        printf("Febrero");
                    }
                    break;
                case 3:
                    {
                        printf("Marzo");
                    }
                    break;
                case 4:
                    {
                        printf("Abril");
                    }
                    break;
                case 5:
                    {
                        printf("Mayo");
                    }
                    break;
                case 6:
                    {
                        printf("Junio");
                    }
                    break;
                case 7:
                    {
                        printf("Julio");
                    }
                    break;
                case 8:
                    {
                        printf("Agosto");
                    }
                    break;
                case 9:
                    {
                        printf("Septiembre");
                    }
                    break;
                case 10:
                    {
                        printf("Octubre");
                    }
                    break;
                case 11:
                    {
                        printf("Noviembre");
                    }
                    break;
                case 12:
                    {
                        printf("Diciembre");
                    }
                    break;
                }
            }
            break;
        case 2:
            {
                printf("ingrese vocal: ");
                scanf("%c",&b);
                b=getchar();
                switch(b)
                {
                case 'a':
                    {
                        printf("ASCII: 97");
                    }
                    break;
                case 'e':
                    {
                        printf("ASCII: 101");
                    }
                    break;
                case 'i':
                    {
                        printf("ASCII: 105");
                    }
                    break;
                case '0':
                    {
                        printf("ASCII: 111");
                    }
                    break;
                case 'u':
                    {
                        printf("ASCII: 117");
                    }
                    break;
                default:
                    {
                        printf("digito no valido");
                    }
                    break;
                }
            }
            break;
        case 3:
            {
                printf("ingrese numero del 0-9:");
                scanf("%d",&n);
                switch(n)
                {
                case 0:
                    {
                        printf("SACII: 48");
                    }
                    break;
                case 1:
                    {
                        printf("SACII: 49");
                    }
                    break;
                case 2:
                    {
                        printf("SACII: 50");
                    }
                    break;
                case 3:
                    {
                        printf("SACII: 51");
                    }
                    break;
                case 4:
                    {
                        printf("SACII: 52");
                    }
                    break;
                case 5:
                    {
                        printf("SACII: 53");
                    }
                    break;
                case 6:
                    {
                        printf("SACII: 54");
                    }
                    break;
                case 7:
                    {
                        printf("SACII: 55");
                    }
                    break;
                case 8:
                    {
                        printf("SACII: 56");
                    }
                    break;
                case 9:
                    {
                        printf("SACII: 57");
                    }
                    break;
                default:
                    {
                        printf("digito no valido");
                    }
                }
            }
            break;
            default:
            {
                printf("\nnumero no valido");
            }
        }
        printf("\ndesea realizar otra operacion 1.SI o 2.NO: ");
        scanf("%d", &a);
    }

return 0;
}
