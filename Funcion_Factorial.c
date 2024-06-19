#include <stdio.h>

long factorial(int n);

int main(){
    int n,a;

    do{
        printf("Indique el numero para calcular su factorial: ");
        scanf("%d",&n);
    }while(n <= -1);

    printf("El valor de %d! es: %d", n, factorial(n)); 

    /* TAMBIEN SE PUEDE HACER DE LA SIGUIENTE MANERA;
        SI YA EL VALOR SE HA INGRESADO POR EL USUARIO, SE PUEDE LLAMAR A 
        LA FUNCION Y ASIGNARSELA A OTRA VARIABLE DE LA SIGUIENTE FORMA....

        a = factorial(n);

        Y EN EL MOMENTO DE IMPRIMIR POR PANTALLA SE HACE LO SIGUIENTE...

        printf("El valor de %d! es: %d", n, a);
    
    */
    return 0;
}

long factorial(int n){

    if ( n == 0){
        return 1;
    }else{
        return( n * factorial(n-1) );
    }
}