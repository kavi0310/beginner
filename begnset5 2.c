#include<stdio.h>
#include<conio.h>
void main()
{
char a[100],b[100];
int i,j,l=0,c=0;
clrscr();
printf("enter two strings:\n");
scanf("%s %s",&a,&b);
for(i=0;a[i]!='\0';i++)
{
l++;
}
for(j=0;b[j]!='\0';j++)
{
c++;
}
if(l>c)
printf("%s",a);
else if(c==l)
printf("%s",a);
else
printf("%s",b);
getch();
}
