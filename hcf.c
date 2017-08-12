#include <stdio.h>
int main()
{
int i,k1,k2,min,hcf=1;
printf("Enter any two numbers to find HCF: ");
scanf("%d%d", &k1, &k2);
min = (k1<k2) ? k1 : k2;
for(i=1; i<=min; i++)
{
if(k1%i==0 && k2%i==0)
{
hcf=i;
}
}
printf("HCF of %d and %d = %d\n",k1,k2,hcf);
return 0;
}
