#include <stdio.h>

int main(){

    int zahl = 100;
    printf("Die Zahl an sich: %d\n", zahl);
    printf("Adresse der Zahl: %p\n\n", &zahl);

    int * pointer = &zahl;
    printf("Was pointer als Inhalt gespeichert hat: %p\n", pointer);
    printf("Die Adresse des Pointers selbst: %p\n", &pointer);
    printf("Der Inhalt von dem, worauf pointer zeigt: %d\n\n", *pointer);

// Listen (Arrays) sind auch nur Pointer

int eine_Liste[] = {10, 20, 30, 40};

printf("Diese Liste ist gespeichert bei: %p\n", eine_Liste);
printf("Oder auch bei: %p\n\n", &eine_Liste);
for (int i = 0; i<4; i++){
    printf("Wert des Inhalts: %d\n", eine_Liste[i]);
    printf("Adresse des Inhalts: %p\n", &eine_Liste[i]);
    
}
printf("\n");
printf("Wenn man die Liste als Pointer ausgibt, kommt das erste Element raus: %d\n", *eine_Liste);
printf("Man kann den Counter von *eine_Liste auch erhöhen: \n");
printf("Zum Beispiel so: %d", *(eine_Liste +1));
printf("Jetzt mit einer for-Schleife:\n\n");

for (int i = 0; i<4; i++){
    printf("Die Zahl ist %d\n", *(eine_Liste + i));
}

printf("Jetzt noch auf alle Zahlen 5 addieren: \n");
for (int i = 0; i<4; i++){
    printf("Neue Zahl: %d\n", (*(eine_Liste + i))+5);
}



}