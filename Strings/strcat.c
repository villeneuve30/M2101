#include <stdio.h>
char *my_strcat(char *dest, const char *src){
	int i =0;
	int j =0;
	char *p=dest;
	while(*dest !='\0'){
		++dest;
		
	}
	while(*src !='\0'){
		*dest=*src;
		++src;
		++dest;
	}
	*dest='\0';
	return p;
}
int main(void){
	char chaine1[] = "bon";
	char chaine2[] = "jour";
	char *resultat = my_strcat(chaine1,chaine2);
	printf("%s\n",chaine1);
	printf("%s\n",resultat);
}
