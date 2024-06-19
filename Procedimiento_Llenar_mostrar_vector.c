#include <stdio.h>
#define max 10

void llenar_vector(int vector[],int i);
void mostrar_vector(int vector[max],int i);

int main(){
    int tam = 0;
    int vector[max];

    do{
        printf("Indique cuantos numeros va a ingresar al vector (Maximo 10): ");
        scanf("%d",&tam);
    }while(tam <= 0 || tam >= 11 );

    llenar_vector(vector,tam-1);
    mostrar_vector(vector,tam-1);
    return 0;
}

void llenar_vector(int vector[max],int i){
    if (i == 0){
        printf("Ingrese el numero: ");
        scanf("%d",&vector[i]);
    }else{
        printf("Ingrese el numero: ");
        scanf("%d",&vector[i]);
        llenar_vector(vector,i-1);
    }
}

void mostrar_vector(int vector[max],int i){
    if (i == 0){
        printf("%d",vector[i]);
    }else{
        printf("%d ",vector[i]);
        mostrar_vector(vector,i-1);
    }
}