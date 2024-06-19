#include <stdio.h>

long int dec_a_bin(long int n);

int main(){
	
	int n;
	
	do{
		printf("Escribir numero entero positivo a convertir en binario");
		scanf("%d",&n);
	}while(n<0);

	printf("%ld",dec_a_bin(n));
	return 0;
}

long int dec_a_bin(long int n){
	
	long int valor;
	
	if(n == 0){
		valor = n % 2;
	}else{
		
		valor = n % 2 + dec_a_bin(n/2)*10;
	}
	
	return valor;
}



