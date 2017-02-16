#include <stdio.h>

struct estudiante
{
    float n[3];
    char nombre[20];

};

int main()
{
    int num, i, e, aux1;
    printf("ingrese numero de estudiantes: ");
    scanf("%d",&num);

    struct estudiante s[num];
    float p[num], aux;

    for(i=0;i<num;i++)
    {
        printf("ingrese nombre: ");
        scanf("%s",&s[i].nombre);
        for(e=0;e<3;e++)
        {
            printf("Ingrese nota %d: ",e+1);
            scanf("%f",&s[i].n[e]);
        }
        p[i]=(s[i].n[0]+s[i].n[1]+s[i].n[2])/3;
    }

    aux=p[0];
    for(i=0;i<num;i++)
    {
        if(aux<=p[i])
        {
            aux=p[i];
            aux1=i;
        }
    }

    printf("\nnombre: %s\n",s[aux1].nombre);
    printf("promedio: %1.1f",aux);

    return 0;

}

