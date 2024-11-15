#include <stdio.h>

int main() {
    int n, somme = 0;

    printf("Entrez un nombre entier n : ");
    scanf("%d", &n);

    for (int i = 1; somme + i <= n; i += 2) {
        somme += i;
    }

    printf("La somme des premiers nombres impairs inférieurs ou égaux à %d est : %d\n", n, somme);

    return 0;
}