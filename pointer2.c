#include <stdio.h>


void zeige_info(int *konto){
    printf("Aktueller Kontostand: %d\n", *konto);
    printf("Adresse des Kontos: %p\n", konto);
}


void einzahlen(int *konto, int betrag){
    *konto = *konto + betrag;
    
    
}

void auszahlen(int *konto, int auszahlbetrag){
    if (*konto - auszahlbetrag < 0){
        printf("Zu wenig Geld auf dem Konto.\n");
    } else{
        *konto = *konto - auszahlbetrag;
        printf("Neuer Kontobetrag: %d\n", *konto);
    }
}


int main(){
    int kontostand = 100;
    int einzahlung;
    int auszahlung;
    zeige_info(&kontostand);
    einzahlen(&kontostand, 200);
    printf("Neuer Betrag: %d\n", kontostand);
    printf("Wie viel möchstest du abheben? \n");
    scanf("%d", &auszahlung);
    auszahlen(&kontostand, auszahlung);
    



    return 0;
}

