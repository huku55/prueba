#include<stdio.h>
int main()
{
	int jugador[3],opcion=0,i=0,j=0,acum=0;
printf("ingrese el numero del jugador(del 1 al 30);");
scanf("%d",&jugador[i]);
while(jugador[i]<1||jugador[i]>30)
{
	printf("---ERROR----\n");
	printf("ingrese el numero del jugador(del 1 al 30);");
scanf("%d",&jugador[i]);
}
do
{
	printf("ingrese el numero del juego(del 1 al 7): ");
	scanf("%d",&jugador[i+1]);
	while(jugador[i+1]<1||jugador[i+1]>7)
	{
		printf("---ERROR---\n");
		printf("ingrese el numero del juego(del 1 al 7): ");
		scanf("%d",&jugador[i+1]);
	}
	printf("ingrese la calificacion del participante(del 1 al 10); ");
	scanf("%d",&jugador[i+2]);
	while(jugador[i+2]<1||jugador[i+2]>10)
	{
		printf("---ERROR---\n");
		printf("ingrese la calificacion del participante(del 1 al 10); ");
	scanf("%d",&jugador[i+2]);
	}
	printf("desea seguir registrando jugadores?1- si 2-no");
	scanf("%d",&opcion);
}while(opcion!=2);
acum+=jugador[i+2];
printf("%d",acum);
for(j=0;j<7;j++)
{
printf("ingrese el valor del premio del juego numero %d: ",j+1);
}
}
