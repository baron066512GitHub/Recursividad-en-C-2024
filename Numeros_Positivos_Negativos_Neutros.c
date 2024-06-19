/*Elabore un programa que lea un vector a[ ] de n terminos enteros y con un algoritmo 
recursivo determine el numero de enteros positivos, negativos y ceros*/
#include <stdio.h>
#define max 100
void npn(int v[max], int pos, int neg, int neu, int i);
int llenarvector(int vector[],int pos);
int mostrarvector(int vector[],int pos);

int main(){
    int n=0,v[max];
    do{
        printf("Indique el tamaño del vector: "); scanf("%d", &n);
    }while(n<=0);
    llenarvector(v,n-1);
    mostrarvector(v,n-1);
    npn(v,0,0,0,n-1);

}

int llenarvector(int vector[],int pos){
    if(pos == 0){
        printf("Ingrese el digito: ");
        scanf("%d",&vector[0]);        
    }else{
        printf("Ingrese el digito: ");
        scanf("%d",&vector[pos]);
        llenarvector(vector,pos-1);
    }
}
int mostrarvector(int vector[],int pos){
    if(pos == 0){
        printf("%d\n",vector[0]);        
    }else{
        printf("%d ",vector[pos]);
        mostrarvector(vector,pos-1);
    }
}
void npn(int vector[],int pos, int neg, int neu,int i){
    if(i==0){
        if(vector[0] == 0){
            neu++;
        }else if(vector[0] < 0){
            neg++;
        }else
            pos++;
        
        printf("Hay %d Positivos, %d Negativos, %d Neutros",pos,neg,neu);
    }else 
        if (vector[i]==0){
            npn(vector,pos,neg,neu+1,i-1);
        }else
            if (vector[i]<0){
            npn(vector,pos,neg+1,neu,i-1);
        }else   
            npn(vector,pos+1,neg,neu,i-1);
        
        
}
