#include<stdio.h>
#include<conio.h>
void main()
{
char a;
clrscr();
scanf("%c",&a);
if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u')
printf("vowel");
else if(a=='b'||a=='c'||a=='d'||a=='f'||a=='g'||a=='h'||a=='j'||a=='k'||a=='l'||a=='m'||a=='n'||a=='p'||a=='q'||a=='r'||a=='s'||a=='t'||a=='v'||a=='w'||a=='x'||a=='y'||a=='z')
printf("consonant");
else
printf("invalid");
getch();
}
