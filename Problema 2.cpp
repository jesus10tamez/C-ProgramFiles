#include<stdio.h>
#include<conio.h>
#include<Windows.h>

main()
{
	int n,i,j,aux,aux1,aux2,aux3,errores;
	float prom;
	printf("Cuantos alumnos son en el grupo? ");
	scanf("%d",&n);
	
	int A[n][4];
	for(i=0;i<n;i++)
	{
		printf("Matricula del alumno %d: ",i+1);
		scanf("%d",&A[i][0]);
		printf("Examen de medio curso del alumno %d: ",A[i][0]);
		scanf("%d",&A[i][1]);
		printf("Examen Ordinario del alumno %d: ",A[i][0]);
		scanf("%d",&A[i][2]);
		A[i][3] = ((float)A[i][1] + (float)A[i][2]) / 2;
		
	}
	system("PAUSE");
	system("CLS");
	do
	{
		for(i=0;i<n-1;i++)
	{
		if(A[i][0]>A[i+1][0])
		{
			aux = A[i+1][0];
			A[i+1][0] = A[i][0];
			A[i][0] = aux;
			aux1 = A[i+1][1];
			A[i+1][1] = A[i][1];
			A[i][1] = aux1;
			aux2 = A[i+1][2];
			A[i+1][2] = A[i][2];
			A[i][2] = aux2;
			aux3 = A[i+1][3];
			A[i+1][3] = A[i][3];
			A[i][3] = aux3;
		}
	}
	errores = 0;
	for(i=0;i<n-1;i++)
	{
		if(A[i][0]>A[i+1][0])
		{
			errores++;
			i = n-1;
		}
	}
	}while(errores!=0);
	
	printf("MATRICULAS | MC | ORDINARIO | PROMEDIO | \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<4;j++)
		{
			if(j==3)
			{
				printf("  | %.2f ",(float)A[i][j]);
			}
			else
			{
				printf("  | %d ",A[i][j]);
			}	
		}
		printf("|\n");
	}
	
	printf("\nMATRICULAS = PROMEDIO\n");
	for(i=0;i<n;i++)
	{
		prom = (A[i][1] + A[i][2])/2;
		printf("%d = %.2f",A[i][0], prom);
		printf("\n");
		prom = 0;
	}
	getch();
}
