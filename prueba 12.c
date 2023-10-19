#include<stdio.h>
#include<conio.h>
 
main()
{
	int n,i,j;
	printf("Cuantos años quiere capturar?: ");
	scanf("%d",&n);
	
	int A[n][5];
	for(i=0;i<n;i++)
	{
		printf("Año %d que quiera capturar: ",i+1);
		scanf("%i",&A[i][0]);
		printf("Ventas del 1er Trimestre del año %i ",A[i][0]);
		scanf("%i",&A[i][1]);
		printf("Ventas del 2do Trimestre del año %i ",A[i][0]);
		scanf("%i",&A[i][2]);
		printf("Ventas del 3ro Trimestre del año %i ",A[i][0]);
		scanf("%i",&A[i][3]);
		printf("Ventas del 4to Trimestre del año %i ",A[i][0]);
		scanf("%i",&A[i][4]);
		A[i][5] = A[i][1]+A[i][2]+A[i][3]+A[i][4];
	}
	 
	for(i=0;i<n;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("| %d ",A[i][j]);
		}
		printf("|\n");
	}
	
	getch();
}
