//******************************************************************************************************************************//
//******************************************************************************************************************************//
//******************************************************************************************************************************//
//******************************************************************************************************************************//
//******************************************************************************************************************************//
//******************************************************************************************************************************//
//																																//
// Nombre del Proyecto:		Inmobiliaria Casas Caidas																			//
//																																//
// Desarrollador:			Jhusef Alfonso Lopez Parra 		- Ingeniero de Sistemas 	- jhusef@me.com							//
//																																//
// Condicion del Proyecto: 	Usar Strings, Esconder caracteres para la clave usando *******										//
//																																//
//																																//
//******************************************************************************************************************************//
//******************************************************************************************************************************//
//******************************************************************************************************************************//
//******************************************************************************************************************************//
//******************************************************************************************************************************//
//	  ------ Inicio ------    ------ Inicio ------    ------ Inicio ------    ------ Inicio ------    ------ Inicio ------  	//
//******************************************************************************************************************************//
//******************************************************************************************************************************//
//------------------------------------------------------------------------------------------------------------------------------//
//------------------------------------------------------------------------------------------------------------------------------//
//------------------------------------------------------------------------------------------------------------------------------//
//******************************************************************************************************************************//
//******************************************************************************************************************************//
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//

// · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · ·  //
//  · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · //
// · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · ·  //
//  · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · //

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
//******************************************************************************************************************************//
//******************************************************************************************************************************//
// Incluir Bibliotecas: stdio.h, stdlib.h y conio.h (VISTAS EN CLASE Y EN EL CHAMILO).------------------------------------------//
#include <stdio.h> // ( Standard-Input-Output ).--------------------------------------------------------------------------------//
#include <stdlib.h> // ( Standard-Library ).------------------------------------------------------------------------------------//
#include <conio.h> // ( Console-Input-Output ).---------------------------------------------------------------------------------//
// Fin de la inclusion de Bibliotecas.------------------------------------------------------------------------------------------//
// Definiciones de funciones y arreglos:----------------------------------------------------------------------------------------//
char password[7]={'C','a','i','d','a','s','\0'}; // clave definida para usar el programa.---------------------------------------//
char posiblePSS[7]; // Arreglo vacio para ingresar clave y asi compararla con la definida anteriormente.------------------------//
int acceso=0; // Esto define si me da permiso o no de usar el software, inicia sin acceso.--------------------------------------//
int opcion=0; // Esto define la opcion estandar del menu de interaccion.--------------------------------------------------------//
int indice=0; // Esta variable indicara la posicion en el arreglo en donde se registrara el inmueble.---------------------------//
int caracteresCorrectos=0; // Caracteres iguales evaluados en orden de la clave ingresada con la clave definida.----------------//
int intentosSuplantacion=3; // Intentos posibles para evitar suplantacion de identidad.-----------------------------------------//
int baseDeDatos[140][20]; // Base de datos vacía donde se ingresaran los datos por parte del administrador.---------------------//
void ingresarPSS(char p[7],char s[100],int cc,int is, int a); // Funcion para comparar los caracteres ingresados.---------------//
void permiso(int a); // Funcion que da permiso o no de usar el programa, realiza un llamado recusivo a otras funciones.---------//
void ingresarDatos(int bDD[140][24]); // Se define la funcion para ingresar los datos al arreglo.-------------------------------//
void imprimirArreglo(int bDD[140][24]); // Se define la funcion para imprimir el arreglo.---------------------------------------//
void menuInteraccion(int o); // Se define el MENU DE INTERACCION.---------------------------------------------------------------//
// Fin de las definiciones de funciones y arreglos.-----------------------------------------------------------------------------//
//******************************************************************************************************************************//
//******************************************************************************************************************************//
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
//******************************************************************************************************************************//
//******************************************************************************************************************************//
// Se inicia la definicion de mensajes a mostrar para separar el algoritmo de los textos.---------------------------------------//
char mensajes[39][130]={ // Se define el arreglo de 39 mensajes con un maximo de 130 caracteres.---------------------------/////// 
	"\n\n\n                   Contrase¤a correcta..\n\n                       BIENVENIDO ! ! !\n\n\n\n\n\n",// Mensaje 1.-------//
	"\n        \255Contrase¤a Incorrecta!\n\nPara evitar la Suplantaci¢n de Identidad, se ha negado el acceso al programa.\n\n",//
	"Le invitamos a leer el siguiente enlace de la Corte Constitucional sobre el DERECHO AL BUEN NOMBRE.\n\n",// Mensaje 3.-----//
	"\n\n\n                   PROGRAMA\n                   TERMINADO\n\n\n         (:!\n",// Mensaje 4.-------------------------//
	"\n\n         Intentos restantes para ingresar: ",// Mensaje 5.-------------------------------------------------------------//
	"\n\n             (Ingrese la contrase¤a) \n\n",// Mensaje 6.---------------------------------------------------------------//
	"\n\n      Ingresaste demasiados caracteres!\n               Por favor intentalo de nuevo.\n\n\n\n", // Mensaje 7.----------//
	"\n  Administrador, puedes ingresar lo que deseas hacer:\n\n\n", // Mensaje 8.----------------------------------------------//
	"\n\n    1. Registrar Inmueble.", // Mensaje 9.-----------------------------------------------------------------------------//
	"\n    2. Mostrar Inmuebles.", // Mensaje 10.-------------------------------------------------------------------------------//
	"\n    3. Salir.\n", // Mensaje 11.-----------------------------------------------------------------------------------------//
	"\n\n\nroot@hostname:~$ ", // Mensaje 12.-----------------------------------------------------------------------------------//
	"\n  REGISTRAR INMUEBLE:\n\n\n", // Mensaje 13.-----------------------------------------------------------------------------//
	"\n\n    1. Registrar Casa.", // Mensaje 14.--------------------------------------------------------------------------------//
	"\n    2. Registrar Apartamento.", // Mensaje 15.---------------------------------------------------------------------------//
	"\n    3. Registrar Local Comercial.", // Mensaje 16.-----------------------------------------------------------------------//
	"\n    4. Registrar lote.", // Mensaje 17.----------------------------------------------------------------------------------//
	"\n\n\n    ERROR: INGRESASTE UN VALOR NO VALIDO.\n           (Intentalo de nuevo)", // Mensaje 18.--------------------------//
	"\n\n\n\n     EL LIMITE DE INMUEBLES HA SIDO ALCANZADO.\n         (El programa ahora solo imprime)", // Mensaje 19.---------//
	"\n\n    1. Venta.", // Mensaje 20.-----------------------------------------------------------------------------------------//
	"\n    2. Alquiler.\n\n", // Mensaje 21.------------------------------------------------------------------------------------//
	"\n\n Indique la cantidad de habitaciones.\n\n\n\n", // Mensaje 22.---------------------------------------------------------//
	"\n\n Para iniciar debes ingresar un numero de telefono para el inmueble.\n\n\n\n", // Mensaje 23.--------------------------//
	"\n\n Indique si el Inmueble cuenta con Garaje.\n\n", // Mensaje 24.--------------------------------------------------------//
	"\n\n    1. Si.", // Mensaje 25.--------------------------------------------------------------------------------------------//
	"\n    2. No.\n\n", // Mensaje 26.------------------------------------------------------------------------------------------//
	"\n\n Indique el ano (AAAA) de ", // Mensaje 27.----------------------------------------------------------------------------//
	"Construccion.\n\n\n\n", // Mensaje 28.-------------------------------------------------------------------------------------//
	"Delimitacion.\n\n\n\n", // Mensaje 29.-------------------------------------------------------------------------------------//
	"\n\n Introduce el mes (MM) de ", // Mensaje 30.----------------------------------------------------------------------------//
	"\n\n Introduce el dia (DD) de ", // Mensaje 31.----------------------------------------------------------------------------//
	"\n\n Introduce la hora (HH) de ", // Mensaje 32.---------------------------------------------------------------------------//
	"\n\n Introduce los minutos (MM) de ", // Mensaje 33.-----------------------------------------------------------------------//
	"\n\n Introduce los segundos (SS) de ", // Mensaje 34.----------------------------------------------------------------------//
	"\n\n Indique la cantidad de ba¤os del Inmueble.\n\n", // Mensaje 35.-------------------------------------------------------//
	"\n\n Indique el Valor del Inmueble.\n\n", // Mensaje 36.-------------------------------------------------------------------//
	"\n\n Indique la Calificacion del Inmueble. (desde 1 a 5)\n\n", // Mensaje 37.----------------------------------------------//
	"\n\n Indique si el Inmueble cuenta con Vista al Mar.", // Mensaje 38.------------------------------------------------------//
	"\n\n Indique si cuenta con Zona Verde." // Mensaje 39.---------------------------------------------------------------------//
};// Se cierra la definicion del arreglo de mensajes.---------------------------------------------------------------------------//
// Finaliza la definicion de los mensajes a mostrar para separar el algoritmo de los textos.------------------------------------//
// Desde aqui inicia la definicion de las interacciones de las funciones y de los arreglos:-------------------------------------//
//******************************************************************************************************************************//
//******************************************************************************************************************************//
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
//******************************************************************************************************************************//
//******************************************************************************************************************************//
// Ingreso de la clave por parte del usuario y evaluacion de strings para definir acceso o no al programa.----------------------//
void ingresarPSS(char p[7],char s[7],int cc,int is, int a){ // Definicion de las interacciones para evaluar la clave...---------//
	for(is;is>0;is--){ // Inicia el validador de la cantidad de intentos permitidos de ingresar al programa.--------------------//
		system("cls"); // Limpia la terminal.-----------------------------------------------------------------------------------//
		printf("%s%i%s",mensajes[4],is,mensajes[5]); // Mensajes de aviso de permiso y de solicitud de la clave.----------------//
		cc=0; //Se reinicia el contador de Caracteres Correctos para evitar conteos erroneos.-----------------------------------//
		printf("%s",mensajes[11]); // Imprime mensaje que simula terminal de Linux.---------------------------------------------//
		for(int i=0;i<100;i++){ // se inicia un FOR para ingresar los caracteres y mostrarlos como asteriscos.------------------//
			s[i]=getch(); // Se solicita el caracter en la posicion i, cada ingreso del teclado aumenta un i al for.------------//
			if(s[i]>31 and s[i]<127){ // Se inicia un IF para mostrar asteriscos cuando se ingresen caracteres correctos.-------//
				printf("*"); // Se imprime un * por cada caracter correcto ingresado.-------------------------------------------//
			} // Se finalzia el IF que evalua si los caracteres ingresados deben mostrar o no el asterisco.---------------------//
			else if(s[i]==13){ // Se inicia un IF para evaluar si se presiona un ENTER O SALTO DE LINEA.------------------------//
				printf("\n"); // Imprime un Salto de Linea en la terminal.------------------------------------------------------//
				s[i]='\0'; // Se ubica un vacio en el caracter al que se le ingreso un ENTER O SALTO DE LINEA.------------------//
				break; // Se quiebra con el FOR para iniciar la evaluacion del arreglo ingresado.-------------------------------//
			} // Se finaliza el IF que evalua si se ingresa un ENTER O SALTO DE LINEA.------------------------------------------//
			else if(s[i]==8){ // Se inicia un IF que evalua si se un RETROCESO O BACKSPACE.-------------------------------------//
				printf("\b"); // Se ubica un paso hacia atras en la terminal.---------------------------------------------------//
				printf(" "); // Imprime un caracter vacio en la nueva posicion.-------------------------------------------------//
				s[i]='\n'; // deja vacio el espacio al que se le ingreso el RETROCESO O BACKSPACE.------------------------------//
				i--; // Se disminuye un i del FOR, para moverse una posicion atras tambien en el arreglo.-----------------------//
				if(i>=0){ // Si ya se ha avanzado en la terminal y en el arreglo, se regresa un puesto adicional en ambos.------//
					printf("\b"); // Se ubica un paso hacia atras en la terminal.-----------------------------------------------//
					s[i]='\0'; // Se vacia el caracter anterior para evitar errores al ingresar el nuevo caracter.--------------//
					i--; // se regresa un i en el FOR por haber avanzado anteriormente en el arreglo y la terminal.-------------//
				} // Se finaliza el IF que evalua si ya se habia avanzado en el arreglo y en la terminal.-----------------------// 
			} // Se finaliza el IF que evalua si se ingreso un RETROCESO O BACKSPACE.-------------------------------------------//
			else if(i==26){ // Se inicia un IF que evalua si ha ingresado demasiados caracteres.--------------------------------//
				system("cls"); // Limpia la terminal.---------------------------------------------------------------------------//
				printf("%s",mensajes[6]); // Muestra el septimo mensaje.--------------------------------------------------------//
				getch(); // Espera una tecla para continuar.--------------------------------------------------------------------//
				break; // Realiza la pausa para continuar con un i menos del FOR.-----------------------------------------------//
			} // Se finaliza el IF que evalua si ha ingresado demasiados caracteres.--------------------------------------------//
			else{ // En caso de que se ingresen caracteres especiales.....------------------------------------------------------//
				printf("*"); // Imprime un asterisco para que al borrar no se cambie de posicion.-------------------------------//
				s[i]=' '; // Se guarda un especio vacio en el arreglo para evitar alteraciones por los acaracteres especiales.--//
			} // SE FINALIZA EL ELSE y ya no hay cabida para otra posible interaccion de entrada al arreglo.--------------------//
		} // SE FINALIZA EL FOR DE INGRESAR CARACTERES AL ARREGLO.--------------------------------------------------------------//
		for(int i=0;i<7;i++){ // Se inicia un FOR que evaluara si los caracteres del arreglo ingresado coinciden con la clave.--//
			if(s[i]==p[i]){ // Se evalua si tienen los mismos caracteres.-------------------------------------------------------//
				cc++; // Se va aumentando un acumulador de 1 en 1 por caracter similar que encuentre.---------------------------//
			} // Finaliza el IF que evalua los caracteres similares.------------------------------------------------------------//
		} // FINALIZA EL FOR QUE CUENTA CARACTERES SIMILARES.-------------------------------------------------------------------//
		if(cc==7 and is>0) { // SE INICIA EL IF QUE DEFINE EL ACCESO AL USUARIO.------------------------------------------------//
			acceso=1; // Si tiene 6 caracteres iguales, si los intentos de suplantacion son mayores a 0 y si el arreglo es igual//
			return; // el acceso cambia de 0 a 1 y se returna para que se evalue cada interaccion del FOR por separado.---------// 
		} // SE TERMINA EL IF QUE DEFINE EL ACCESO AL USUARIO.------------------------------------------------------------------//
	} // Se finaliza el FOR que cuenta evalua cada intento de acceso.-----------------------------------------------------------//
} // Se finaliza el VOID que solicita la clave al usuario.----------------------------------------------------------------------//
//******************************************************************************************************************************//
//******************************************************************************************************************************//
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
//******************************************************************************************************************************//
//******************************************************************************************************************************//
// Se inicia la definicion de la funcion permiso, para definir si continuar con el programa o no.-------------------------------//
void permiso(int a){ // Se abre la llave y se inicia la definicion de interacciones de la funcion.------------------------------//
	if(a==1){ // inicio del validador del permiso para continuar con la aplicacion.---------------------------------------------//
		system("cls"); // Limpia la terminal.-----------------------------------------------------------------------------------//
		system("COLOR 0A"); // CAMBIA EL COLOR DE LA TERMINAL POR EL 0 Y EL DEL TEXTO POR EL A.---------------------------------//
		printf("%s",mensajes[0]); // MENSAJE DE CONFIRMACION DE ACCESO AL PROGRAMA.---------------------------------------------//
		getch(); // Espera una tecla para continuar.----------------------------------------------------------------------------//
		system("cls"); // Limpia la terminal.-----------------------------------------------------------------------------------//
		system("COLOR F0"); // CAMBIA EL COLOR DE LA TERMINAL POR EL F Y EL DEL TEXTO POR EL 0.---------------------------------//
	} // Fin del IF.------------------------------------------------------------------------------------------------------------//
	else{ // En caso contrario... (ELSE)----------------------------------------------------------------------------------------//
		system("cls"); // Limpia la terminal.-----------------------------------------------------------------------------------//
		system("COLOR 47"); // CAMBIA EL COLOR DE LA TERMINAL POR EL 4 Y EL DEL TEXTO POR EL 7.---------------------------------//
		printf("%s",mensajes[1]); // Accion en caso contrario de que el permiso haya sido negado....(MENSAJE 2)-----------------//
		printf("%s",mensajes[2]); // Mensaje sobre la suplantacion de identidad.------------------------------------------------//
		getch(); // Espera una tecla para continuar.----------------------------------------------------------------------------//
		system("start http://www.corteconstitucional.gov.co/relatoria/1998/T-455-98.htm"); // Abre pagina web sobre suplantacion//
		getch(); // Espera una tecla para continuar.----------------------------------------------------------------------------//
		system("cls"); // Limpia la terminal.-----------------------------------------------------------------------------------//
		system("COLOR 5E"); // CAMBIA EL COLOR DE LA TERMINAL POR EL 5 Y EL DEL TEXTO POR EL E.---------------------------------//
		printf("%s",mensajes[3]); // Se muestra el cuarto mensaje.--------------------------------------------------------------//
	} // Fin del ELSE.----------------------------------------------------------------------------------------------------------//
	return; // return para finalizar el void.-----------------------------------------------------------------------------------//
}// Se cierra el VOID que evalua y muestra avisos dependiendo de la clave ingresada.--------------------------------------------//
//******************************************************************************************************************************//
//******************************************************************************************************************************//
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
//******************************************************************************************************************************//
//******************************************************************************************************************************//
void ingresarDatos(int bDD[140][20]){
	for(indice;indice<140;indice++){
		for(int i=0;i<21;i++){
			system("cls");
			switch(i){
				case 0: {
					printf("%s%s",mensajes[12],mensajes[22]);
					printf("%s",mensajes[11]);
					scanf("%i",&bDD[indice][i]);
					if(bDD[indice][i]<=999999 or bDD[indice][i]>=18000999999){
						system("cls");
						printf("%s",mensajes[17]);
						getch();
						i=-1;
					}
					break;
				};
				case 1: {
					printf("%s%s%s%s%s",mensajes[12],mensajes[13],mensajes[14],mensajes[15],mensajes[16]);
					printf("%s",mensajes[11]);
					scanf("%i",&bDD[indice][i]);
					if(bDD[indice][i]<1 or bDD[indice][i]>4){
						system("cls");
						printf("%s",mensajes[17]);
						getch();
						i=0;
					}
					break;
				};
				case 2: { 
					printf("%s%s%s",mensajes[12],mensajes[19],mensajes[20]);
					printf("%s",mensajes[11]);
					scanf("%i",&bDD[indice][i]);
					if(bDD[indice][1]==3 or bDD[indice][1]==4){
						bDD[indice][3]=0;
						i=3;
					}
					else if(bDD[indice][i]<1 or bDD[indice][i]>2){
						system("cls");
						printf("%s",mensajes[17]);
						getch();
						i=1;
					}
					break;
				};
				case 3: { 
					printf("%s%s",mensajes[12],mensajes[21]);
					printf("%s",mensajes[11]);
					scanf("%i",&bDD[indice][i]);
					if(bDD[indice][i]<1){
						system("cls");
						printf("%s",mensajes[17]);
						getch();
						i=2;
					}
					break;
				};
				case 4: { 
					printf("%s%s%s%s",mensajes[12],mensajes[23],mensajes[24],mensajes[25]);
					printf("%s",mensajes[11]);
					scanf("%i",&bDD[indice][i]);
					if(bDD[indice][i]<1 or bDD[indice][i]>2){
						system("cls");
						printf("%s",mensajes[17]);
						getch();
						i=3;
					}
					break;
				};
				case 5: { 
					printf("%s%s",mensajes[12],mensajes[26]);
					if(bDD[indice][1]==4){
						printf("%s",mensajes[28]);
					}
					else{
						printf("%s",mensajes[27]);
					}
					printf("%s",mensajes[11]);
					scanf("%i",&bDD[indice][i]);
					if(bDD[indice][i]>2019){
						system("cls");
						printf("%s",mensajes[17]);
						getch();
						i=4;
					}
					break;
				};
				case 6: { 
					printf("%s%s",mensajes[12],mensajes[29]);
					if(bDD[indice][1]==4){
						printf("%s",mensajes[28]);
					}
					else{
						printf("%s",mensajes[27]);
					}
					printf("%s",mensajes[11]);
					scanf("%i",&bDD[indice][i]);
					if(bDD[indice][i]<1 or bDD[indice][i]>12){
						system("cls");
						printf("%s",mensajes[17]);
						getch();
						i=5;
					}
					break;
				};
				case 7: { 
					printf("%s%s",mensajes[12],mensajes[30]);
					if(bDD[indice][1]==4){
						printf("%s",mensajes[28]);
					}
					else{
						printf("%s",mensajes[27]);
					}
					printf("%s",mensajes[11]);
					scanf("%i",&bDD[indice][i]);
					if(bDD[indice][i]<1 or bDD[indice][i]>31){
						system("cls");
						printf("%s",mensajes[17]);
						getch();
						i=6;
					}
					break;
				};
				case 8: { 
					printf("%s%s",mensajes[12],mensajes[31]);
					if(bDD[indice][1]==4){
						printf("%s",mensajes[28]);
					}
					else{
						printf("%s",mensajes[27]);
					}
					printf("%s",mensajes[11]);
					scanf("%i",&bDD[indice][i]);
					if(bDD[indice][i]<0 or bDD[indice][i]>24){
						system("cls");
						printf("%s",mensajes[17]);
						getch();
						i=7;
					}
					break;
				};
				case 9: { 
					printf("%s%s",mensajes[12],mensajes[32]);
					if(bDD[indice][1]==4){
						printf("%s",mensajes[28]);
					}
					else{
						printf("%s",mensajes[27]);
					}
					printf("%s",mensajes[11]);
					scanf("%i",&bDD[indice][i]);
					if(bDD[indice][i]<0 or bDD[indice][i]>59){
						system("cls");
						printf("%s",mensajes[17]);
						getch();
						i=8;
					}
					break;
				};
				case 10: { 
					printf("%s%s",mensajes[12],mensajes[33]);
					if(bDD[indice][1]==4){
						printf("%s",mensajes[28]);
					}
					else{
						printf("%s",mensajes[27]);
					}
					printf("%s",mensajes[11]);
					scanf("%i",&bDD[indice][i]);
					if(bDD[indice][i]<0 or bDD[indice][i]>59){
						system("cls");
						printf("%s",mensajes[17]);
						getch();
						i=9;
					}
					break;
				};
				case 11: {
					printf("%s%s",mensajes[12],mensajes[34]);
					printf("%s",mensajes[11]);
					scanf("%i",&bDD[indice][i]);
					if(bDD[indice][i]<0){
						system("cls");
						printf("%s",mensajes[17]);
						getch();
						i=10;
					}
					break;
				};
				case 12: { 
					printf("%s%s",mensajes[12],mensajes[35]);
					printf("%s",mensajes[11]);
					scanf("%i",&bDD[indice][i]);
					if(bDD[indice][i]<0){
						system("cls");
						printf("%s",mensajes[17]);
						getch();
						i=11;
					}
					break;
				};
				case 13: { 
					printf("%s%s",mensajes[12],mensajes[36]);
					printf("%s",mensajes[11]);
					scanf("%i",&bDD[indice][i]);
					if(bDD[indice][i]<1 or bDD[indice][i]>5){
						system("cls");
						printf("%s",mensajes[17]);
						getch();
						i=12;
					}
					break;
				};
				case 14: { 
					printf("%s%s%s%s",mensajes[12],mensajes[37],mensajes[24],mensajes[25]);
					printf("%s",mensajes[11]);
					scanf("%i",&bDD[indice][i]);
					if(bDD[indice][i]<1 or bDD[indice][i]>2){
						system("cls");
						printf("%s",mensajes[17]);
						getch();
						i=13;
					}
					break;
				};
				case 15: { 
					printf("%s%s%s%s",mensajes[12],mensajes[38],mensajes[24],mensajes[25]);
					printf("%s",mensajes[11]);
					scanf("%i",&bDD[indice][i]);
					if(bDD[indice][i]<1 or bDD[indice][i]>2){
						system("cls");
						printf("%s",mensajes[17]);
						getch();
						i=4;
					}
					break;
				};
				case 16: { 
					if(bDD[indice][3]%2==0 and bDD[indice][11]%2==0){
						bDD[indice][i]=((bDD[indice][12])*(0.17*3));
					}
					else{
						bDD[indice][i]=0;
					}
					break;
				};
				case 17: {
					if(bDD[indice][3]%2!=0 and bDD[indice][11]%2!=0){
						bDD[indice][i]=((bDD[indice][12])*(0.17*2));
					}
					else{
						bDD[indice][i]=0;
					}
					break;
				};
				case 18: {
					if(bDD[indice][9]>=17 or bDD[indice][9]<=5){
						bDD[indice][i]=((bDD[indice][12])*(0.06));
					}
					else{ printf("%i: ",i);
						bDD[indice][i]=0;
					}
					break;
				};
				case 19: {
					if(bDD[indice][12]>2000000){
						bDD[indice][i]=((bDD[indice][12])*(0.16));
					}
					else{
						bDD[indice][i]=0;
					}
					break;
				};
				case 20: {
					bDD[indice][i]=(bDD[indice][12]+bDD[indice][16]+bDD[indice][17]+bDD[indice][18]+bDD[indice][19]);
					break;
				};
				default: {
					break;
				}
			}
		}
		indice+=1;
		break;
	}
	if(indice==140){
		printf("%s",mensajes[18]);getch();
	}
	return;	
}
//******************************************************************************************************************************//
//******************************************************************************************************************************//
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
//******************************************************************************************************************************//
//******************************************************************************************************************************//
void imprimirArreglo(int bDD[140][20]){
	for(int i=0;i<indice;i++){
		printf("\n\n Inmueble #%i:\n",1+i);
			printf("\n Numero de Inmueble: %i",bDD[i][0]);
			printf(" Tipo de Inmueble: ");
			if(bDD[i][1]==1){
				printf("Casa.");
			}
			if(bDD[i][1]==2){
				printf("Apartamento.");
			}
			if(bDD[i][1]==3){
				printf("Local Comercial.");
			}
			if(bDD[i][1]==4){
				printf("Lote.");
			}		
			printf("\n Condicion: ");
			if(bDD[i][2]==1){
				printf("EN VENTA.");
			}
			else{
				printf("EN ALQUILER.");
			}
			if(bDD[i][3]==0){
				printf("");
			}
			else{
				printf("\n Habitaciones: %i",bDD[i][3]);
			}
			printf("\n Ba¤os: ");
			if(bDD[i][11]==0){
				printf("NO TIENE.");
			}
			else{
				printf("%i",bDD[i][11]);
			}
			printf("\n Garaje: ");
			if(bDD[i][4]==1){
				printf("Si.");
			}
			else{
				printf("No.");
			}
			printf("\n Fecha de ");
			if(bDD[i][1]==4){
				printf("Delimitacion: ");
			}
			else{
				printf("Construccion: ");
			}
			printf("Dia: %i /Mes: %i/ A¤o: %i\n",bDD[i][7],bDD[i][6],bDD[i][5]);
			printf("                        Hora: %i /Min: %i /Seg: %i",bDD[i][8],bDD[i][9],bDD[i][10]);
			printf("\n Zonas Verdes: ");
			if(bDD[i][15]==1){
				printf("Si.");
			}
			else{
				printf("No.");
			}
			printf("\n Vista al Mar: ");
			if(bDD[i][14]==1){
				printf("Si.");
			}
			else{
				printf("No.");
			}
			printf("\n CALIFICACION: %i (de 1 a 5)",bDD[i][13]);
			printf("\n\n   VALOR TOTAL DEL INMUEBLE: %i\n",bDD[i][20]);
			printf("----------------------------------------------------------------------------\n");
	}
	return;
} 
//******************************************************************************************************************************//
//******************************************************************************************************************************//
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
//******************************************************************************************************************************//
//******************************************************************************************************************************//
void menuInteraccion(int bDD[140][20],int o){
	do{
		system("cls");
		printf("%s%s%s%s",mensajes[7],mensajes[8],mensajes[9],mensajes[10]);
		printf("%s",mensajes[11]);
		scanf("%i",&o);
		switch(o){
			case 1: {
				system("cls");
				ingresarDatos(bDD);
				o=0;
				break;
			};
			case 2: {
				system("cls");
				imprimirArreglo(bDD);
				getch();
				o=0;
				break;
			};
			case 3: {
				system("cls");
				printf("BYE BYE!!!");
				o=0;
				exit(1);
				break;
			};
			default: {
				system("cls");
				printf("%s",mensajes[17]);
				o=0;
				getch();
				break;
			};
		}
	}
	while(o==0);
	return;
} 
//******************************************************************************************************************************//
//******************************************************************************************************************************//
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//

