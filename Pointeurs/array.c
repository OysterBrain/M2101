#include <stdio.h>
#include <stdlib.h>

int *create_array(int size){
	int *array;
	array= malloc(size*sizeof(int));

	int *p = array;
	for(int i=size ; i>0 ; i--){
        	*p = i;
        	p ++;
	}
	return array;
}

void display_array(int *array , int size){

	printf("le tableau: ,\n");
	for (int i=0; i<size; i++){
	  printf("%d | ",array[i]);
	}
}

void display_array2(int *array , int size){
	printf("le tableau: ,\n");
	int *fin = array+size;
		for(int *p=array ;p<fin;++p){
			printf("%d |",*p);
		}
	

}


int main(void){


int *array =create_array(50);
display_array(array,50);
display_array2(array,50);	

}
