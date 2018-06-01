#include <stdio.h>

double sum1 (double *tab, int size){
double resultat=0;
    for (int i=0; i<size ;++i){
        
	resultat= resultat + tab[i];
    }
return resultat;
}

double sum2 (double *tab, int size){

double resultat=0;
double *fin = tab +size;
    for (int *p=tab ; p<fin ;++p){
        
	resultat= resultat + *p;   
    }
return resultat;
}

int main(void){
double tab[5];
tab[0]=100;
tab[1]=10;
tab[2]=1;
tab[3]=0.1;
tab[4]=0.01;
int n = 5;
sum1(tab,n);
sum2(tab,n);




}

