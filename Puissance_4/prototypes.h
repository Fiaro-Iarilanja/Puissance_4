#ifndef PROTOTYPE_H
#define PROTOTYPE_H

int diag(char (*plateau)[8],int lg,int cln);
void affiche_plateau(char plateau[8][8]);
int partie(char (*plateau)[8],int lg,int cln);
void init(char (*plateau)[8]);

#endif