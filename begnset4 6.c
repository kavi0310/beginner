#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,t;
clrscr();
scanf("%d%d",&a,&b);
t=a;
a=b;
b=t;
printf("%d %d",a,b);
getch();
}
