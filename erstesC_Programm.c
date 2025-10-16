    #include <stdlib.h>
    #include <stdio.h>
    #include <time.h>

    #include <unistd.h>

    int main() {
        printf("Hello World!\n");

        //Kommentar

        int mehrere_Zahlen[10];

        mehrere_Zahlen[0] = 1;
        mehrere_Zahlen[1] = 4;

        printf("Die erste Zahl ist %d, die zweite Zahl ist %d \n", mehrere_Zahlen[0], mehrere_Zahlen[1]);
        printf("Die Speicher-Adresse der ersten Zahl ist %d\n\n", &mehrere_Zahlen[0]);

        srand(time(NULL));
        
        for (int i=0; i<10; i++){
            rand();
        };

        

        int zufallszahl = rand() % 2;
        printf("Die Zufallszahl ist %d", zufallszahl);


        int meine_Zahl;

        printf("Gib eine Zahl zwischen 0 und 1 ein: \n");
        scanf("%d", &meine_Zahl);

        if (meine_Zahl == zufallszahl){
            printf("Gewonnen");
        }else{
            printf("Verloren");
        };

        


        

        return 0;
    }
