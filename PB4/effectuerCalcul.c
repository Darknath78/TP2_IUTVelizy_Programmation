#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../include/header.h"

int effectuerCalcul()
{
    float a, b, resultat;
    char operateur;

    printf("Entrez le premier nombre : ");
    scanf("%f", &a);

    printf("Entrez l'opérateur (+, -, *, /) : ");
    scanf(" %c", &operateur);

    printf("Entrez le deuxième nombre : ");
    scanf("%f", &b);

    switch (operateur) {
        case '+':
            resultat = a + b;
            break;
        case '-':
            resultat = a - b;
            break;
        case '*':
            resultat = a * b;
            break;
        case '/':
            if (b == 0) {
                printf("Erreur : Division par zéro impossible\n");
                return 1;
            } else {
                resultat = a / b;
            }
            break;
        default:
            printf("Erreur : Opérateur invalide\n");
            return 1;
    }

    printf("Le résultat est : %f\n", resultat);

    return 0;
}
