#include <stdio.h>

int main (void){
    printf("Ingrese una palabra: ");

    char palabra[100];
    scanf("%s", palabra);
    getchar();
    printf("Su palabra ingresada es: ");
    printf(palabra);
}
