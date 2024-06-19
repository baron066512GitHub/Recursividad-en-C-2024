#include <stdio.h>
int fib(int N);
int main(){
    int x;
    printf("Ingrese El Numero de Fibonacci a Calcular.");
    scanf("%d",&x);
    printf("%d",fib(x));
    return 0;
}

int fib(int N){
    int res;

    if(N == 0){
        res = 0;
    }else if(N == 1){
            res = 1;
        }else if(N > 1){
            res = fib(N-2)+fib(N-1);
            }
    return res;
}