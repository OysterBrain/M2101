#include <stdio.h>

void print_hello(){

	static int compteur=1;

	printf("Bonjour numéro %d \n",compteur);
	compteur++;


}

void main(void){

	for (int i=0;i<10;i++){

		print_hello();
	}

}
