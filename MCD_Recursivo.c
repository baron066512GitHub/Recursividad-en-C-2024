#include<stdio.h>

int MCD(int a,int b);

int main(){
    int n,na;
    printf("Ingrese dos numero para evaluar el MCD\n");
    scanf("%d",&n);
    scanf("%d",&na);
    
    printf("El MCD es :%d",MCD(n,na));

    return 0;
}

int MCD(int a,int b){
    int res;
    if (b == 0)
    {
        res = a;
    }else if (b != 0)
    {
        res = MCD(b , a % b);
    }
    return res;
}