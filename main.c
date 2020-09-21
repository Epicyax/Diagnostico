#include <stdio.h>
#include "personaje.h"

void capturarEnteros(){
    int enteros[5], suma = 0;
    float promedio;

    for (size_t i = 0; i < 5; i++){
        scanf("%i", &enteros[i]);
    }

    for (size_t i = 0; i < 5; i++){
        printf("%i\n", enteros[i]);
    }

    for (size_t i = 0; i < 5; i++){
        suma += enteros[i];
    }

    printf("Suma: %i\n",suma);
    printf("Promedio: %f\n", suma/5.0);
}

void mostrar(int n, char cadena[]){
    for (size_t i = 0; i < n; i++)
    {
        printf("%s\n",cadena);
    }
}

int main(){
    char op;
    char cadena[20];
    int n;

    do{
        printf("1) Capturar enteros\n");
        printf("2) Mostrar cadena n veces\n");
        printf("3) Personajes\n");
        printf("4) Mostrar personajes\n");
        printf("0) Salir\n");
        
        fflush(stdin);
        scanf("%c",&op);

        switch (op)
        {
        case '1':
            capturarEnteros();
            break;
        case '2':
            printf("Escribe una cadena de hasta 20 caracteres\n");
            fflush(stdin);
            fgets(cadena,sizeof(cadena),stdin);
            printf("n: ");
            scanf("%i",&n);
            mostrar(n,cadena);
            break;
        case '3':
            capturarPersonaje();
            break;
        case '4':
            mostrarPersonajes();
            break;
        default:
            break;
        }
    }while(op!='0');

    return 0;
}