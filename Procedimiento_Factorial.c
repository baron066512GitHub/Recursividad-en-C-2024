#include <stdio.h>

void factorial(int n, int *res);

int main(){
    int n,a;

    do{
        printf("Indique el numero para calcular su factorial: ");
        scanf("%d",&n);
    }while(n <= -1);

    factorial(n,&a);

    printf("El valor de %d! es: %d", n, a);
    return 0;
}

void factorial(int n, int *res){

    if ( n == 0){

        *res = 1;
    }else{
        factorial(n-1, res);
        *res = n * *res;
    }
}