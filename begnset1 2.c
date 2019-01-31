#include<stdio.h>
#include<conio.h>
void main()
{
long int a;
clrscr();
scanf("%ld",&a);
if(a%2==0&&a>0)
printf("even");
else if(a%2!=0&&a>0)
printf("odd");
else
printf("invalid");
getch();
}
