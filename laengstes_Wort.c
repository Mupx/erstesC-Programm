#include <stdio.h>
#include <string.h>

int main (){
    char satz[] = "Das ist ein Satz";
    char *wörter[] = {"Hallo", "Welt", "Pointer", "sind", "cool"}; //Das hier ist kein String, sondern ein Array (Liste) 
    //Außerdem ist wörter ein Pointer auf Pointer also schon **. Listen SIND POINTER. Du kannst sie nicht einfach so ausgeben
    printf("%c\n", wörter[1][1]);
    
    //printf("%s\n", satz);
    //printf("%zu\n", strlen(wörter[1]));
    int zahlmax =0;
    char * pointer_to_WORT = NULL;
    int position_im_Wort = 0;
    for (int i = 0; i < 5 ; i++){
        int helfsvariable = 0;
        char buchstabe = wörter[i][helfsvariable];
        while (buchstabe != '\0'){
            printf("%c\n", wörter[i][helfsvariable]);
            helfsvariable++;
            buchstabe = wörter[i][helfsvariable];
        }
        printf("Länge des Wortes %s ist %d\n",wörter[i], helfsvariable);
        if (helfsvariable > zahlmax){
            zahlmax = helfsvariable;
            pointer_to_WORT = wörter[i];

        }

        
    }
    printf("Das wort %s hat die meisten Buchstaben: %d\n", pointer_to_WORT, zahlmax);


    
    

    return 0;
}


