//Ing. Jhusef Alfonso Lopez Parra - Fusion Media - Software Developer Area


//Librerias:
#include <stdio.h>
#include <stdlib.h>
//Definiciones:
#define vengadores 9
#define cinefilos 3
//Definicion de Arreglos y Funciones:
int calificaciones[vengadores][cinefilos];
int puntajes[vengadores][2];
int ingresarDatos(int c[vengadores][cinefilos],int p[vengadores][2],int v);
int resultados(int p[vengadores][2], int v);
int vengador=0;
//Interacciones:
int ingresarDatos(int c[vengadores][cinefilos],int p[vengadores][2],int v){
	printf("Bienvenidos Cinefilos!\nAcontinuacion se les preguntara la calificacion para cada Vengador/a:");
	for(int i=0;i<vengadores;i+=1){
		printf("\n\nIngresen las calificaciones para ");
		if(i==0){printf("Iron Man: ");}
		if(i==1){printf("Capitan America: ");}
		if(i==2){printf("Thor: ");}
		if(i==3){printf("Hulk: ");}
		if(i==4){printf("Viuda Negra: ");}
		if(i==5){printf("Ojo de Halcon: ");}
		if(i==6){printf("Hombre Hormiga: ");}
		if(i==7){printf("Capitana Marvel: ");}
		if(i==8){printf("Rocket Raccoon: ");}
		printf("\n\nCinefilo #1: ");
		scanf("%d",&c[i][0]);
		while(c[i][0]<1 or c[i][0]>10){
			printf("\nIngresaste un valor erroneo, intentalo de nuevo (califica de 1 a 10)...\n");
			scanf("%d",&c[i][0]);}
		printf("\nCinefilo #2: ");
		scanf("%d",&c[i][1]);
		while(c[i][1]<1 or c[i][1]>10){
			printf("\nIngresaste un valor erroneo, intentalo de nuevo (califica de 1 a 10)...\n");
			scanf("%d",&c[i][1]);}
		printf("\nCinefilo #3: ");
		scanf("%d",&c[i][2]);
		while(c[i][2]<1 or c[i][2]>10){
			printf("\nIngresaste un valor erroneo, intentalo de nuevo (califica de 1 a 10)...\n");
			scanf("%d",&c[i][2]);}
		p[i][0]=(c[i][0]+c[i][1]+c[i][2]);
		if(c[i][0]>=c[i][1] and c[i][0]>=c[i][2]){
			p[i][1]=1;}
		if(c[i][1]>=c[i][0] and c[i][1]>=c[i][2]){
			p[i][1]=2;}
		if(c[i][2]>=c[i][0] and c[i][2]>=c[i][1]){
			p[i][1]=3;}}
	printf("\n\nAntes de terminar, por favor ingresen el numero de un Vengador/a:\n");
	for(int i=0;i<1;i+=1){
		printf("1. Iron Man\n2. Capitan America\n3. Thor\n4. Hulk\n5. Viuda Negra\n6. Ojo de Halcon\n7. Hombre Hormiga\n8. Capitana Marvel\n9. Rocket Raccon\n");
		scanf("\nSelecciona: %d",&v);
		while(v<1 or v>9){
			printf("\nIngresaste un valor erroneo, intentalo de nuevo (de 1 a 10)...\n");
			scanf("%d",&v);}}
	return system("CLS");}
int resultados(int p[vengadores][2],int v){
	printf("Los resultados individuales son:\n");
	printf("Iron Man: %d\n",p[0][0]);
	printf("Capitan America:  %d\n",p[1][0]);
	printf("Thor:  %d\n",p[2][0]);
	printf("Hulk:  %d\n",p[3][0]);
	printf("Viuda Negra:  %d\n",p[4][0]);
	printf("Ojo de Halcon:  %d\n",p[5][0]);
	printf("Hombre Hormiga:  %d\n",p[6][0]);
	printf("Capitana Marvel:  %d\n",p[7][0]);
	printf("Rocket Raccoon:  %d\n",p[8][0]);
	printf("\nEl/La Vengador/a con la mayor calificacion fue:\n");
	int mayorC=0;
	int mayorV=0;
	for(int i=0;i<vengadores;i+=1){
		if(p[i][0]>mayorC){
			mayorC=p[i][0];
			mayorV=i;}}
	if(mayorV==0){printf("Iron Man");}
	if(mayorV==1){printf("Capitan America");}
	if(mayorV==2){printf("Thor");}
	if(mayorV==3){printf("Hulk");}
	if(mayorV==4){printf("Viuda Negra");}
	if(mayorV==5){printf("Ojo de Halcon");}
	if(mayorV==6){printf("Hombre Hormiga");}
	if(mayorV==7){printf("Capitana Marvel");}
	if(mayorV==8){printf("Rocket Raccoon");}
	printf("\n");
	printf("\nEl/La Vengador/a con la menor calificacion fue:\n");
	int menorC=31;
	int menorV=0;
	for(int i=0;i<vengadores;i+=1){
		if(p[i][0]<menorC){
			menorC=p[i][0];
			menorV=i;}}
	if(menorV==0){printf("Iron Man");}
	if(menorV==1){printf("Capitan America");}
	if(menorV==2){printf("Thor");}
	if(menorV==3){printf("Hulk");}
	if(menorV==4){printf("Viuda Negra");}
	if(menorV==5){printf("Ojo de Halcon");}
	if(menorV==6){printf("Hombre Hormiga");}
	if(menorV==7){printf("Capitana Marvel");}
	if(menorV==8){printf("Rocket Raccoon");}
	printf("\n");
	printf("\nQuien dio un voto mayor por el/la vengador/a seleccionado fue:\n");
	printf("Cinefilo #%d",p[v][1]);
	return 0;}
//main
int main(int argv,char** argc){
	ingresarDatos(calificaciones,puntajes,vengador);
	resultados(puntajes,vengador);
	return 0;
}
