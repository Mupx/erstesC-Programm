    #include <stdlib.h>
    #include <stdio.h>
    #include <time.h>

    #include <unistd.h>

    int main() {
        char userinput;
        srand(time(NULL) * clock());
        printf("Willst du ein Spiel spielen? y/n   \n");
        scanf(" %c", &userinput);

        while (userinput != 'n'){
            int zufallszahl = rand() % 2;
            printf("Gib eine zahl zwischen 0 und 1 ein: \n");
            int meine_Wahl;
            scanf("%i", &meine_Wahl);

            if (meine_Wahl == zufallszahl){
                printf("Du hast gewonnen. Die Zahl war: %i \n", zufallszahl);
            }
            else{
                printf("Du hast verloren. Die Zahl war: %i \n", zufallszahl);
            }
            printf("Willst du noch ein Spiel spielen? y/n   \n");
            scanf(" %c", &userinput);


        }
        
        return 0;
    }
