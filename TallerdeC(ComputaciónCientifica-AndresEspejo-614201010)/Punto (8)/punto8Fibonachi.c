#include <stdio.h>

int main()
{
    int i,num1;
    
    printf("Ingesa el n numero:");

    scanf("%d", &num1);

    for (i= 0; i<=num1; i++)
    {
         printf("%d \n",fibonacci(i));
    }
    

return 0;
}


int fibonacci(int n)
{
    if(n>2){
        return fibonacci(n - 1) + fibonacci(n - 2);
    }else if (n == 2) {
            return 1;
        }else if (n == 1) {
            return 1;
        }else if(n==0){
            return 0;
        }

  
}
