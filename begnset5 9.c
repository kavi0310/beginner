#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],n,i,max=0,min;
clrscr();
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]>max)
{
max=a[i];
}
}
min=a[0];
for(i=0;i<n;i++)
{
if(a[i]<min)
{
min=a[i];
}
}
printf("%d %d",max,min);
getch();
}
