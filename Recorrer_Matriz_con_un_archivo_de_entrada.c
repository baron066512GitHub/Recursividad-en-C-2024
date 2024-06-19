#include <stdio.h>
#include fila 

FILE *p;

int main(){
    int num;
    p = fopen("entrada.txt","r+");

    /*fscanf(p,"%d",&num);
    printf("%d",num);
    fprintf(p,"\n%d",num-num);*/
    
    fclose(p);

    return 0;
}