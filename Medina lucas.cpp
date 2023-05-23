#include<stdio.h>
int main()
{
	int jugador,puntos[10],juegos[7]opcion=0,i=0,j=0,acum=0,prom;
printf("ingrese el numero del jugador(del 1 al 30);");
scanf("%d",&jugador);
/*es una verificacion de que el usuario no ingrese un numero que salga de lo establecido*/
while(jugador<1||jugador>30)
{
	printf("---ERROR----\n");
	printf("ingrese el numero del jugador(del 1 al 30);");
scanf("%d",&jugador);
}
do
{
	printf("ingrese el numero del juego(del 1 al 7): ");
	scanf("%d",&juegos[i]);
	/*es una verificacion de que el usuario no ingrese un numero que salga de lo establecido*/
	while(juegos[i]<1||juegos[i]>7)
	{
		printf("---ERROR---\n");
		printf("ingrese el numero del juego(del 1 al 7): ");
		scanf("%d",&juegos[i]);
	}
	printf("ingrese la calificacion del participante(del 1 al 10); ");
	scanf("%d",&puntos[j]);
	/*es una verificacion de que el usuario no ingrese un numero que salga de lo establecido*/
	while(puntos[j]<1||puntos[j]>10)
	{
		printf("---ERROR---\n");
		printf("ingrese la calificacion del participante(del 1 al 10); ");
	scanf("%d",&puntos[j]);
	}
	printf("desea seguir registrando jugadores?1- si 2-no");
	scanf("%d",&opcion);
}while(opcion!=2);
for(j=0;j<7;j++)
{
printf("ingrese el valor del premio del juego numero %d: ",j+1);
}
acum+=puntos[j];
prom=acum/10;
printf("el promedio de calificacion es de %d",prom);
}
