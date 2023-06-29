#include<stdio.h>
#include<conio.h>
void main()
{
   char c;
   clrscr();
   printf("press key = S day1\n");
   printf("press key = M day2\n");
   printf("press key = T day3\n");
   printf("press key = W day4\n");
   printf("press key = t day5\n");
   printf("press key = F day6\n");
   printf("press key = s day7\n");
   printf("\nenter the first latter of the day=");
   scanf("%c",&c);
   switch(c)
   {
     case 'S':
	    printf("Sonday");
	    break;
     case 'M':
	    printf("Monday");
	    break;
     case 'T':
	    printf("Tuesday");
	    break;
     case 'W':
	    printf("Wednesday");
	    break;
     case 't':
	    printf("thursday");
	    break;
     case 'F':
	    printf("Friday");
	    break;
     case 's':
	    printf("seturday");
	    break;


   }
   getch();



}