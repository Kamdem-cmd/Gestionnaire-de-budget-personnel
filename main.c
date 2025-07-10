#include "head.h"

int main(){
    int choix;

    printf("Gestionnaire de Budget Personnel \n");
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