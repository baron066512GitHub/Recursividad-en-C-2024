#include <stdio.h>
#include <math.h>

void bin_a_dec(int n,int m,int *valor);

int main(){
	int n, valor;
	
	do{
		printf("Escribir un numero en binario para transformar a decimal: ");
		scanf("%d",&n);
	}while(n<0);

	bin_a_dec(n,0,&valor);
	printf("%d",valor);
	
	return 0;
}

void bin_a_dec(int n,int m,int *valor){
	
	if(n == 0){
		*valor = n % 10; 
	}else{
		bin_a_dec(n / 10, m + 1, valor);
        *valor = ((n % 10) * pow(2, m)) + *valor ;
	}
}
