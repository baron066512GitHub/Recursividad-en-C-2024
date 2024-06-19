#include <stdio.h>
#define n 5

int espejo(int vec1[n], int vec2[n],int i,int j);

int main(){
    
    int vector1[n] = {1,2,3,4,5}, vector2[n] = {10,4,3,2,1}, i = 0,logico = 0;

    for(i = 0 ; i < n ; i++){
        printf("Los elementos de mi primer vector son: %d\n",vector1[i]);
    }

    printf("\n");

    for(i = 0 ; i < n ; i++){
        printf("Los elementos de mi segundo vector son: %d\n",vector2[i]);
    }

    logico = espejo(vector1,vector2,0,n-1);
    
    if(logico == 0){
        printf("Los elementos del vector son distintos.\n");
    }else{
        printf("Los elementos del vector son iguales.\n");
    }

    return 0;
}

int espejo(int vec1[n], int vec2[n],int i,int j){

    if(vec1[i] != vec2[j]){
        return 0;
    }else 
        if(j == 0){
            return 1;
        }else{
            return espejo(vec1,vec2,i+1,j-1);
        }
}


