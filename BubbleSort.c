#include <stdio.h>
#define max 10

int comprobar(int vector[max],int i);
void bubble(int vector[max],int i);

int main(){

    int i=0,vector[max],count = 0, n = 0;                           //Creacion de variables
    FILE *p;                                                        //Creacion de puntero que usare para apuntar a un archivo

    p = fopen("Entrada_Bubble.txt","r");                            //Abro el archivo de entrada

    printf("Los valores de entrada del archivo son: ");             

    while(!feof(p)){                                                //Voy leyendo mi archivo hasta que sea el final del archivo
        fscanf(p,"%d",&vector[i]);                                  //Leo un numero que esta en una linea del archivo y la paso al vector
        printf("%d ",vector[i]);                                    //Imprimo lo que acabo de leer
        i++;                                                        //Aumento el indice
        count++;                                                    //Aumento un contador que usare mas adelante
    }

    bubble(vector,max-1);                                           //Llamo la funcion bubblesort, le paso el vector,y max-1, siendo en este caso max = 10 pero como el vector al ser tamaño 10 este tendra valores entre 0-9, por eso queda en la llamada como max-1

    i = 0;                                                          //Reinicio el valor del indice 
    printf("\nLos valores Ordenados son: "); 

    while(i < count){                                               //Aqui hago el ciclo hasta que i sea menor que count
        printf("%d ",vector[i]);                                    //Imprimo un elemento del vector
        i++;                                                        //Incremento el indice
    }

    fclose(p);                                                      //Cierro mi archivo
    return 0;
}

void bubble(int vector[max],int i){
    int band = 0, aux = 0;
    band = comprobar(vector,max-1);         //Si es 1 verdadero, 0 falso

    if(band == 0){                          //Si band es 0 entonces quiere decir que los elementos no estan ordenados
        if(vector[i-1] >= vector[i]){       //Pregunta por quien es mayor Si es cierto ocurre el intercambio
            aux = vector[i-1];
            vector[i-1] = vector[i];
            vector[i] = aux;
            if(i-1 == 0){                   //Como estamos recorriendo el vector de derecha a izquierda, hay que verificar si el i-1 es 0, ya que no debemos exceder el indice, el maximo del indice debe ser 0 
                bubble(vector,max);         //Al llegar al 0 el indice pasa a ser max, para luego con la funcion comprobar, comprobar si todos los elementos estan ordenados de manera ascendente
            }else{
                bubble(vector,i-1);         //De caso contrario, el indice se va decrementando
            }
        }else{
            if(i-1 == 0){                   //Aca ocurre lo mismo, pero lo que cambia es que no hubo intercambio de elementos
                bubble(vector,max);
            }else{
                bubble(vector,i-1);
            }
        }
    }
}

int comprobar(int vector[max],int i){       //Funcion para comprobar si los elementos estan ordenados xD
    if(i == 0){
        return 1;
    }else if(vector[i-1] <= vector[i]){
        return comprobar(vector,i-1);
    }else{
        return 0;
    }
}