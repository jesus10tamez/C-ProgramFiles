#include<stdio.h>
#include<conio.h>

int sumar(int num1, int num2);

main()
{
	int A,B,suma1,multi,suma2,resta,suma3;
	printf("Dame el primer valor: ");
	scanf("%d",&A);
	printf("Dame el segundo valor: ");
	scanf("%d",&B);
	suma1 = sumar(A,B);
	printf("El resultado de la primera suma es: %d\n",suma1);
	if(A>B)
	{
		multi = A*suma1;
	}
	else
	{
		multi = B*suma1;
	}
	printf("El resultado de la multiplicacion es: %d\n",multi);
	suma2 = sumar(suma1,multi);
	printf("El resultado de la suma 2 es: %d\n",suma2);
	if(A<B) 
	{
		resta = suma2-A;
	}
	else
	{
		resta = suma2-B;
	}
	printf("El resultado de ña resta es: %d\n",resta);
	suma3 = sumar(resta,suma1);
	printf("El resultado de la suma 3 es: %d",suma3);
	
	getch();
}

int sumar(int num1, int num2)
{
	int res;
	res = num1 + num2;
	return res;
}
