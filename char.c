#include <stdio.h>
#include <string.h>
#include <conio.h>
int main()
{
 char ch ;
printf("Enter an alphabet: ");
 iscanf("%c",&ch);
if ((ch>='a')&&(ch<='z') || (ch>='A')&&(ch<='Z'))
printf("%c is a character.",ch);
else
printf("%d is a not a character.",ch);
getch();
return 0;
}
