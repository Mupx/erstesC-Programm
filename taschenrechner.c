#include <stdio.h>
#include <stdbool.h> 
#include <ctype.h>




double berechnung(double zahl1, double zahl2, char operator){

    while (operator != '+' && operator != '-' && operator != '*' && operator != '/'){
        printf("Der Operator muss entweder +, -, * oder / sein. Bitte gib einen gueltigen Operator ein: \n");
        scanf(" %c", &operator);
    }

   while (operator == '/' && zahl2 == 0){
    printf("Du kannst nicht durch 0 teilen.\n");
    printf("Gib eine andere Zahl ein: \n");
    scanf("%lf", &zahl2);
   }

    switch(operator){
        case '+':
        return zahl1 + zahl2;

        case '-':
        return zahl1 - zahl2;

        case '*':
        return zahl1 * zahl2;

        case '/':
        return zahl1 / zahl2;
        
    }
}

int main(){

    bool beenden = false;

    while(beenden == false){
        double zahl1;
        double zahl2;
        char operator;

        printf("Gib eine Zahl ein: \n");
        scanf(" %lf", &zahl1);

        printf("Welchen Operator willst du verwenden: \n");
        scanf(" %c", &operator);

        printf("Gib deine zweite Zahl ein: \n");
        scanf(" %lf", &zahl2);

        double ergebnis = berechnung(zahl1, zahl2, operator);

        printf("Das Ergebnis ist: %.2lf\n", ergebnis);

        printf("Willst du eine weitere Berechnung durchführen? \n");
        printf("y/n\n");

        char weitere_Rechnung;
        scanf(" %c", &weitere_Rechnung);

        weitere_Rechnung = tolower(weitere_Rechnung);

        if(weitere_Rechnung == 'n'){
            beenden = true;
        }

        
    }


    return 0;
}