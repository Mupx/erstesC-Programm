#include <stdio.h>


void swap(int * a, int * b){

    printf("Inhalt von a: %d\n", *a);
    int zwischenspeicher = *b;
    printf("Zwischen gespeicherte Zahl: %d\n", zwischenspeicher);
    *b = *a;
    printf("Neues b: %d\n", *b);
    *a = zwischenspeicher;
    printf("Neues a: %d\n", zwischenspeicher);


}



int main(){

    int a = 5;
    int b = 10;
    printf("Erst war es: %d, %d\n", a, b);
    int *pointer_a = &a;
    int *pointer_b = &b;

    printf("Inhalt von pointer_a: %d\n", *pointer_a);
    printf("Inhalt von pointer_b: %d\n", *pointer_b);
    printf("Adresse von pointer_a:%p\n\n", &pointer_a);
    swap(pointer_a, pointer_b);
    printf("Dann waren es: %d, und %d", a, b);



    return 0;
}




