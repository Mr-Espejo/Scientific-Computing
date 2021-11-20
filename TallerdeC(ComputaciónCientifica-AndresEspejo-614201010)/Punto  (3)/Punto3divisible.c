#include <stdio.h>

int main()
{
    int num1,num2;
    printf("Ingesa los numeros a evaluar separados por &:");

    scanf("%d&%d", &num1,&num2);

    if(num1%num2==0)
    {
        printf("El numero %d SI es divisible entre %d",num1,num2);
    }else
    {
        printf("El numero %d NO es divisible entre %d",num1,num2);

    }    

return 0;
}