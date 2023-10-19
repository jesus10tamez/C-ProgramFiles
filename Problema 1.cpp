#include<stdio.h>
#include<conio.h>

main()
{
	int n,i,j,repetidor,masrepe,repetidormax=1;
	printf("De que tamano quiere el arreglo?\n");
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
		repetidor = 1;
		for(j=0;j<n;j++)
		{
			if(i!=j)
			{
			  if(A[i]==A[j])
			  {
			  	repetidor = repetidor +1;
			  }
			}	
		}
		if(repetidor!=1)
		{
			if(repetidormax<=repetidor)
			{
				repetidormax = repetidor;
				masrepe = A[i];
			}
			
		}
	}
	
	for(i=0;i<n;i++)
	{
		printf("%d, ",A[i]);
	}
	printf("\n");
	
	if(repetidormax==1)
	{
		printf("No hubo numeros que se repitieran.");
	}
	else
	{
		printf("El numero que mas se repitio es: %d\n",masrepe);
		printf("Se repitio: %d veces",repetidormax);
	}
	
	getch();
}
