/*
** IUT Velizy PROJECT, 2024
** calculatrice
** File description:
** calculatrice
*/

#include <stdio.h>

int main()
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