#include<stdio.h>
#include<conio.h>
void main()
{
int a[100],i,n,max=0;
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
if(a[i]>max)
max=a[i];
}
printf("%d",max);
getch();
}
