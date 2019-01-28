#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],i,c=0,n,ave;
clrscr();
printf("enter n:\n");
scanf("%d",&n);
printf("enter array:\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
c=a[i]+c;
}
ave=c/n;
printf("%d",ave);
getch();
}
