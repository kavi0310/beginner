#include<stdio.h>
#include<conio.h>
void main()
{
int n;
clrscr();
scanf("%d",&n);
if(n%4==0&&n%100!=0)
printf("leap year");
else
printf("not");
getch();
}
