#include <stdio.h>

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

int main(){
    char op;

    do{
        printf("1) Capturar enteros\n");
        printf("2) Mostrar cadena n veces\n");
        printf("3) Personajes\n");
        printf("0) Salir\n");
        
        scanf("%c",&op);
        fflush(stdin);

        switch (op)
        {
        case '1':
            capturarEnteros();
            break;
        case '2':
            break;
        case '3':
            break;
        
        default:
            break;
        }
    }while(op!='0');

    return 0;
}