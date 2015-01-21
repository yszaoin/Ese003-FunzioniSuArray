#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

const int N=5; // dimensione massima dell'array

int massimo(int valori[], int dimensione);
int minimo(int valori[], int dimensione);
float media(int valori[], int dimensione);

int main(int argc, char** argv) {
    int i;
    int numeri[N];
    int max, min;
    float med;
    
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
    printf("Il valore MEDIO e' %f.\n", med);
    
    return (EXIT_SUCCESS);
}

int massimo(int valori[], int dimensione){
    int risultato = INT_MIN;
    int i;
    for(i=0; i<dimensione; i++) {
        if(risultato < valori[i])
            risultato = valori[i];
    }
    return risultato;
}

int minimo(int valori[], int dimensione){
    int risultato = INT_MAX;
    int i;
    for(i=0; i<dimensione; i++) {
        if(risultato > valori[i])
            risultato = valori[i];
    }
    return risultato;
}

float media(int valori[], int dimensione){
    float risultato=0;
    int i;
    for(i=0; i<dimensione; i++) {
        risultato += valori[i];
    }
    risultato = risultato / dimensione;
    return risultato;
}

