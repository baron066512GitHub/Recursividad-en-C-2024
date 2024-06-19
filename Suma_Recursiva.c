#include<stdio.h>

int Suma(int X);

int main(){
    int n;
    printf("Ingrese un numero natural para evaluar la suma\n");
    scanf("%d",&n);
    printf("%d",Suma(n));

    return 0;
}

int Suma(int X){
    int res;
    if (X == 1)
    {
        res = 1;
    }else if (X >= 1)
    {
        res = X + Suma(X-1);
    }
    return res;
}