#include<stdio.h>
#include<conio.h>
#include<Windows.h>
int n;
void crearMatriz()
{
	printf("Cuantos anos quiere capturar?: ");
	scanf("%d",n);
	return 0; 
}

void capturarMatriz()
{
	int i,A[n][5];
	for(i=0;i<n;i++)
	{
		printf("Ano %d que quiera capturar: ");
		scanf("%d",&A[i][0]);
		printf("1er trimestre del ano %d: ");
		scanf("%d",&A[i][1]);
		printf("2do trimestre del ano %d: ");
		scanf("%d",&A[i][2]);
		printf("3ro trimestre del ano %d: ");
		scanf("%d",&A[i][3]);
		printf("4to trimestre del ano %d: ");
		scanf("%d",&A[i][4]);
		A[i][5] = A[i][1] + A[i][2] + A[i][3] + A[i][4];
	}
}

void ventasAno()
{
	int i,A[n][5];
	printf("Año\t\tVentas\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t|\t%d|\n",A[i][0],A[i][5]);
	}
}
main()
{
	printf("\t\tVENTAS TRIMESTRALES POR ANO\n\n");
	crearMatriz();
	capturarMatriz();
	ventasAno();
	
	
	getch();
}
