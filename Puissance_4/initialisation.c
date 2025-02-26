#include <stdio.h>
#include "prototypes.h"

void init(char (*plateau)[8])
{
    int i;
    int j;
    for(i=0;i<6;i++)
    {
        for(j=0;j<7;j++)
        {
            plateau[i][j]=' ';
        }
    }
}