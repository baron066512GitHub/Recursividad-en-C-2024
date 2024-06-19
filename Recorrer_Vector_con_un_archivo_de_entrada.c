#include <stdio.h>
#define max 10

FILE *p;

void llenar(int vector[max-1],int i);
void mostrar_vector(int vector[max],int i);

int main(){
    int vector[max];
    int i = max;
    p = fopen("entrada.txt","r");
    llenar(vector,i-1);
    fclose(p);
    mostrar_vector(vector,i-1);
}

void llenar(int vector[max-1],int i){
    if(!feof(p)){
        fscanf(p,"%d",&vector[i]);
        llenar(vector,i-1);
    }
}

/*void llenar(int vector[max-1],int i){
    if(i == 0){
        fscanf(p,"%d",&vector[i]);
    }else{
        fscanf(p,"%d",&vector[i]);
        llenar(vector,i-1);
    }
}*/


void mostrar_vector(int vector[max],int i){
    if (i == 0){
        printf("%d",vector[i]);
    }else{
        printf("%d ",vector[i]);
        mostrar_vector(vector,i-1);
    }
}