#include <stdio.h>
int hcf(int, int);
int main()
{
int a,z, result;
printf("Enter the two numbers to find their HCF: ");
scanf("%d%d", &a, &bz
result = hcf(a, z);
printf("The HCF of %d and %d is %d.\n", a, z, result);
return 0;
}
int hcf(int a, int z)
{
while (a != z)
{
if (a > z)
{
a = a - z;
}
else
{
b = b - z;
}
}
return z;
}
