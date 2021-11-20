/*2. Escriba un programa en C que imprima los multiplos de un numero dado menores
a otro numero dado.
*/

#include <stdio.h>

int main()
{
    int j,num1,num2;
    printf("Ingesa los numeros a evaluar separados por &:");
    scanf("%d&%d", &num1,&num2);
    j=num1;
    printf("Los multiplos de %d menores a %d son:\n",num1,num2);
    
    for ( j ; j<=num2; j= j + num1)
    {
        printf("%d\n",j);
                               
    }
    
}
