#include <stdio.h>
#include <math.h>

int bin_a_dec(int n,int m);

int main(){
	int n;
	
	do{
		printf("Escribir un numero en binario para transformar a decimal: ");
		scanf("%d",&n);
	}while(n<0);

	printf("%d",bin_a_dec(n,0));
	
	return 0;
}

int bin_a_dec(int n,int m){
	
	int valor;
	
	if(n == 0){
		valor = n % 10; 
	}else{
		valor = ((n % 10) * pow(2,m)) + bin_a_dec(n/10,m+1);
	}
	
	return valor;
}
