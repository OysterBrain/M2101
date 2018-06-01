#include <stdio.h>

int mystrlen(const char *str){
	int nbCar =0;
	
	while (*str != '\0'){
		nbCar++;		
		str++;
			
	}
return nbCar;
}

int main(void){


	char str[] ="Bonjour";
	printf("longueur du mot :%d \n",mystrlen(str));

}
