#include <stdio.h>
#define n 5

int compara(int vector1[n],int vector2[n], int i);

int main(){
    int vector1[n] = {10, 20, 30, 40, 50}, vector2[5] = {10, 20, 30, 40, 50}, i = 0,logico = 0;

    for(i = 0 ; i < n ; i++){
        printf("Los elementos de mi primer vector son: %d\n",vector1[i]);
    }

    printf("\n");

    for(i = 0 ; i < n ; i++){
        printf("Los elementos de mi segundo vector son: %d\n",vector2[i]);
    }

    logico = compara(vector1,vector2,n-1);
    
    if(logico == 0){
        printf("Los elementos del vector son distintos.\n");
    }else{
        printf("Los elementos del vector son iguales.\n");
    }

    return 0;
}

int compara(int vector1[n],int vector2[n],int i){
    if(vector1[i] != vector2[i]){
        return 0;
    }else 
        if(i == 0){
            return 1;
        }else{
            return compara(vector1,vector2,i-1);
        }
}