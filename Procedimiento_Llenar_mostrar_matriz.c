#include <stdio.h>
#define fil 5 
#define col 5

void llenar_matriz(int matriz[fil][col],int i,int j,int i_aux,int j_aux);
void mostrar_matriz(int matriz[fil][col],int i,int j,int i_aux,int j_aux);

int main(){
    int columna = 0, fila = 0;
    int mat[fil][col];

    do{
        printf("Indique el numero de la fila (Maximo 5): ");
        scanf("%d",&fila);
    }while(fila <= 0 || fila > fil );

    do{
        printf("Indique el numero de la columna (Maximo 5): ");
        scanf("%d",&columna);
    }while(columna <= 0 || columna > col );

    llenar_matriz(mat,fila-1,columna-1,fila-1,columna-1);
    mostrar_matriz(mat,fila-1,columna-1,fila-1,columna-1);

    return 0;
}


void llenar_matriz(int matriz[fil][col],int i,int j,int i_aux,int j_aux){

    if(i == 0 && j ==  0){
        printf("Ingresar numero de la matriz en la posicion %d,%d: ",i,j);
        scanf("%d",&matriz[i][j]);
    }else if(j == 0){
        printf("Ingresar numero de la matriz en la posicion %d,%d: ",i,j);
        scanf("%d",&matriz[i][j]);
        llenar_matriz(matriz,i-1,j_aux,i_aux,j_aux);
    }else{
        printf("Ingresar numero de la matriz en la posicion %d,%d: ",i,j);
        scanf("%d",&matriz[i][j]);
        llenar_matriz(matriz,i,j-1,i_aux,j_aux);
    }
}

void mostrar_matriz(int matriz[fil][col],int i,int j,int i_aux,int j_aux){

    if(i == 0 && j ==  0){
        printf("%d",matriz[i][j]);
    }else if(j == 0){
        printf("%d \n",matriz[i][j]);
        mostrar_matriz(matriz,i-1,j_aux,i_aux,j_aux);
    }else{
        printf("%d\t",matriz[i][j]);
        mostrar_matriz(matriz,i,j-1,i_aux,j_aux);
    }
}