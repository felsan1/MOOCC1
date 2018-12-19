/*Escribe un programa en C que:

    Declare una estructura llamada Suma con una tabla de tres enteros (utiliza una macro para definir su tamaño) y un entero para almacenar la suma de los elementos de la tabla.
    Declare otra estructura llamada Resto con una tabla de dos elementos de tipo Suma (utiliza una macro para definir su tamaño) y un entero para almacenar el módulo de la división de las dos sumas.

El programa declarará una variable estructurada a partir de la estructura Resto.

A continuación solicitará los tres enteros de la primera tabla y los guardará en los miembros correspondientes de la variable estructurada.

A continuación calculará la suma de los tres números leídos y los guardará en el miembro correspondiente de la variable estructurada.

A continuación solicitará los tres enteros de la segunda tabla y los guardará en los miembros correspondientes de la variable estructurada.

A continuación calculará la suma de los tres números leídos y los guardará en el miembro correspondiente de la variable estructurada.

A continuación calculará el resto de la división de las dos sumas y lo guardará en el miembro correspondiente de la variable estructurada.

Por último mostrará la información de las sumas y restos por pantalla de la forma que se especifica en el ejemplo más abajo.

Los mensajes se han de mostrar tal y como aparecen en el siguiente ejemplo de ejecución y en el mismo orden (variando sólo según los datos introducidos por el usuario).

Lo que sigue es un ejemplo de ejecución del programa:

Introduce el primer entero de la primera tabla: 14
Introduce el segundo entero de la primera tabla: 19
Introduce el tercer entero de la primera tabla: 8
Introduce el primer entero de la segunda tabla: 4
Introduce el segundo entero de la segunda tabla: 11
Introduce el tercer entero de la segunda tabla: 3
La suma de los elementos de la primera tabla es 41.
La suma de los elementos de la segnda tabla es 18.
El resto de la división de ambas sumas es 5.
*/
#include <stdio.h>

#define SCINT 3
#define RSINT 2

typedef struct{
    int adds[SCINT];
    int resadd;
} Suma;

typedef struct{
    Suma addr[RSINT];
    int ressub;
} Resta;

int main(){
    Resta store;
    
    printf("Introduce el primer entero de la primera tabla: ");
    scanf("%d", &store.addr[0].adds[0]);
    printf("Introduce el segundo entero de la primera tabla: ");
    scanf("%d", &store.addr[0].adds[1]);
    printf("Introduce el tercer entero de la primera tabla: ");
    scanf("%d", &store.addr[0].adds[2]);
        
    printf("Introduce el primer entero de la segunda tabla: ");
    scanf("%d", &store.addr[1].adds[0]);
    printf("Introduce el segundo entero de la segunda tabla: ");
    scanf("%d", &store.addr[1].adds[1]);
    printf("Introduce el tercer entero de la segunda tabla: ");
    scanf("%d", &store.addr[1].adds[2]);
    
    store.addr[0].resadd = store.addr[0].adds[2] + store.addr[0].adds[1] + store.addr[0].adds[0];
    store.addr[1].resadd = store.addr[1].adds[2] + store.addr[1].adds[1] + store.addr[1].adds[0];
    store.ressub = store.addr[0].resadd % store.addr[1].resadd;
    
    printf("La suma de los elementos de la primera tabla es %d\n", store.addr[0].resadd);
    printf("La suma de los elementos de la segunda tabla es %d\n", store.addr[1].resadd);
    printf("El resto de la división de ambas sumas es %d\n", store.ressub);
    
    return 0;
}
    
    
    
