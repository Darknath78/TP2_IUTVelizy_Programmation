/*
** IUT Velizy PROJECT, 2024
** tableMultiplication
** File description:
** tableMultiplication
*/

#include <stdio.h>

int main()
{
    int ligne, colonne, produit;

    printf("    ");
    for (colonne = 1; colonne <= 10; colonne++) {
        printf("%3d ", colonne);
    }
    printf("\n");

    printf("----");
    for (colonne = 1; colonne <= 10; colonne++) {
        printf("----");
    }
    printf("\n");

    for (ligne = 1; ligne <= 10; ligne++) {
        printf("%2d |", ligne);
        for (colonne = 1; colonne <= 10; colonne++) {
            produit = ligne * colonne;
            if (produit < 10) {
                printf("  %d ", produit);
            } else if (produit < 100) {
                printf(" %d ", produit);
            } else {
                printf("%d ", produit);
            }
        }
        printf("\n");
    }
    return 0;
}