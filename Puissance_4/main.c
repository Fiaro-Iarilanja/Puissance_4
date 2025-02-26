#include <stdio.h>
#include <stdlib.h>
#include "prototypes.h"

int main()
{
    char plateau[8][8];
    int lgn,cl,i,EOP,j,k,diag1,diag2;
    int partie_terminee;
    EOP=1;
    diag1=0;
    diag2=0;
    init(plateau);
    affiche_plateau(plateau);
    do
    {
        diag1=0;
        diag2=0;
        for(i=1;i<=2;i++)
        {
            printf("Tour du joueur %d: ",i);
            scanf("%d %d",&lgn,&cl);
            j=cl;
            k=lgn;
            while((plateau[lgn+1][cl]==' ' &&  lgn!=5) || (plateau[lgn][cl]=='X' || plateau[lgn][cl]=='O') || (lgn<0 || lgn>5) || (cl<0 || cl>6))
            {
                printf("Invalid move\n");
                scanf("%d %d",&lgn,&cl);
                j=cl;
                k=lgn;
            }
            if(i==1)
            {
                plateau[lgn][cl]='X';
                diag1=diag(plateau,lgn,cl);
                if(diag1==3)
                {
                    EOP=0;
                }
                else
                {
                    EOP=1;
                }
                partie_terminee=partie(plateau,lgn,cl);
                if(partie_terminee==0 || EOP==0)
                {
                    affiche_plateau(plateau);
                    printf("\n\nFelicitation Joueur 1.Vous avez gagne!!\n\n");
                    exit(0);
                }
            }
            else
            {
                plateau[lgn][cl]='O';
                diag2=diag(plateau,lgn,cl);
                if(diag2==3)
                {
                    EOP=0;
                }
                else
                {
                    EOP=1;
                }
                partie_terminee=partie(plateau,lgn,cl);
                if(partie_terminee==0 || EOP==0)
                {
                    affiche_plateau(plateau);
                    printf("\n\nFelicitation Joueur 2.Vous avez gagne!!\n\n");
                    exit(0);
                }
            }
            affiche_plateau(plateau);
        }
        
    } while (partie_terminee==1);
    
    return (0);
}