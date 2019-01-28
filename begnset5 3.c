#include<stdio.h>
#include<conio.h>
void main()
{
char a[100];
int i;
clrscr();
printf("enter string:\n");
scanf("%[^\n]",&a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]!=' ')
printf("%c",a[i]);
}
getch();
}
