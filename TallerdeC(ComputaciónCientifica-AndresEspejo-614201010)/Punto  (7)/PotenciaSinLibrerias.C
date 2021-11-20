#include <stdio.h>

unsigned long power(unsigned int base, unsigned int exponent);

int main()
{
  unsigned int base, exponent;
  int i;
  for (i=0; i<10 ; i++)
  {
    printf("Ingrese la base y el exponente separado por & (2&3): ");
    scanf("%u&%u",&base,&exponent);
    printf("=%u^%u=%lu\n",base, exponent , power (base,exponent));
  }
  return 0;
}

unsigned long power (unsigned int base, unsigned int exponent)
{
  unsigned int e=exponent; 
  unsigned long p=1;
  
  for (e; e>0 ; e--){
    p=p*base;
  }

  return p;

}