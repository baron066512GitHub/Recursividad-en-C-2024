#include <stdio.h>
#define max 3

int llenarvector(int vector[],int pos);
int mostrarvector(int vector[],int pos);

int main(){
    int vec[max];
    llenarvector(vec,max);
    mostrarvector(vec,max);
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