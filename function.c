

int Menu(){
    int select;

    printf("1. Affichage\n");
    printf("2. Ajout de dépenses\n");
    printf("3. Ajout de recettes\n");

    printf("votre choix: ");
    scanf("%d", &select);
    return (select);
}