#include<stdio.h>
#include<conio.h>
void main()
{
long int n,l=0;
clrscr();
printf("enter n:\n");
scanf("%ld",&n);
while(n)
{
n=n/10;
l++;
}
printf("%ld",l);
getch();
}
