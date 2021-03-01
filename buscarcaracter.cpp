// Desarrollo por Ing. Jhusef Alfonso López Parra
// Ingeniero de Sistemas
// Tecnólogo en Atención Prehospitalaria
// Contacto: jhusef@me.com
//
//

#include <iostream>

void algoritmo();
void reset();
void ingresarCaracteres();
void buscarCaracter(char c);

char caracteres[20]={'E','l',' ','v','e','l','o','z',' ','m','u','r','c','i',130,'l','a','g','o','\0'};
char buscar={'\0'};
bool encontrado=false;

void algoritmo(){
	ingresarCaracteres();
	buscarCaracter(buscar);
}

void reset(){
	int o=0;
	printf("\nDeseas iniciar de nuevo? (1=S%c 0=No, salir.): ",161);
	scanf("%d",&o);
	if(o==0){
		exit(0);
	}
	else if(o==1){
		fflush(stdin);
		algoritmo();
	}
	else{
		reset();
	}
}

void ingresarCaracteres(){
	do{
		printf("\nIngresa el caracter a buscar: ");
		scanf("%c",&buscar);
	}while(!((buscar>=32&&buscar<=126)||(buscar>=128||buscar<=254)));
}

void buscarCaracter(char c){ //2
	for(int i=0;i<sizeof(caracteres);i++){ // 24
		if(c==caracteres[i]){ //20
			encontrado=true; //1
			printf("\nEl caracter fue encontrado en la frase: "); //1
			for(int j=0;j<sizeof(caracteres);j++){ //24
				printf("%c",caracteres[j]); //1
			}
			reset(); //...1?
		}
		else if(i==19&&c!=caracteres[i]&&encontrado==false){ // 60*3 = 90
			printf("\nEl caracter NO fue encontrado..."); //1
			reset(); //...1?
		}
	}
} // TOTAL .. 166

main(int argc,char **argv){
	algoritmo();
	return 0;
}
