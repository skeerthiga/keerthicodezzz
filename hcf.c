#include <stdio.h>
int gcd(int j,int k)
{
if(j==0||k==0)
return 0;
if(j==k)
return j;
if(j>k)
return gcd(j-k,k);
return gcd(j,j-k);
}
int main()
{
int j=98,k=56;
printf("GCD of %d and %d is %d ", j,k,gcd(j,k));
return 0;
}
