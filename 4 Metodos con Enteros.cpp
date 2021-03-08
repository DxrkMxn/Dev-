// DESARROLLADOR: Ing. Jhusef Alfonso López Parra
//--------------------------------------------------------------------------------
// Incluir Bibliotecas: stdio.h
#include <stdio.h> // ( Standard-Input-Output ).
#include <math.h> // ( Mathematical Operations ).
#include <stdlib.h> // ( Standard-Library ).
#include <conio.h> // ( Console-Input-Output ).
// Fin de la inclusion de Bibliotecas.
//--------------------------------------------------------------------------------
// Declaracion de variables y constantes:
int opcion=0; //Enteros entre -32768 a 32767
float promedio=0, n1=0, n2=0, n3=0, n4=0; // Reales entre -3,4·10^(38) a 3,4·10^(38)
// Fin de las declaracion de variables y constantes.
//--------------------------------------------------------------------------------
// Definiciones de funciones:
// Funcion salir (Exit):
void salir(){
	for(int i=0,o=0;i<1;i++){
		printf("\n\nDesea volver a iniciar (1) o salir (2)?");
		scanf("%d",&o);
		if(o==1){
			system("cls"); // Limpia la terminal.
			opcion=0;
		}
		if(o==2){
			system("cls"); // Limpia la terminal.
			printf("Presione una tecla para salir y cerrar");
			getch();
			exit(1);
		}
		if(o!=2 && o!=1){
			printf("Seleccion no valida..\nIntentelo de nuevo..\n\n");
			i=-1;
			getch();
		}
	}
}
// Funcion validar entero:
void validarEntero(int n, float e){
	bool validador=true; // Se define la variable local validador para validar los enteros.
	do{
		printf("\nIngrese el Entero Numero: 0%d: ",n);
		scanf("%f",&e);
		if(((ceil(e))-e)==0){
			// En este condicional pregunta si el valor es entero
			//la funcion ceil es para hacer "Techo", es decir, si el usuario ingresa
			//Un valor que no es entero, ejemplor: -5.5, al realizar (ceil(-5.5)) --> -5
			//Entonces, al restar estos numeros, si es entero, debería dar 0, sino, no. 
			validador=false; // al dar 0, y demostrar ser entero, se le permite salir del ciclo
			if(n==1){n1=e;}
			if(n==2){n2=e;}
			if(n==3){n3=e;}
			if(n==4){n4=e;}
		}
		else{
			validador=true; // no dio 0, no es entero, continua en el ciclo (do-while)
		}
	}while(validador); // Con esto uso el validador para reconocer si es entero o no.
}
// Primera funcion:
void one(){
	system("cls"); // Limpia la terminal.
	system("COLOR 04"); // Cambia el color de la terminal por el 0 Y el del texto por el 4.
	printf("\nIngrese el valor del primer numero: ");
	scanf("%f",&n1);
	printf("\nIngrese el valor del segundo numero: ");
	scanf("%f",&n2);
    printf("\nEl valor de la suma de los numeros %.2f y %.2f corresponde a: %.2f",n1,n2,(n1+n2));
    printf("\nAl restar estos numeros, da como resultado: %.2f",(n1-n2));
    printf("\nSu multiplicacion corresponde a: %.2f",(n1*n2));
    printf("\nY al dividir estos numeros, obtenemos: %.2f",(n1/n2));
	getch();
	salir();
}
// Segunda funcion:
void two(){
	system("cls"); // Limpia la terminal.
	system("COLOR F0"); // Cambia el color de la terminal por el F Y el del texto por el 0.
	printf("\nIngrese la Nota obtenida en el primer corte (30%c del %cfinal): ",37,37);
	scanf("%f",&n1);
	printf("\nIngrese la Nota obtenida en el segundo corte (30%c del %cfinal): ",37,37);
	scanf("%f",&n2);
	printf("\nIngrese la Nota obtenida en el tercer corte (40%c del %cfinal): ",37,37);
	scanf("%f",&n3);
	promedio=((n1*0.3)+(n2*0.3)+(n3*0.4));
	printf("\nEl promedio obtenido en el curso corresponde a: %.2f",promedio);
	if(promedio<2){
		printf(" (Perdio sin derecho a Habilitar.)");
	}
	if((promedio>=2) && (promedio<=2.94)){
		printf(" (Perdio con derecho a Habilitar.)");
	}
	if(promedio>2.94){
		printf(" (Felicidades, Aprobo el curso!.)");
	}
	getch();
	salir();
}
// Tercera funcion:
void three(){
	system("cls"); // Limpia la terminal.
	system("COLOR 71"); // Cambia el color de la terminal por el 7 Y el del texto por el 1.
	//Numero 1:
	validarEntero(1,n1);
	//Numero 2:
	validarEntero(2,n2);
	//Numero 3:
	validarEntero(3,n3);
	//Numero 4:
	validarEntero(4,n4);
	printf("\n\nEl producto de estos numeros corresponde a: %0.f",(n1*n2*n3*n4));
	getch();
	salir();
}
// Cuarta funcion:
void four(){
	system("cls"); // Limpia la terminal.
	system("COLOR 06"); // Cambia el color de la terminal por el 0 Y el del texto por el 6.
	printf("\nIndique cuanto equivale cualquiera de los lados del Cuadrado: ");
	scanf("%f",&n1);
	printf("\nEl Area de este Cuadrado corresponde a: %2.f",(n1*n1));
	getch();
	salir();
}
// Fin de la definicion de funciones y arreglos.
//--------------------------------------------------------------------------------
// Inicio del main, se define con ingreso y egreso de interacciones externas.
main(int argc,char **argv) 
{
	//Cuerpo del main:
	printf("Bienvenido al primer programa de Estructura de Datos\n\n");
	do{
		system("COLOR 0A"); // Cambia el color de la terminal por el 0 Y el del texto por el A.
		printf("Seleecione la opcion que desea realizar:\n");
		printf("\n  1. Suma, Resta, Multiplicacion y Division de dos (2) numeros.");
		printf("\n  2. Calcular la Nota Final de un Curso en USC.");
		printf("\n  3. Producto de cuatro (4) enteros.");
		printf("\n  4. Area de un Cuadrado.");
		printf("\n  5. Salir.");
		printf("\n\nOpcion: ");
		scanf("%d",&opcion);
		switch(opcion){
			case 1:{
				one(); // Llamado a la funcion one.
				break;
			}
			case 2:{
				two(); // Llamado a la funcion two.
				break;
			}
			case 3:{
				three(); // Llamado a la funcion three.
				break;
			}
			case 4:{
				four(); // Llamado a la funcion four.
				break;
			}
			case 5:{
				system("cls"); // Limpia la terminal.
				system("COLOR 0A"); // Cambia el color de la terminal por el 0 Y el del texto por el A.
				printf("Presione una tecla para salir y cerrar");
				getch();
				exit(1);
				break;
			}
			default:{
				system("cls"); // Limpia la terminal.
				system("COLOR 0A"); // Cambia el color de la terminal por el 0 Y el del texto por el A.
				printf("Seleccion no valida..\nIntentelo de nuevo..2\n\n");
				opcion=0;
				getch();
				break;
			}
		}
	}while(opcion==0);// Condicional del do-while a cumplir
	return 0; // Fin del cuerpo del main
}
