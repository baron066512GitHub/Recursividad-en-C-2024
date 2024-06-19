#include<stdio.h>
#define max 10

int fibo(int n);
void fibo_i(int vec[max],int i);
void fibo_i2(int vec[max],int i);

int main(){
    int vec[max]={1,2,3};
    
    fibo_i2(vec,2);
    return 0;
}

int fibo(int n){
    int res;
    if(n == 0){
        res = 0;
    }else if(n == 1){
        res = 1;
    }else{
        res = fibo(n-2)+fibo(n-1);
    } 
    return res; 
}

void fibo_i(int vec[max], int i){
    
    if(i == 0){
        if(vec[i] == 0){
            printf("%d ", fibo(vec[i]));
        }else{
            printf("%d ", fibo(vec[i]));
            vec[i]--;
            fibo_i(vec,i); 
        }
    }else 
        if(vec[i] == 0){ 
            printf("%d \n", fibo(vec[i]));
            fibo_i(vec,i-1);
        }else{
            printf("%d ", fibo(vec[i]));
            vec[i]--;
            fibo_i(vec,i);
        }
}

void fibo_i2(int vec[max],int i){
    if( i != 0 && vec[i] == 0 ){
        printf("%d ", fibo(vec[i]));
        fibo_i(vec,i-1);
    }else if(vec[i] == 0){
        printf("%d \n", fibo(vec[i]));
    }else{
       printf("%d ", fibo(vec[i]));
       vec[i]--;
       fibo_i(vec,i);
    }
}