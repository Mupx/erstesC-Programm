#include <stdio.h>



int verdoppeln(int zahl){
    return zahl *2;
}

int main() {

    int liste[5] = {1,2,3,4,5};


    printf("Die Zahlen waren: ");
    for (int i = 0; i<5; i++){
        printf("%d", liste[i]);
    }
    printf("\n");

    int *pointer = liste;

    for (int i = 0; i<5; i++){
        printf("Ich zeige auf: %p, mit dem Wert: %d \n", pointer, *pointer);
        *pointer ++;
    }

    for (int i = 0; i<5; i++){
        int doppelzahl = verdoppeln(liste[i]);
        printf("%d\n", doppelzahl);
    }


    
    return 0;
}