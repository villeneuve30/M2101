#include <stdio.h>
double sum1 (double *tab, int size){
	double somme=0;
	for(int i = 0;i < size; ++i){
	somme=somme+tab[i];
	}
printf("la somme des valeurs du tableau(sum1) est égal a : %f \n",somme);
}	

double sum2 (double *tab, int size){
	double *fin=tab+size;
	double somme = 0;
	for(double *p = tab; p < fin; ++p){
	somme=somme+*p;
	}
printf("la somme des valeurs du tableau(sum2) est égal a : %f \n",somme);
}

int main (void){
	double tab[5]={100, 10, 1, 0.1, 0.01};
	sum1(tab,5);
	sum2(tab,5);
}
