#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<Windows.h>

main()
{
	int d,A[20],i,x,y,suma,pts,continuar;
	float prom,w;
	printf("Nivel de difcultad: 1)FACIL  2)INTERMEDIO  3)DIFICIL\n\n");
	scanf("%d",&d);
	
	switch(d)
	{
		case 1:
			x=1;
			y=25;
			break;
		
		case 2:
			x=1;
			y=50;
			break;
		
		case 3:
			x=1;
			y=100;
			break;
			
		default:
			printf("No elegiste nivel de dificultad");
			
	}
	srand(time(NULL));
	for(i=0;i<20;i++)
	{
		A[i] = x+rand()%(y+1-x);
		suma = suma + A[i];
	}
	prom = (float)suma/20;
	
	
	
	printf("\n");
	do
	{
		printf("Adivina el promedio: ");
		scanf("%f",&w);
		if((prom-(prom*.005))<=w<=(prom+(prom*.005)))
		{
			pts = pts+300;
			printf("+300pts");
			printf("Si desea acabar el juego presione (2), si desea continuar presione cualquier otro numero\n");
			scanf("%d",&continuar);
		}
		else if((prom-(prom*.01))<=w<=(prom+(prom*.01)))
		{
			pts = pts+100;
			printf("+100pts");
			printf("Si desea acabar el juego presione (2), si desea continuar presione cualquier otro numero\n");
			scanf("%d",&continuar);
		}
		else if((prom-(prom*.1))<=w<=(prom+(prom*.1)))
		{
			pts = pts+50;
			printf("+50pts");
			printf("Si desea acabar el juego presione (2), si desea continuar presione cualquier otro numero\n");
			scanf("%d",&continuar);
		}
		else if((prom-(prom*.2))<=w<=(prom+(prom*.2)))
		{
			pts = pts+10;
			printf("+10pts");
			printf("Si desea acabar el juego presione (2), si desea continuar presione cualquier otro numero\n");
			scanf("%d",&continuar);
		}
		else
		{
			printf("+0pts");
			printf("Si desea acabar el juego presione (2), si desea continuar presione cualquier otro numero\n");
			scanf("%d",&continuar);
		}
		
	}while(continuar!=2);
	
	printf("Puntos finales: %d",pts);
	printf("\n%.2f",prom);
	for(i=0;i<20;i++)
	{
		printf("%d,",A[i]);
	}
	getch();
}
