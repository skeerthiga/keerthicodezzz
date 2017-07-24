include <stdio.h>
 
int main()
{
int p,q,r,j, terms;
printf("Enter number of terms");
scanf("%d", &terms);
p=0;
q=1;
r=0;
printf("Fibonacci terms\n");
for(j=1;j<=terms;j++)
{
printf("%d,",c);
p=q; 
q=r;
r=p+q; 
}
return 0;
} 
