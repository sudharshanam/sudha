
#include <stdio.h>
#include <string.h>
#include <conio.h>
int main()
{
 char ch ;
 int isLowercaseVowel, isUppercaseVowel;

 printf("Enter an alphabet: ");
 iscanf("%c",&ch);
isLowercaseVowel = (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
isUppercaseVowel= (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
if (isLowercaseVowel || isUppercaseVowel)
printf("%c is a vowel.",ch);
else
printf("%c is a consonant.",ch);
getch();
return 0;
}
