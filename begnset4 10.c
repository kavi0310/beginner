#include<stdio.h>
#include<conio.h>
void main()
{
char a[100];
int i,l=0;
clrscr();
scanf("%s",&a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]>=48&&a[i]<=57)
{
l++;
}
}
printf("%d",l);
getch();
}
