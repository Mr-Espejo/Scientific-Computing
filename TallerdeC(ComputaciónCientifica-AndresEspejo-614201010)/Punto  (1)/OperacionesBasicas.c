#include<stdio.h>

void main()
{
int entero;
float decimal;
 
decimal=6.5;
entero=5;

float sum=entero+decimal;
float resta=entero-decimal ;
float multi=entero*decimal;
float divi= entero/decimal;
float diviinver= decimal/entero;

printf("suma: %f\n",sum);
printf("Resta: %f\n",resta);
printf("Multiplicacion: %f\n",multi);
printf("Division: %f\n",divi);
printf("Division inversa: %f\n",diviinver);

/* resultado con tipo entero int

int sum=entero+decimal;
int resta=entero-decimal ;
int multi=entero*decimal;
int divi= entero/decimal;
int diviinver= decimal/entero;

printf("suma: %d\n",sum);
printf("Resta: %d\n",resta);
printf("Multiplicacion: %d\n",multi);
printf("Division: %d\n",divi);
printf("Division reciproca: %d\n",diviinver);
*/
}

