#include <stdio.h>





double berechnung(double zahl1, double zahl2, char operator){

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

    printf("%lf", ergebnis);

    return 0;
}