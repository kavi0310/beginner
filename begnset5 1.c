#include<stdio.h>
#include<conio.h>
void main()
{
char a[100];
int i,n;
clrscr();
printf("enter a string:\n");
scanf("%s",&a);
printf("enter n:\n");
scanf("%d",&n);
while(n)
{
printf("%s\n",a);
n--;
}
getch();
}
