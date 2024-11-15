#include <stdio.h>

float calcul(float a, float b, char operateur)
{
    float resultat;
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
                return 0;
            } else {
                resultat = a / b;
            }
            break;
        default:
            printf("Erreur : Opérateur invalide\n");
            return 0;
    }
    return resultat;
}

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

    resultat = calcul(a, b, operateur);

    if (resultat != 0 || (resultat == 0 && operateur == '+')) {
        printf("Le résultat est : %f\n", resultat);
    }

    return 0;
}