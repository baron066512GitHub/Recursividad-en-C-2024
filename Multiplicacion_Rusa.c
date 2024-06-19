#include <stdio.h>
void MultiRus(int a, int b, int c);
int fMultiRus(int a, int b, int c);

int main(){
    int multi, multip, res=0;
    printf("Ingrese el Multiplicador "); 
    scanf("%d",&multi);
    printf("Ingrese el Multiplicando "); 
    scanf("%d",&multip);
    MultiRus(multi,multip,res);
    fMultiRus(multi,multip,res);
}


void MultiRus(int a, int b , int c){
    if((a==0) || (b==0)){
        c = 0;
    }else if ( a == 1 ){
            c = b+c;
            printf("El resultado es: %d ", c);
        }else if(a % 2 != 0){
                MultiRus(a/2, b*2, b+c);
            }else{
                    MultiRus(a/2, b*2, c);
                }
    
    
}

int fMultiRus(int a, int b , int c){
    if((a==0) || (b==0)){
        printf("El resultado es: 0");
    }else if ( a == 1 ){
            c = b+c;
            printf("El fresultado es: %d ", c);
        }else if(a % 2 != 0){
                MultiRus(a/2, b*2, b+c);
            }else{
                    MultiRus(a/2, b*2, c);
                }
    
    
}