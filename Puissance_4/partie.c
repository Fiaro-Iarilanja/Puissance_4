#include <stdio.h>
#include "prototypes.h"

int partie(char (*plateau)[8],int lg,int cln)
{
    int i,j;
    int gagne,win;
    int valide=1;
    gagne=0;
    win=0;
    for(i=0;i<6;i++)
    {
        j=cln;
        if(plateau[i][j]==plateau[i+1][j] && plateau[i][j]!=' ' && (i+1)<6)
        {
            gagne++;
        }
        else
        {
            gagne=0;
        }
        if(gagne==3)
        {
            valide=0;
        }
    }
    for(j=0;j<7;j++)
    {
        i=lg;
        if(plateau[i][j]==plateau[i][j+1] && plateau[i][j]!=' ' && (j+1)<7)
        {
            win++;
        }
        else
        {
            win=0;
        }
        if(win==3)
        {
            valide=0;
        }
    }
    return valide;
}