//  · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · //
// · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · ·  //

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
//******************************************************************************************************************************//
//******************************************************************************************************************************//
// MAIN	|| MAIN	|| MAIN	|| MAIN	|| MAIN	|| MAIN	|| MAIN	|| MAIN	|| MAIN	|| MAIN	|| MAIN	|| MAIN	|| MAIN	|| MAIN	|| MAIN	|| MAIN	//
//******************************************************************************************************************************//
//******************************************************************************************************************************//
main(int argc,char **argv){ // inicio del main, se define con ingreso y egreso de aplicaciones externas.-(tema visto en clase)--//
	ingresarPSS(password,posiblePSS,caracteresCorrectos,intentosSuplantacion,acceso); // primer llamado, solicita clave.--------//
	permiso(acceso); // Se hace un llamado a la funcion permiso que invoca al acceso para evaluar si ejecuta o no el resto.-----//
	if(acceso==1){
		menuInteraccion(baseDeDatos,opcion);
	}
	return 0; // Retornar 0 al finalizar el main.-------------------------------------------------------------------------------//
} // Se cierra la llave del main y con este sus interacciones.------------------------------------------------------------------//
//******************************************************************************************************************************//
//******************************************************************************************************************************// 
// Fin del MAIN	|| Fin del MAIN	|| Fin del MAIN	|| Fin del MAIN	|| Fin del MAIN	|| Fin del MAIN	|| Fin del MAIN	|| Fin del MAIN	//
//******************************************************************************************************************************//
//******************************************************************************************************************************//
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//

// · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · ·  //
//  · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · //
// · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · ·  //
//  · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · //

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
//******************************************************************************************************************************//
//******************************************************************************************************************************//
//------------------------------------------------------------------------------------------------------------------------------//
//------------------------------------------------------------------------------------------------------------------------------//
//------------------------------------------------------------------------------------------------------------------------------//
//******************************************************************************************************************************//
//******************************************************************************************************************************//
//		  ------- Fin -------    ------- Fin -------    ------- Fin -------    ------- Fin -------    ------- Fin -------  		//
//******************************************************************************************************************************//
//******************************************************************************************************************************//
//******************************************************************************************************************************//
//******************************************************************************************************************************//
//******************************************************************************************************************************//
//																																//
// Nombre del Proyecto:		Inmobiliaria Casas Caidas																			//
//																																//
// Desarrollador:			Jhusef Alfonso Lopez Parra 		- Ingeniero de Sistemas 	- jhusef@me.com							//
//																																//
// Condicion del Proyecto: 	Usar Strings, Esconder caracteres para la clave usando *******										//
//																																//
//																																//
//******************************************************************************************************************************//
//******************************************************************************************************************************//
//******************************************************************************************************************************//
//******************************************************************************************************************************//
//******************************************************************************************************************************//
//******************************************************************************************************************************//
