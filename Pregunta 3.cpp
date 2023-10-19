#include<stdio.h>
#include<conio.h>

main()
{
	int n,i;
	float suma=0;
	float promedio;
	printf("De que tamano quiere el arreglo?\n ");
	scanf("%d",&n);
	
	int A[n];
	for(i=0;i<n;i++)
	{
		printf("Inserte un valor para la posicion %d: ",i+1);
		scanf("%d",&A[i]);
	}
	printf("\n\n");
	for(i=0;i<n;i++)
	{
		suma = suma + A[i];
	}
	promedio = suma / n;
	for(i=0;i<n;i++)
	{
		printf("%d, ",A[i]);
	}
	printf("\n\n");
	printf("El promedio de los datos del arreglo es: %.2f",promedio);
	
	getch();
}
