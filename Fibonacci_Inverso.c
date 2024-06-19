#include <stdio.h>
#define max 10
FILE *p;

void leer(int vec[max]);
int fibo(int n);
void fibo_inv(int vec[max],int i,int m);

int main(){
    int vec[max],m;
    printf("Los numeros de fibo en el archivo son: ");
    leer(vec);
    printf("\n");
    m = vec[0];
    fibo_inv(vec,m,m);
}

//Llenar archivo y llenar vector
void leer(int vec[max]){
    
    int num, i = 0;
    p = fopen("entrada_fibo_inv.txt","r");
    fscanf(p,"%d",&vec[i]);
    
    for(i=vec[0];i >= 1;i--){
        fscanf(p,"%d",&vec[i]);
        printf("%d ",vec[i]);
    } 


    fclose(p);
}

int fibo(int n){
    int res;
    if(n == 0 || n == 1){
        return n;
    }else{
        return (fibo(n-2) + fibo(n-1));
    }
}

void fibo_inv(int vec[max],int i,int m){
    if(i == 1){
        if(vec[i] == 0){
            printf("%d ",fibo(vec[i]));
        }else{
            printf("%d ",fibo(vec[i]));
            vec[i]--;
            fibo_inv(vec,i,m);
        }
    }else{
        if(i < m){
            if(vec[i] == 0){
                printf("%d\n",fibo(vec[i]));
                fibo_inv(vec,i-1,m);
            }else{
                printf("%d ",fibo(vec[i]));
                vec[i]--;
                fibo_inv(vec,i,m);
            } 
        }

        if(i == m){
            if(vec[i] == 0){
                printf("%d\n",fibo(vec[i]));
                fibo_inv(vec,i-1,m);
            }else{
                printf("%d ",fibo(vec[i]));
                vec[i]--;
                fibo_inv(vec,i,m);
            } 
        }

    }
    
    
    
    /*else{
        if(i < m){
            printf("%d medio ",fibo(vec[i]));
            fibo_inv(vec,i-1,m);
        }else{
            printf("%d medio2 ",fibo(vec[i]));
            vec[i]--;
            fibo_inv(vec,i,m);
        }

        if(i == m){
            printf("%d salto ",fibo(vec[i]));
            fibo_inv(vec,i-1,m);
        }else{
            printf("%d salto2",fibo(vec[i]));
            vec[i]--;
            fibo_inv(vec,i,m);
        }
    }*/
//fin
}
