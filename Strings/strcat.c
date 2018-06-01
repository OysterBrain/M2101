#include <stdio.h>

/////////////
//dest doit être suffisamment grand pour accueillir la source
char *my_strcat(char *dest, const char *src){
	char *p = dest;
	while(*p !='\0'){
		p++;
	}
	
	while(*src !='\0'){
		*p=*src;
		p++;
		src++;
	}
	
return dest;
	
}


int main(void){

	char dest[50]="Attention il y a un probleme ";
	char src[]="du cul";
	printf("%s \n",my_strcat(dest,src));


}
