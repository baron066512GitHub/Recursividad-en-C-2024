/*Hacer la suma de los digitos de un entero positivo recursivo*/
#include <stdio.h>

int sumadi(int n);
int main(){
    int n=0;
    do
    {
        printf("Ingrese un digito positivo "); scanf("%d",&n);
    } while (n<=0);
    
    printf("La suma de los digitos es: %d ", sumadi(n));
}

int sumadi(int n){
    int res=0;
    if(n == 0){

        return 0;
    }else 
        res = n % 10;

        return res + sumadi(n/10);
    


}
