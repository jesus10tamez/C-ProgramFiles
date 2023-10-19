#include<stdio.h>
#include<conio.h>
main()
{
	int n,i,a=2;

	for(i=1;i<=0;i++);
	{
		printf(",%d",a);
		if(i%2==0)
		{
			a = a - 1;
		}
		else 
		{
	    	a = a * 2;
		}
		
	}
	getch();
}
