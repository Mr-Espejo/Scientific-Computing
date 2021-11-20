#include <stdio.h>

int main()
{
    int num1,i;
    
    printf("Ingesa el numero a evaluar :");

    scanf("%d", &num1);

    for ( i=2 ; i<num1-1; i++)
    {       
        if (num1%i == 0)
        {
            printf("%d NO es un numero primo",num1);
            return 0;
        }
        
    }

    printf("%d SI es un numero primo",num1);

return 0;
}