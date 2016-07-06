#include<stdio.h>
#include<conio.h>
void main()
{
int n;
clrscr();
printf("\n enter num=");
scanf("%d",&n);
if(n>0)
{
printf("positive");
}
elseif(n<0)
printf("negative");
else
printf("zero")
getch();
}
