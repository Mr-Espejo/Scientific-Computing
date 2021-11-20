//6. Escriba un programa en C que imprima si dos n´umeros dados son primos relativos.

#include <stdio.h>

int MCD(int num1, int num2);

int main()
{
    int num1,num2,mcd,a,b;
    
    printf("Ingesa los numeros a evaluar separados por -:");

    scanf("%d-%d", &num1,&num2);

    a=num1;
    b=num2;

    mcd= MCD( a, b);

    if (mcd==1)
       printf("%d y %d SI son numeros primos relativos",num1,num2);
    else   
       printf("%d y %d NO son numeros primos relativos",num1,num2);
   
    

    

return 0;
}

int MCD(int num1, int num2)
{
    if(num2==0)
        return num1;
    else
        return MCD(num2, num1%num2);
}