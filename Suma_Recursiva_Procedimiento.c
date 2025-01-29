#include <stdio.h>

void Suma(int X, int *res);

int main(){
    int n, valor = 0;
    printf("Ingrese un numero natural para evaluar la suma\n");
    scanf("%d",&n);
    Suma(n,&valor);
    printf("El valor es: %d", valor);

    return 0;
}

void Suma(int X, int *res){
    if (X == 1){
        *res = 1;
    }else{
        Suma(X-1, res);
        *res = X + *res;
    }
}
