#include <stdio.h>

int fonction(int n){
	int resultat;
	if (n<=0){
		resultat=0;

	}
	else {
			
		resultat=1+fonction(n-1);
		
	}

	return resultat;
}


int main(void){

	printf("le resultat est %d :\n ",fonction(10000000));

}
