// Desarrollo por Ing. Jhusef Alfonso López Parra
// Ingeniero de Sistemas
// Tecnólogo en Atención Prehospitalaria
// Contacto: jhusef@me.com
//
//



#include <stdio.h>
#include <stdlib.h>


void ingresarDatos(void);
void imprimirmatriz(int[][3]);
void sumaDeMatrices(int[][3],int[][3]);
void restaDeMatrices(int[][3],int[][3]);
void multiplicacionDeMatrices(int[][3],int[][3]);

int matriz1[3][3];
int matriz2[3][3];


int main(int a, char** o){
	ingresarDatos();
	imprimirmatriz(matriz1);
	sumaDeMatrices(matriz1,matriz2);
	restaDeMatrices(matriz1,matriz2);
	multiplicacionDeMatrices(matriz1,matriz2);	
	return 0;
}


// funcion de ingresar valores 3*3
void ingresarDatos(void){
	for (int i=0; i<3; i+=1){
		for (int j=0; j<3; j+=1){
			printf("Ingrese el valor de la posicion %d, %d de la Matriz 1: ",i,j);
			scanf ("%d", &matriz1[i][j]);
		}
	
	}
	
	system("cls");
	
	
	for (int i=0; i<3; i+=1){
		for (int j=0; j<3; j+=1){
			printf("Ingrese el valor de la posicion %d, %d de la Matriz 2: ",i,j);
			scanf ("%d", &matriz2[i][j]);
		}
	
	}
	
	system("cls");
}



// funcion de suma de matrices
int matrizSumada[3][3];
void sumaDeMatrices(int matriz1[][3], int matriz2[][3]){
	printf("\n\nAl sumar las matrices obtenenos:\n");
	//calcular suma
	for (int i=0; i<3; i+=1){
		for (int j=0; j<3; j+=1){
		matrizSumada[i][j]=matriz1[i][j]+matriz2[i][j];
		}
	}
	for(int i=0; i<3; i+=1){
		printf("\n");
		for (int j=0; j<3; j+=1){
			printf("%d ",matrizSumada[i][j]);
		}
	}
}



// funcion de resta de matrices
int matrizRestada[3][3];
void restaDeMatrices(int matriz1[][3], int matriz2[][3]){
	printf("\n\nAl restar las matrices obtenenos:\n");
	//calcular resta
	for (int i=0; i<3; i+=1){
		for (int j=0; j<3; j+=1){
		matrizRestada[i][j]=matriz1[i][j]-matriz2[i][j];
		}
	}
	for(int i=0; i<3; i+=1){
		printf("\n");
		for (int j=0; j<3; j+=1){
			printf("%d ",matrizRestada[i][j]);
		}
	}
}

// funcion de multiplicacion de matrices
int matrizMultiplicada[3][3];
int acumuladorInterno=0;
int acumulador=0;
void multiplicacionDeMatrices(int matriz1[][3], int matriz2[][3]){
	printf("\n\nAl multiplicar las matrices obtenenos:\n");
	//calcular multiplicacion
	for(int i=0; i<3; i+=1){
		
		for(int j=0; j<3; j+=1){
			
			for(int k=0; k<3; k+=1){
					
				acumuladorInterno=(matriz1[i][k]*matriz2[k][j]);
				acumulador=acumuladorInterno+acumulador;
			}
			
			matrizMultiplicada[i][j]=acumulador;
			acumulador=0;
		}
		
	}
	
	
	
	for(int i=0; i<3; i+=1){
		printf("\n");
		for (int j=0; j<3; j+=1){
			printf("%d ",matrizMultiplicada[i][j]);
		}
	}
}


//funcion de imprimir matriz
void imprimirmatriz(int entrada[][3]){
	printf("\nLas matrices resultantes son:\n\nMatriz 1:\n");
	for(int i=0; i<3; i+=1){
		printf("\n");
		for (int j=0; j<3; j+=1){
			printf("%d ",matriz1[i][j]);
		}
	}
	printf("\n\nMatriz 2:\n");
	for(int i=0; i<3; i+=1){
		printf("\n");
		for (int j=0; j<3; j+=1){
			printf("%d ",matriz2[i][j]);
		}
	}
}
