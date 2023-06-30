#include<stdio.h>
#include<conio.h>
void main()
{
   char ch;
   clrscr();
   printf("input any character=");
   scanf("%c",&ch);
   if((ch>='a' && ch<='z')  || (ch>='A' && ch<='Z') )
    {
      printf(" %c entered value is alphabet",ch);
    }

   else if((ch>='1' && ch<='9'))
    {
      printf("%c  entered value is digit",ch);
    }
   else
    {
      printf(" %c entered value is special character",ch);
    }
    getch();
}