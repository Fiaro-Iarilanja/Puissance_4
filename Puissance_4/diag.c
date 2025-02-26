#include <stdio.h>
#include "prototypes.h"

int diag(char (*plateau)[8],int lg,int cln)
{
    int k,j,m;
    int diag=0;
    k=lg;
    j=cln;
    while(j>0 && k>0)
    {
        k--;
        j--;
    }
    while(k<5 && j<6)
    {
        if(plateau[k][j]==plateau[k+1][j+1] && plateau[k][j]!=' ')
        {
            diag++;
            if(diag==3)
            {
                break;
            }
        }
        else
        {
            diag=0;
        }
        k++;
        j++;
    }
    if(diag!=3)
    {
        k=lg;
        j=cln;
        diag=0;
        while(j<6 && k>0)
        {
            j++;
            k--;
        }
        while(j>0 && k<5)
        {
            if(plateau[k][j]==plateau[k+1][j-1] && plateau[k][j]!=' ')
            {
                diag++;
                if(diag==3)
                {
                    break;
                }
            }
            else
            {
                diag=0;
            }
            k++;
            j--;
        }
    }
    return diag;    
}