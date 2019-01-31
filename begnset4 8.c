#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,f1,f2,f3;
clrscr();
printf("enter n:\n");
scanf("%d",&n);
f1=0;
f2=1;
printf("%d %d ",f1,f2);
f3=f1+f2;
printf("%d ",f3);
for(i=3;i<=n;i++)
{
f1=f2;
f2=f3;
f3=f1+f2;
printf("%d ",f3);
}
getch();
}
