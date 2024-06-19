#include <stdio.h>
#include <time.h>
#define fil 2
#define col 2 

int llenarmatriz(int vector[fil][col],int f,int c,int aux);

int main(){
    int vec[fil][col];
    printf("Llene la matriz:\n");
    llenarmatriz(vec,fil,col,col);
}

int llenarmatriz(int vector[fil][col], int f, int c, int aux){

    if((f==0) && (c==0)){
        scanf("%d",&vector[0][0]);       

    }else if(c > 0){
                scanf("%d",&vector[f][c]);
                llenarmatriz(vector,f,c-1,aux);
                
                
            }else{
                    scanf("%d",&vector[f][c]);              
                    llenarmatriz(vector,f,c-1,aux); 
                    

                }
}





