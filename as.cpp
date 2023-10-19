#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
	int *vector,*vectorConvertido;
	int i;
	vector=malloc(3*sizeof(int));
	
	vector[0]=2;
	vector[1]=5;
	vector[2]=8;
	
	for(i=0;i<3;i++)
	{
		printf("%i, ",vector[i]);
	}
	
	vectorConvertido=realloc(vector,5*sizeof(int));
	vector[3]=4;
	vector[4]=9;
	printf("\n\n");
	
	for(i=0;i<5;i++)
	{
		printf("%i",vectorConvertido[i]);
	}
	getch();
}
