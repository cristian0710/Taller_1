# include  <stdio.h>
# include  <time.h>

int  principal ()
{
 struct  tm * Tiempo;
 int dia;
 int mes;
 int anio;

 time_t fecha_sistema;
 Tiempo (y fecha_sistema);
Tiempo = localtime (y fecha_sistema);

anio = Tiempo-> tm_year + 1900 ;
MES = Tiempo-> tm_mon + 1 ;
 diámetro = Tiempo-> tm_mday;

 printf ( " Dia:% d " , dia);
 printf ( " Mes:% d " , MES);
 printf ( " Año:% d " , anio);
 volver  0 ;
}
