#include <stdio.h>
int fac(int n);

int main(){

    int n;

    do{
        printf("Ingrese numero para calcular su factorial (Debe ser un valor positivo)\n");
        scanf("%d",&n);
    }while(n <= -1);            

    printf("El resultado del factorial de %d es: %d", n, fac(n));   
    
    
    return 0;
}

int fac(int n){

    int res;

    if ((n==0)||(n==1))
    {
        res = 1;
    }else
    {
        res = n * fac(n-1);
    }
    return res;
}