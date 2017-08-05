#include <stdio.h>
int main()
{
int t1,t2;
printf("Enter two positive integers: ");
scanf("%d %d",&t1,&t2);
while(t1!=t2)
{
if(t1 > t2)
t1-=t2;
else
t2-=t1;
}
printf("GCD = %d",t1);
return 0;
}
