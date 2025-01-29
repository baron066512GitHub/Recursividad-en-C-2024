#include <stdio.h>

FILE *p;

int main(){
    p = fopen("entrada.txt", "r");
    int r;

    if (p == NULL) {
        printf("Error al abrir el archivo\n");
        return 1;
    }

    for(int i = 0; i<5; i++){
        fscanf(p,"%d", &r);
        printf("%d ",r);
    }
  
  fclose(p);

  
}

/*
#include <stdio.h>

int main() {
    FILE *archivo = fopen("datos.txt", "w");
    int edad = 30;
    double altura = 1.75;
    char nombre[] = "Juan";

    fprintf(archivo, "Nombre: %s, Edad: %d, Altura: %.2f\n", nombre, edad, altura);

    fclose(archivo);
    return 0;
}


*/
