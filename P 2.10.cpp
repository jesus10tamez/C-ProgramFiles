#include<stdio.h>
#include<conio.h>
#include<Windows.h>

int main()
{
	int n,aux,i,errores;
	printf("Cantidad de elemntos en el arreglo: ");
	scanf("%d",&n);
	
	int A[n];
	for(i=0;i<n;i++)
	{
		printf("Agregue el valor %d: ",i+1);
		scanf("%d",&A[i]);
	}
	
	do
	{
		for(i=0;i<(n-1);i++)
		{
			if(A[i]>A[i+1])
			{
				aux = A[i+1];
				A[i+1] = A[i];
				A[i] = aux;
			}
		}
		errores = 0;
		for(i=0;i<(n-1);i++)
		{
			if(A[i]>A[i+1])
			{
				errores++;
				i = (n-1);
			}
		}
	}
	while(errores!=0);
	
	for(i=0;i<n;i++)
	{
		if(A[i]%2==0)
		{
			printf("%d, ",A[i]);
		}
	}
	
	for(i=n;i==0;i--)
	{
		if(A[i]%2!=0)
		{
			printf("%d, ",A[i]);
		}
	}
	getch();
}
