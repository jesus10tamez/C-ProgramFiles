#include<stdio.h>
#include<conio.h>
main()
{
	int i,a,n;
	printf("Hata que termino quiere llegar?  ");
	scanf("%d", &n);
	a=2;
	for(i=1;i<=n;i=i+1)
	{
		printf("%d\n",a);
		if(i%2==0)
		{
			a = a-1;
		}
		else
		{
			a = a*2;
		}
	}
	getch(); 
}
