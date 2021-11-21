#include <stdio.h>
int main(){
    int numeros[5][5], *nv;
    float suma=0, prom;
    for (int i=0;i<25;i++){
        printf("Ingrese un numero: ");
        scanf("%i", &numeros[i]);
    }
    nv = numeros;
    for (int i=0;i<25;i++){
        suma += *nv;
        i++; 
    }
    prom = suma/25;
    printf("El promeio es: %f", prom); 
}
