#include <stdio.h>


int sommepremiersimpairs(int n)
{
    int somme = 0;

    for (int i = 1; somme + i <= n; i += 2) {
        somme += i;
    }

    return somme;
}

int main() {
    int n, somme = 0;

    printf("Entrez un nombre entier n : ");
    scanf("%d", &n);

    somme = sommepremiersimpairs(n);

    printf("La somme des premiers nombres impairs inférieurs ou égaux à %d est : %d\n", n, somme);

    return 0;
}