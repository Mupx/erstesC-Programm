#include <stdio.h>
#include <string.h>


void vocal_count(char * woertchen, int laenge){

    printf("%c\n", *woertchen);
    char vokale[] = "aeiouAEIOU";
    int vokalzaehler = 0;
    printf("%c", woertchen);

    printf("Anzahl Vokale: %d", vokalzaehler);
 }


int main(){

    char Wort[] = "Programmieren";

    //printf("Wort: %s\n", Wort);
    char * pointer = Wort;

    //printf("Inhalt des Pointers: %c\n", *pointer);
    //printf("Zweiter Buchstabe: %c\n", *(pointer+1));
    //USW

    while(*pointer != '\0'){
        //printf("%c\n", *pointer);
        pointer++;
    }

    printf("Laenge des String: %zu\n", strlen(Wort));


    vocal_count(Wort, strlen(Wort));





    return 1;
}