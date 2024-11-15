#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../include/header.h"

void menu()
{
    int choix;

    do {
        printf("\nQue desirez-vous faire :\n");
        printf("(1) Effectuer un calcul.\n");
        printf("(2) Calculer la somme des premiers impairs.\n");
        printf("(3) Afficher la table de multiplication.\n");
        printf("(0) Quitter.\n");
        printf("Sélectionnez 0, 1, 2 ou 3 puis appuyez sur Entrée.\n");
        printf("--> ");
        scanf("%d", &choix);
        getchar();

        switch (choix) {
            case 1:
                effectuerCalcul();
                break;
            case 2: {
                int n;
                printf("Entrez un entier : ");
                scanf("%d", &n);
                getchar();
                sommeImpairs(n);
                break;
            }
            case 3:
                afficherTableMultiplication();
                break;
            case 0:
                printf("Au revoir !\n");
                break;
            default:
                printf("Choix invalide.\n");
        }
    } while (choix != 0);
}

int main()
{
    menu();
    return 0;
}