#include <stdio.h>
#define max 4, maxx 5

int llenarvector(int vector[],int pos);
int mostrarvector(int vector[],int pos);

int main(){
    int vec[max,maxx];
    printf("Llene la matriz: ");
    llenarvector(vec,max,maxx,maxx);
    mostrarvector(vec,max,maxx,maxx);
}


int llenarvector(int vector[],int pos){
    if(pos == 0){
        scanf("%d",&vector[0]);        
    }else{
        scanf("%d",&vector[pos]);
        llenarvector(vector,pos-1);
    }
}
int mostrarvector(int vector[],int pos){
    if(pos == 0){
        printf("%d ",vector[0]);
    }else{
        printf("%d ",vector[pos]);
        mostrarvector(vector,pos-1);
    }
}