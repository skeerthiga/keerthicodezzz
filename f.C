#include<stdio.h>
int main()
{
int p,k=1,n;
printf("Enter a number");
scanf("%d",&n);
for(p=1;p<=n;p++)
k=k*p;
printf("Factorial of %d is %d",n,k);
return 0;
}
