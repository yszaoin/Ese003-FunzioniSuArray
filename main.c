#include <stdio.h>
#include <stdlib.h>

const int N=5; // dimensione massima dell'array

int massimo(int valori[], int dimensione);
int minimo(int valori[], int dimensione);
float media(int valori[], int dimensione);

int main(int argc, char** argv) {
    int i;
    int numeri[N];
    int max, min, med;
    
    printf("Inserisci %d valori interi\n", N);
    for(i=0; i<N; i++) {
        printf("Inserisci il valore di indice %d:", i);
        scanf("%d", &(numeri[i]));
    }
    
    max = massimo(numeri, N);
    min = minimo(numeri, N);
    med = media(numeri, N);
    
    printf("Il valore MASSIMO e' %d.\n", max);
    printf("Il valore MINIMO e' %d.\n", min);
    printf("Il valore MEDIO e' %d.\n", med);
    
    return (EXIT_SUCCESS);
}

int massimo(int valori[], int dimensione){
    // TODO Implementare il corpo della funzione
    return 0;
}

int minimo(int valori[], int dimensione){
    // TODO Implementare il corpo della funzione
    return 0;
}

float media(int valori[], int dimensione){
    // TODO Implementare il corpo della funzione
    return 0;
}

