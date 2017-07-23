#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
char k;
printf("Enter a character: ");
scanf("%c",&ch);
if((ch>='a'&& ch<='z') || (ch>='A' && ch<='Z'))
{
printf("%c is an alphabet",ch);
}
else
{
printf("%c is not an alphabet",ch);
}
getch();
}
