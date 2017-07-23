#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
char k;
printf("Enter a character: ");
scanf("%c",&ch);
if((k>='a'&& k<='z') || (k>='A' && k<='Z'))
{
printf("%c is an alphabet",k);
}
else
{
printf("%c is not an alphabet",k);
}
getch();
}
