#include<stdio.h>
int main()
{
int p,k=1,num;
printf("Enter a number");
scanf("%d",&num);
for(p=1;p<=num;p++)
k=k*p;
printf("Factorial of %d is: %d",num,k);
return 0;
}
