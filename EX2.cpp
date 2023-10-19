#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<Windows.h>

main()
{
	int f,c,max,min,i,j,du,fu,total;
	printf("Cuantas filas quiere en la matriz? ");
	scanf("%d",&f);
	printf("Cuantas columnas quiere en la matriz? ");
	scanf("%d",&c);
	
	int A[f][c];
	printf("Numero menor de los numeros aleatorios: ");
	scanf("%d",&min);
	printf("Numero mayor de los numeros aleatorios: ");
	scanf("%d",&max);
	system("PAUSE");
	system("CLS");
	srand(time(NULL));
	for(i=0;i<f;i++)
	{
		for(j=0;j<c;j++)
		{
			A[i][j] = min+rand()%(max+1-min);
		}
	}
	for(i=0;i<f;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("|\t%d\t ",A[i][j]);
		}
		printf("|\n");
	}
	printf("Que quiere hacer: 1)SUMAR  2)MULTIPLICAR:   ");
	scanf("%d",&du);
	printf("Filas:  1)PARES  2)IMPARES:   ");
	scanf("%d",&fu);
	
	if(du==1)
	{
		if(fu==1)
		{
			for(i=0;i<f;i++)
			{
				if((i+1)%2==0)
				{
					for(j=0;j<c;j++)
			    	{
					     total = total + A[i][j];
				    }
				    printf("Fila %d: %d\n",(i+1),total);
				    total = 0;
				}
			}
		}
		else if(fu==2)
		{
	        for(i=0;i<f;i++)
			{
				if((i+1)%2!=0)
				{
					for(j=0;j<c;j++)
			    	{
					     total = total + A[i][j];
				    }
				    printf("Fila %d: %d\n",(i+1),total);
				    total = 0;
				}
			}
		}
		else
		{
			printf("NUMERO INVALIDO\n");
		}
		
	}
	
	else if(du==2)
	{
		total=1;
		if(fu==1)
		{
			for(i=0;i<f;i++)
			{
				if((i+1)%2==0)
				{
					for(j=0;j<c;j++)
			    	{
					     total = total * A[i][j];
				    }
				    printf("Fila %d: %d\n",(i+1),total);
				    total = 1;
				}
			}
		}
		else if(fu==2)
		{
	        for(i=0;i<f;i++)
			{
				if((i+1)%2!=0)
				{
					for(j=0;j<c;j++)
			    	{
					     total = total * A[i][j];
				    }
				    printf("Fila %d: %d\n",(i+1),total);
				    total = 1;
				}
			}
		}
		else
		{
			printf("NUMERO INVALIDO\n");
		}
	}
	else
	{
		printf("NUMERO(S) INVALIDOS");
	}
	getch();
}
