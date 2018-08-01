#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	char str[]="HelloWorld";
	int n,i,x,y;
	x=y=1;
	clrscr();
	n=strlen(str);
	for(i=0;i<n;i++,x++,y++)
	{
		gotoxy(x,y);
		printf("%c",str[i]);
	}
	x=n;
	y=1;
	for(i=0;i<n;i++,x--,y--)
	{
		gotoxy(x,y);
		printf("%c",str[n-i-1]); //str[i]//str[n-i]//str[n-i-1]
	}
	getch();
}
