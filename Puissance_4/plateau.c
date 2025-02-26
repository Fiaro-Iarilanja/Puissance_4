#include <stdio.h>
#include "prototypes.h"

void affiche_plateau(char plateau[8][8])
{
    int i;
    int j;
    printf("    0   1   2   3   4   5   6\n");
    printf("  +---+---+---+---+---+---+---+\n");
    for(i=0;i<6;i++)
    {
        printf("%d |",i);
        for(j=0;j<7;j++)
        {
            printf(" %c |",plateau[i][j]);
        }
        printf("\n  +---+---+---+---+---+---+---+\n");
    }
    printf("    0   1   2   3   4   5   6\n");
}