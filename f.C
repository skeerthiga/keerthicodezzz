#include <stdio.h>
void main()
{
int o,fact=1,num;
printf("Enter the number\n");
scanf("%d", &num);
if(num<=0)
fact=1;
else
{
for(o=1;o<=num;o++)
{
fact=fact*o;
}
}
  printf("Factorial of %d=%5d\n",num,fact);
}
