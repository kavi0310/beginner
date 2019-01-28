#include<stdio.h>
#include<conio.h>
void main()
{
char a[100];
int i,l=0;
clrscr();
scanf("%[^\n]",&a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]=='.'||a[i]=='*'||a[i]=='&'||a[i]=='$'||a[i]=='@'||a[i]=='#'||a[i]=='^'||a[i]==','||a[i]==';'||a[i]=='"'||a[i]=='!'||a[i]=='_')
l++;
}
printf("%d",l);
getch();
}
