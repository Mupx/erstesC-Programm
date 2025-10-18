#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <ctype.h>
#include <windows.h>
#include <unistd.h>


int schwierigkeitsgrad(int stufe){

    if(stufe == 1){
        return rand() % 2;
    } else if(stufe == 2){
        return rand() % 6;
    } else if(stufe == 3){
        return rand() % 11;
    } else if (stufe == 4){
        return rand() % 51 + 50;
    } 

}



int main(){
    SetConsoleOutputCP(CP_UTF8);
    char spielen;
    int stufe;
    printf("Willst du ein Spiel spielen? y/n \n");
    scanf(" %c", &spielen);
    
    spielen = tolower(spielen);
    

    while (spielen != 'y' && spielen != 'n'){
        printf("Bitte wähle nur y oder n aus.\n");
        printf("Willst du ein Spiel spielen? y/n \n");
        scanf(" %c", &spielen);
        spielen = tolower(spielen);
    }
    
 
    

    if(spielen == 'y'){

    
        while(spielen == 'y'){


            printf("Wähle einen Schwierigkeitsgrad. Folgende Regeln gelten:\n [1]: 0-1\n [2]: 0-5\n [3]: 0-10\n [4]: 50-100\n");
            scanf("%i", &stufe);
            int zufallszahl = schwierigkeitsgrad(stufe);
            //printf("Die Zufallszahl ist %i\n", zufallszahl);     Fürs Cheaten auskommentieren
            int min, max;

            if(stufe == 1){
                min = 0;
                max = 1;
            } else if(stufe == 2){
                min = 0;
                max = 5;
            } else if(stufe == 3){
                min = 0;
                max = 10;
            } else if(stufe == 4){
                min = 50;
                max = 100;
            }

            printf("Wähle eine Zahl zwischen %i und %i\n", min, max);
            int meine_Wahl;
            scanf("%i", &meine_Wahl);

            if (meine_Wahl == zufallszahl){
                printf("Du hast gewonnen. Die Zahl war: %i \n", zufallszahl);
            } else{
                    printf("Du hast verloren. Die Zahl war: %i \n", zufallszahl);
                }
            
            printf("Willst du noch ein Spiel spielen? y/n   \n");
            scanf(" %c", &spielen);
            spielen = tolower(spielen);
            

        }
    }


    return 0;
}


