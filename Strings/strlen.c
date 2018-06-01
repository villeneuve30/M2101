#include <stdio.h>

int my_strlen(const char *str){
	int i=0;
	int longueur = 0;
	while(*str != '\0'){
		longueur +=1;
		str++;
	}
printf("la longueur de la chaine est de %d",longueur);
}
int main(void){
	my_strlen("chaine");
}
