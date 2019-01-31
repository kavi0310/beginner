#include<stdio.h>
#include<conio.h>
void main()
{
int a,i,m=1,f=0;
clrscr();
scanf("%d",&a);
while(a)
{
m=m*2;
if(m==a)
{
f=1;
break;
}
a--;
}
if(f==1)
printf("yes");
else
printf("no");
getch();
}
