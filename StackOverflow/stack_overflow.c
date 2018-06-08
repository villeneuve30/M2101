#include <stdio.h>

int fonction(int n){
	int y;
	if(n<=0){
		return 0;
	}
	
	if(n>=1){
		return 1+fonction(n-1);
	}
}

int main(void){
	int x = 1000;
	int y = 1000000;
	printf("%d",fonction(x));
	printf("%d",fonction(y));
}
