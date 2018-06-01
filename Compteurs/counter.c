#include <stdio.h>
void print_hello(){
	static int i=0;
	printf("Bonjour numero %d \n",i," !");
	i+=1;
}
int main(void){
	for(int j=0;j<11;++j){
		print_hello();
	}
	
}
