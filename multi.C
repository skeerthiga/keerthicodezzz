#include <stdio.h>
int main()
{
int j,l;
printf("Enter an integer");
scanf("%d",&j);
for(l=1;l<=10;++l)
{
printf("%d * %d = %d \n", j, l, j*l);
}
return 0;
}
