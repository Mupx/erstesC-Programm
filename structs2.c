#include <stdio.h>
#include <string.h>
#include <stdbool.h>

char name[] = "Richard"; //Globale Variable


void schreiben(){

    printf("%s\n", name);
}



struct klasse {
    int klasse;
    char unterklasse;
    char klassenlehrer[100];
};


struct person {
    int alter;
    bool fuehrerschein;
    char name[50];
};

struct fahrzeug {
    char marke[50];
    int alter;
    struct person besitzer;

};


void verkehrkontrolle(struct fahrzeug car){
    
    if (car.besitzer.fuehrerschein == false){
        printf("Die Person %s ist verhaftet\n", car.besitzer.name);
    }
    else{
        printf("Alles gut.\n");
    }
}

int main(){

    schreiben();

    struct klasse klasse1;
    klasse1.klasse = 2;
    klasse1.unterklasse = 'b';
    strcpy(klasse1.klassenlehrer, "Herr Holler");
    printf("Die Klasse ist die Klasse %d%c mit Klassenlehrere %s\n", klasse1.klasse, klasse1.unterklasse, klasse1.klassenlehrer);

    struct klasse klasse2 = {3, 'a', "Frau Schön"};
    printf("Die Klasse ist die Klasse %d%c mit Klassenlehrere %s\n", klasse2.klasse, klasse2.unterklasse, klasse2.klassenlehrer);

    struct person man1 = {54, true, "Maximilian"};
    struct person man2 = {19, false, "Norbert"};

    struct fahrzeug kfz1 = {"Porsche", 14, man1};
    struct fahrzeug kfz2 = {"Ford", 3, man2};

    verkehrkontrolle(kfz1);
    verkehrkontrolle(kfz2);

    
    return 0;
}

