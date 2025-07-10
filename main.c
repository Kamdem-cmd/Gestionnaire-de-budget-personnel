#include "head.h"

int main(){
    int choix;

    printf("Hello");
    choix = Menu();
    switch (choix)
    {
    case 1:
        printf("Affichage\n");
        break;
    case 2:
        printf("Ajout\n");
        break;

    default:
        break;
    }
    return (0);
}