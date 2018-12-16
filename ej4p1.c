/* Vamos a hacer un programa que solicite al usuario datos sobre su última partida al LoL y muestre el ratio KDA por pantalla, que se calcula con la fórmula: (K+A)/D, sea K Kills, A Assists y D Deaths.

Para ello, será necesario almacenarlos en una estructura, que al menos deberá contener: nombre de usuario, nivel del usuario, experiencia, nombre del campeón, asesinatos, muertes y asistencias.

Este sería un ejemplo de programa:

¿Cuál es tu nombre de invocador? asdfg
¿Cuál es tu nivel? 67
¿Cuánta experiencia has adquirido ya en dicho nivel? 2651
¿Con qué campeón has jugado tu última partida? Soraka
¿Cuántos asesinatos has hecho? 1
¿Cuántas veces has muerto? 3
¿Y cuántas asistencias has hecho? 18
asdfg, de nivel 67 y experiencia 2651, tu KDA ratio con Soraka ha sido 6.33.
*/
#include <stdio.h>
#include <string.h>
#define SD 256 //longitud máxima de las cadenas

typedef struct{
    char uname[SD], cname[SD];
    int lev, exp, kills, deaths, assists;
}LOLdat;

int main(){
    LOLdat uloldat;
    
    printf("¿Cuál es tu nombre de invocador? ");
    fgets(uloldat.uname, SD, stdin);
    printf("¿Cuál es tu nivel? ");
    scanf("%d", &uloldat.lev);
    printf("¿Cuánta experiencia has adquirido ya en dicho nivel? ");
    scanf("%d", &uloldat.exp);
    getchar();
    printf("¿Con qué campeón has jugado tu última partida? ");
    fgets(uloldat.cname, SD, stdin);
    printf("¿Cuántos asesinatos has hecho? ");
    scanf("%d", &uloldat.kills);
    printf("¿Cuántas veces has muerto? ");
    scanf("%d", &uloldat.deaths);
    printf("¿Y cuántas asistencias has hecho? ");
    scanf("%d", &uloldat.assists);
    
    uloldat.uname[strlen(uloldat.uname)-1]=0; //Elimino el retorno de carro a caracter nulo al final de la cadena
    uloldat.cname[strlen(uloldat.cname)-1]=0;
    
    printf("%s, de nivel %d y experiencia %d, tu KDA ratio con %s ha sido %.2f\n", uloldat.uname, uloldat.lev, uloldat.exp, uloldat.cname, (float)(uloldat.kills+uloldat.assists)/uloldat.deaths);
    
    return 0;
}
