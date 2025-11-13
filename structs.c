#include <stdio.h>
#include <string.h>


struct struct_eins {
    char name[30];
    int alter;
    char klasse;
    
};

struct fahrzeug {
    int baujahr;
    char marke[50];
    struct struct_eins besitzer;
};


int main(){

    struct struct_eins s1;

    s1.alter = 10;
    strcpy(s1.name, "Max");   //Weil Strings sind ja Pointer auf mehrere Buchstaben und Stuct kann keine Werte an eine Liste speichern
    s1.klasse = 'a';  // "" heißt String. '' heißt einzelnes Zeichen

    printf("Alter der person: %d\n", s1.alter);
    printf("Name der Person: %s\n", s1.name);
    printf("Klasse der Person: %c\n\n", s1.klasse);

    struct struct_eins s2 = {"Richard", 15, 'b'}; //So kann man structs auch befüllen. Hier braucht man auch kein scrcpy.

    printf("Alter der person: %d\n", s2.alter);
    printf("Name der Person: %s\n", s2.name);
    printf("Klasse der Person: %c\n\n", s2.klasse);
    

    
    struct fahrzeug car = {1990, "Porsche"};

    printf("Baujahr ist: %d\n", car.baujahr);
    printf("Die Marke ist: %s\n", car.marke);
    strcpy(car.besitzer.name, "Richard");
    printf("Das Auto gehört: %s\n\n", car.besitzer.name);

    struct fahrzeug kaputt;

    strcpy(kaputt.besitzer.name, "Max");
    printf("Das Kaputte Auto gehört %s\n", kaputt.besitzer.name);
    
    kaputt.besitzer.alter = 10;

    printf("Das Kaputte Auto ist %d Jahre alt\n", kaputt.besitzer.alter);
    struct fahrzeug kaputtt = {2010, "Ford", {.klasse = 'g'}};

    printf("Die Klasse des kaputten Autos ist: %c", kaputtt.besitzer.klasse); //Wir dürfen Structs nur einmal definieren aber dann die Werte dort so oft ändern wie wir wollen



    return 0;
}



