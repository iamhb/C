#include <stdio.h>
#include <conio.h>
void main()
{
	int min,sec,hr;
	clrscr();
	printf("Enter sec value:\n");
	scanf("%d",&sec);

	min=sec/60;
	sec=sec%60;

	if(min>=60)
	{
		hr=min/60;
		min=min%60;
	}

	if(hr)
	{
		printf("hr:%d\n",hr);
	}
	printf("min:%d\n",min);
	printf("sec:%d\n",sec);
	getch();
}
