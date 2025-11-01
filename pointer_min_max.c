#include <stdio.h>


void finde_min_max(int liste_2[], int länge, int * min, int * max){
    
    int i=0;
    int vergleicher_zahl_max = liste_2[0];
    int vergleciher_zahl_min = liste_2[0];
    while (i<länge){
        //Finde max
        if (vergleciher_zahl_min > liste_2[i]){
            vergleciher_zahl_min = liste_2[i];
            i++;
        }
        if (vergleicher_zahl_max < liste_2[i]){
            vergleicher_zahl_max = liste_2[i];
            i++;
        }
        i++;
        
    }

        
    *min = vergleciher_zahl_min;
    *max = vergleicher_zahl_max;
    printf("Die höchte Zahl ist: %d\nUnd die kleinste Zahl ist: %d\n", *max, *min);
    
}



int main(){

    int liste[] = {6,10, 5, 11, 3};
    printf("Größe der Liste: %zu\n", sizeof(liste)); //Für size_t Werte immer %zu verwenden
    int länge = sizeof(liste) / sizeof(liste[0]);
    printf("Anzahl der Elemente: %d\n\n", länge);
    
    for (int i = 0; i < länge; i++){
        printf("Inhalt der Stellen: %d\n", liste[i]);
        printf("Adresse der Stellen: %p\n", &liste[i]);
    }
    
    int * pointer = liste;

    for (int i = 0; i < länge; i++){
        printf("Inhalt des Pointers: %d\n", *(pointer+i));
    }

    int minimum;
    int maximum;

    finde_min_max(liste, länge, &minimum, &maximum);


    return 0;
}