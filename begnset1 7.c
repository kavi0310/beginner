#include<stdio.h>
#include<conio.h>
void main()
{
char a[10]="hello";
int n;
clrscr();
scanf("%d",&n);
while(n)
{
printf("%s\n",a);
n--;
}
getch();
}
