#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<Windows.h>

float promedio(float tareas,float MC, float ord);

main()
{
	
    int n,i,j;
	
	printf("Cuantos alumnos hay en el grupo: ");
	scanf("%d",&n);
	
	float mat[n][5];

	for(i=0;i<n;i++)
	{
		for(j=0;j<5;j++)
		{
			if(j=0)
			{
				printf("Numero de matricula del alumno %d\n",i+1);
				scanf("%f",&mat[i][j]);
			}
			if(j=1)
			{
				printf("TAREAS del alumno %f\n",mat[i][0]);
				scanf("%f",&mat[i][j]);
			}
			if(j=2)
			{
				printf("MC del alumno %f\n",mat[i][0]);
				scanf("%f",&mat[i][j]);
			}
			if(j=3)
			{
				printf("Ordinario del alumno %f\n",mat[i][0]);
				scanf("%f",&mat[i][j]);
			}
			if(j=0)
			{
				mat[i][4] = promedio(mat[i][1],mat[i][2],mat[i][3]);
			}
			
		}
		
	}

	for(i=0;i<n;i++)
	{
		
		for(j=0;j<5;j++)
		{
			printf("%.1f|",mat[i][j]);
		}
		printf("\n");
	}
	
	getch();
	
}

float promedio(float tareas,float MC, float ord)
{
   
	float prom;
	prom = (tareas*.3)+(MC*.3)+(ord*.4);
	return prom;
}
