#include <stdio.h>

int main()
{
    int num1,i,k;
    k=1;
    printf("Ingesa el numero a evaluar :");

    scanf("%d", &num1);

    printf("Los divisores de %d son:\n",num1);

    for ( i=0 ; i<num1; i++)
    {       
        if (num1%k == 0)
        {
            printf("%d\n",k);
        }
        k++;
    }

return 0;
}