#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../include/header.h"

int sommeImpairs(int n)
{
    int somme = 0;

    for (int i = 1; somme + i <= n; i += 2) {
        somme += i;
    }

    printf("La somme des premiers nombres impairs inférieurs ou égaux à %d est : %d\n", n, somme);

    return 0;
}