#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
#include "scrabble.h"

grille grilleDeJeu;

void creer_grille()
{
    grilleDeJeu[0][0]=32;
    grilleDeJeu[0][1]=32;
    grilleDeJeu[0][2]=65;
    grilleDeJeu[0][3]=32;
    grilleDeJeu[0][4]=66;
    grilleDeJeu[0][5]=32;
    grilleDeJeu[0][6]=67;
    grilleDeJeu[0][7]=32;
    grilleDeJeu[0][8]=68;
    grilleDeJeu[0][9]=32;
    grilleDeJeu[0][10]=69;
    grilleDeJeu[0][11]=32;
    grilleDeJeu[0][12]=70;
    grilleDeJeu[0][13]=32;
    grilleDeJeu[0][14]=71;
    grilleDeJeu[0][15]=32;
    grilleDeJeu[0][16]=72;
    grilleDeJeu[0][17]=32;
    grilleDeJeu[0][18]=73;
    grilleDeJeu[0][19]=32;
    grilleDeJeu[0][20]=74;
    grilleDeJeu[0][21]=32;
    grilleDeJeu[0][22]=75;
    grilleDeJeu[0][23]=32;
    grilleDeJeu[0][24]=76;
    grilleDeJeu[0][25]=32;
    grilleDeJeu[0][26]=77;
    grilleDeJeu[0][27]=32;
    grilleDeJeu[0][28]=78;
    grilleDeJeu[0][29]=32;
    grilleDeJeu[0][30]=79;
    grilleDeJeu[0][31]=32;

    grilleDeJeu[1][0]=' ';
    grilleDeJeu[1][1]=49;
    grilleDeJeu[1][2]=32;
    grilleDeJeu[1][3]=36;
    grilleDeJeu[1][4]=' ';
    grilleDeJeu[1][5]=' ';
    grilleDeJeu[1][6]=' ';
    grilleDeJeu[1][7]=' ';
    grilleDeJeu[1][8]=32;
    grilleDeJeu[1][9]='&';
    grilleDeJeu[1][10]=' ';
    grilleDeJeu[1][11]=' ';
    grilleDeJeu[1][12]=' ';
    grilleDeJeu[1][13]=' ';
    grilleDeJeu[1][14]=' ';
    grilleDeJeu[1][15]=' ';
    grilleDeJeu[1][16]=32;
    grilleDeJeu[1][17]=36;
    grilleDeJeu[1][18]=' ';
    grilleDeJeu[1][19]=' ';
    grilleDeJeu[1][20]=' ';
    grilleDeJeu[1][21]=' ';
    grilleDeJeu[1][22]=' ';
    grilleDeJeu[1][23]=' ';
    grilleDeJeu[1][24]=32;
    grilleDeJeu[1][25]='&';
    grilleDeJeu[1][26]=' ';
    grilleDeJeu[1][27]=' ';
    grilleDeJeu[1][28]=' ';
    grilleDeJeu[1][29]=' ';
    grilleDeJeu[1][30]=32;
    grilleDeJeu[1][31]=36;

    grilleDeJeu[2][0]=' ';
    grilleDeJeu[2][1]=50;
    grilleDeJeu[2][2]=' ';
    grilleDeJeu[2][3]=' ';
    grilleDeJeu[2][4]=32;
    grilleDeJeu[2][5]='@';
    grilleDeJeu[2][6]=' ';
    grilleDeJeu[2][7]=' ';
    grilleDeJeu[2][8]=' ';
    grilleDeJeu[2][9]=' ';
    grilleDeJeu[2][10]=' ';
    grilleDeJeu[2][11]=' ';
    grilleDeJeu[2][12]=32;
    grilleDeJeu[2][13]='%';
    grilleDeJeu[2][14]=' ';
    grilleDeJeu[2][15]=' ';
    grilleDeJeu[2][16]=' ';
    grilleDeJeu[2][17]=' ';
    grilleDeJeu[2][18]=' ';
    grilleDeJeu[2][19]=' ';
    grilleDeJeu[2][20]=32;
    grilleDeJeu[2][21]='%';
    grilleDeJeu[2][22]=' ';
    grilleDeJeu[2][23]=' ';
    grilleDeJeu[2][24]=' ';
    grilleDeJeu[2][25]=' ';
    grilleDeJeu[2][26]=' ';
    grilleDeJeu[2][27]=' ';
    grilleDeJeu[2][28]=32;
    grilleDeJeu[2][29]='@';
    grilleDeJeu[2][30]=' ';
    grilleDeJeu[2][31]=' ';

    grilleDeJeu[3][0]=' ';
    grilleDeJeu[3][1]=51;
    grilleDeJeu[3][2]=' ';
    grilleDeJeu[3][3]=' ';
    grilleDeJeu[3][4]=' ';
    grilleDeJeu[3][5] =' ';
    grilleDeJeu[3][6]=32;
    grilleDeJeu[3][7]='@';
    grilleDeJeu[3][8]=' ';
    grilleDeJeu[3][9]=' ';
    grilleDeJeu[3][10]=' ';
    grilleDeJeu[3][11]=' ';
    grilleDeJeu[3][12]=' ';
    grilleDeJeu[3][13]=' ';
    grilleDeJeu[3][14]=32;
    grilleDeJeu[3][15]='&';
    grilleDeJeu[3][16]=' ';
    grilleDeJeu[3][17]=' ';
    grilleDeJeu[3][18]=32;
    grilleDeJeu[3][19]='&';
    grilleDeJeu[3][20]=' ';
    grilleDeJeu[3][21]=' ';
    grilleDeJeu[3][22]=' ';
    grilleDeJeu[3][23]=' ';
    grilleDeJeu[3][24]=' ';
    grilleDeJeu[3][25]=' ';
    grilleDeJeu[3][26]=32;
    grilleDeJeu[3][27]='@';
    grilleDeJeu[3][28]=' ';
    grilleDeJeu[3][29]=' ';
    grilleDeJeu[3][30]=' ';
    grilleDeJeu[3][31]=' ';

    grilleDeJeu[4][0]=' ';
    grilleDeJeu[4][1]=52;
    grilleDeJeu[4][2]=32;
    grilleDeJeu[4][3]='&';
    grilleDeJeu[4][4]=' ';
    grilleDeJeu[4][5]=' ';
    grilleDeJeu[4][6]=' ';
    grilleDeJeu[4][7]=' ';
    grilleDeJeu[4][8]=32;
    grilleDeJeu[4][9]='@';
    grilleDeJeu[4][10]=' ';
    grilleDeJeu[4][11]=' ';
    grilleDeJeu[4][12]=' ';
    grilleDeJeu[4][13]=' ';
    grilleDeJeu[4][14]=' ';
    grilleDeJeu[4][15]=' ';
    grilleDeJeu[4][16]=32;
    grilleDeJeu[4][17]='&';
    grilleDeJeu[4][18]=' ';
    grilleDeJeu[4][19]=' ';
    grilleDeJeu[4][20]=' ';
    grilleDeJeu[4][21]=' ';
    grilleDeJeu[4][22]=' ';
    grilleDeJeu[4][23]=' ';
    grilleDeJeu[4][24]=32;
    grilleDeJeu[4][25]='@';
    grilleDeJeu[4][26]=' ';
    grilleDeJeu[4][27]=' ';
    grilleDeJeu[4][28]=' ';
    grilleDeJeu[4][29]=' ';
    grilleDeJeu[4][30]=32;
    grilleDeJeu[4][31]='&';

    grilleDeJeu[5][0]=' ';
    grilleDeJeu[5][1]=53;
    grilleDeJeu[5][2]=' ';
    grilleDeJeu[5][3]=' ';
    grilleDeJeu[5][4]=' ';
    grilleDeJeu[5][5]=' ';
    grilleDeJeu[5][6]=' ';
    grilleDeJeu[5][7]=' ';
    grilleDeJeu[5][8]=' ';
    grilleDeJeu[5][9]=' ';
    grilleDeJeu[5][10]=32;
    grilleDeJeu[5][11]='@';
    grilleDeJeu[5][12]=' ';
    grilleDeJeu[5][13]=' ';
    grilleDeJeu[5][14]=' ';
    grilleDeJeu[5][15]=' ';
    grilleDeJeu[5][16]=' ';
    grilleDeJeu[5][17]=' ';
    grilleDeJeu[5][18]=' ';
    grilleDeJeu[5][19]=' ';
    grilleDeJeu[5][20]=' ';
    grilleDeJeu[5][21]=' ';
    grilleDeJeu[5][22]=32;
    grilleDeJeu[5][23]='@';
    grilleDeJeu[5][24]=' ';
    grilleDeJeu[5][25]=' ';
    grilleDeJeu[5][26]=' ';
    grilleDeJeu[5][27]=' ';
    grilleDeJeu[5][28]=' ';
    grilleDeJeu[5][29]=' ';
    grilleDeJeu[5][30]=' ';
    grilleDeJeu[5][31]=' ';

    grilleDeJeu[6][0]=' ';
    grilleDeJeu[6][1]=54;
    grilleDeJeu[6][2]=' ';
    grilleDeJeu[6][3]=' ';
    grilleDeJeu[6][4]=32;
    grilleDeJeu[6][5]='%';
    grilleDeJeu[6][6]=' ';
    grilleDeJeu[6][7]=' ';
    grilleDeJeu[6][8]=' ';
    grilleDeJeu[6][9]=' ';
    grilleDeJeu[6][10]=' ';
    grilleDeJeu[6][11]=' ';
    grilleDeJeu[6][12]=32;
    grilleDeJeu[6][13]='%';
    grilleDeJeu[6][14]=' ';
    grilleDeJeu[6][15]=' ';
    grilleDeJeu[6][16]=' ';
    grilleDeJeu[6][17]=' ';
    grilleDeJeu[6][18]=' ';
    grilleDeJeu[6][19]=' ';
    grilleDeJeu[6][20]=32;
    grilleDeJeu[6][21]='%';
    grilleDeJeu[6][22]=' ';
    grilleDeJeu[6][23]=' ';
    grilleDeJeu[6][24]=' ';
    grilleDeJeu[6][25]=' ';
    grilleDeJeu[6][26]=' ';
    grilleDeJeu[6][27]=' ';
    grilleDeJeu[6][28]=32;
    grilleDeJeu[6][29]='%';
    grilleDeJeu[6][30]=' ';
    grilleDeJeu[6][31]=' ';

    grilleDeJeu[7][0]=' ';
    grilleDeJeu[7][1]=55;
    grilleDeJeu[7][2]=' ';
    grilleDeJeu[7][3]=' ';
    grilleDeJeu[7][4]=' ';
    grilleDeJeu[7][5]=' ';
    grilleDeJeu[7][6]=32;
    grilleDeJeu[7][7]='&';
    grilleDeJeu[7][8]=' ';
    grilleDeJeu[7][9]=' ';
    grilleDeJeu[7][10]=' ';
    grilleDeJeu[7][11]=' ';
    grilleDeJeu[7][12]=' ';
    grilleDeJeu[7][13]=' ';
    grilleDeJeu[7][14]=32;
    grilleDeJeu[7][15]='&';
    grilleDeJeu[7][16]=' ';
    grilleDeJeu[7][17]=' ';
    grilleDeJeu[7][18]=32;
    grilleDeJeu[7][19]='&';
    grilleDeJeu[7][20]=' ';
    grilleDeJeu[7][21]=' ';
    grilleDeJeu[7][22]=' ';
    grilleDeJeu[7][23]=' ';
    grilleDeJeu[7][24]=' ';
    grilleDeJeu[7][25]=' ';
    grilleDeJeu[7][26]=32;
    grilleDeJeu[7][27]='&';
    grilleDeJeu[7][28]=' ';
    grilleDeJeu[7][29]=' ';
    grilleDeJeu[7][30]=' ';
    grilleDeJeu[7][31]=' ';

    grilleDeJeu[8][0]=' ';
    grilleDeJeu[8][1]=56;
    grilleDeJeu[8][2]=32;
    grilleDeJeu[8][3]=36;
    grilleDeJeu[8][4]=' ';
    grilleDeJeu[8][5]=' ';
    grilleDeJeu[8][6]=' ';
    grilleDeJeu[8][7]=' ';
    grilleDeJeu[8][8]=32;
    grilleDeJeu[8][9]='&';
    grilleDeJeu[8][10]=' ';
    grilleDeJeu[8][11]=' ';
    grilleDeJeu[8][12]=' ';
    grilleDeJeu[8][13]=' ';
    grilleDeJeu[8][14]=' ';
    grilleDeJeu[8][15]=' ';
    grilleDeJeu[8][16]=32;
    grilleDeJeu[8][17]='#';
    grilleDeJeu[8][18]=' ';
    grilleDeJeu[8][19]=' ';;
    grilleDeJeu[8][20]=' ';
    grilleDeJeu[8][21]=' ';
    grilleDeJeu[8][22]=' ';
    grilleDeJeu[8][23]=' ';
    grilleDeJeu[8][24]=32;
    grilleDeJeu[8][25]='&';
    grilleDeJeu[8][26]=' ';
    grilleDeJeu[8][27]=' ';
    grilleDeJeu[8][28]=' ';
    grilleDeJeu[8][29]=' ';
    grilleDeJeu[8][30]=32;
    grilleDeJeu[8][31]=36;

    grilleDeJeu[9][0]=' ';
    grilleDeJeu[9][1]=57;
    grilleDeJeu[9][2]=' ';
    grilleDeJeu[9][3]=' ';
    grilleDeJeu[9][4]=' ';
    grilleDeJeu[9][5]=' ';
    grilleDeJeu[9][6]=32;
    grilleDeJeu[9][7]='&';
    grilleDeJeu[9][8]=' ';
    grilleDeJeu[9][9]=' ';
    grilleDeJeu[9][10]=' ';
    grilleDeJeu[9][11]=' ';
    grilleDeJeu[9][12]=' ';
    grilleDeJeu[9][13]=' ';
    grilleDeJeu[9][14]=32;
    grilleDeJeu[9][15]='&';
    grilleDeJeu[9][16]=' ';
    grilleDeJeu[9][17]=' ';
    grilleDeJeu[9][18]=32;
    grilleDeJeu[9][19]='&';
    grilleDeJeu[9][20]=' ';
    grilleDeJeu[9][21]=' ';
    grilleDeJeu[9][22]=' ';
    grilleDeJeu[9][23]=' ';
    grilleDeJeu[9][24]=' ';
    grilleDeJeu[9][25]=' ';
    grilleDeJeu[9][26]=32;
    grilleDeJeu[9][27]='&';
    grilleDeJeu[9][28]=' ';
    grilleDeJeu[9][29]=' ';
    grilleDeJeu[9][30]=' ';
    grilleDeJeu[9][31]=' ';

    grilleDeJeu[10][0]=49;
    grilleDeJeu[10][1]=48;
    grilleDeJeu[10][2]=' ';
    grilleDeJeu[10][3]=' ';
    grilleDeJeu[10][4]=32;
    grilleDeJeu[10][5]='%';
    grilleDeJeu[10][6]=' ';
    grilleDeJeu[10][7]=' ';
    grilleDeJeu[10][8]=' ';
    grilleDeJeu[10][9]=' ';
    grilleDeJeu[10][10]=' ';
    grilleDeJeu[10][11]=' ';
    grilleDeJeu[10][12]=32;
    grilleDeJeu[10][13]='%';
    grilleDeJeu[10][14]=' ';
    grilleDeJeu[10][15]=' ';
    grilleDeJeu[10][16]=' ';
    grilleDeJeu[10][17]=' ';
    grilleDeJeu[10][18]=' ';
    grilleDeJeu[10][19]=' ';
    grilleDeJeu[10][20]=32;
    grilleDeJeu[10][21]='%';
    grilleDeJeu[10][22]=' ';
    grilleDeJeu[10][23]=' ';
    grilleDeJeu[10][24]=' ';
    grilleDeJeu[10][25]=' ';
    grilleDeJeu[10][26]=' ';
    grilleDeJeu[10][27]=' ';
    grilleDeJeu[10][28]=32;
    grilleDeJeu[10][29]='%';
    grilleDeJeu[10][30]=' ';
    grilleDeJeu[10][31]=' ';

    grilleDeJeu[11][0]=49;
    grilleDeJeu[11][1]=49;
    grilleDeJeu[11][2]=' ';
    grilleDeJeu[11][3]=' ';
    grilleDeJeu[11][4]=' ';
    grilleDeJeu[11][5]=' ';
    grilleDeJeu[11][6]=' ';
    grilleDeJeu[11][7]=' ';
    grilleDeJeu[11][8]=' ';
    grilleDeJeu[11][9]=' ';
    grilleDeJeu[11][10]=32;
    grilleDeJeu[11][11]='@';
    grilleDeJeu[11][12]=' ';
    grilleDeJeu[11][13]=' ';
    grilleDeJeu[11][14]=' ';
    grilleDeJeu[11][15]=' ';
    grilleDeJeu[11][16]=' ';
    grilleDeJeu[11][17]=' ';
    grilleDeJeu[11][18]=' ';
    grilleDeJeu[11][19]=' ';
    grilleDeJeu[11][20]=' ';
    grilleDeJeu[11][21]=' ';
    grilleDeJeu[11][22]=32;
    grilleDeJeu[11][23]='@';
    grilleDeJeu[11][24]=' ';
    grilleDeJeu[11][25]=' ';
    grilleDeJeu[11][26]=' ';
    grilleDeJeu[11][27]=' ';
    grilleDeJeu[11][28]=' ';
    grilleDeJeu[11][29]=' ';
    grilleDeJeu[11][30]=' ';
    grilleDeJeu[11][31]=' ';

    grilleDeJeu[12][0]=49;
    grilleDeJeu[12][1]=50;
    grilleDeJeu[12][2]=32;
    grilleDeJeu[12][3]='&';
    grilleDeJeu[12][4]=' ';
    grilleDeJeu[12][5]=' ';
    grilleDeJeu[12][6]=' ';
    grilleDeJeu[12][7]=' ';
    grilleDeJeu[12][8]=32;
    grilleDeJeu[12][9]='@';
    grilleDeJeu[12][10]=' ';
    grilleDeJeu[12][11]=' ';
    grilleDeJeu[12][12]=' ';
    grilleDeJeu[12][13]=' ';
    grilleDeJeu[12][14]=' ';
    grilleDeJeu[12][15]=' ';
    grilleDeJeu[12][16]=32;
    grilleDeJeu[12][17]='&';
    grilleDeJeu[12][18]=' ';
    grilleDeJeu[12][19]=' ';
    grilleDeJeu[12][20]=' ';
    grilleDeJeu[12][21]=' ';
    grilleDeJeu[12][22]=' ';
    grilleDeJeu[12][23]=' ';
    grilleDeJeu[12][24]=32;
    grilleDeJeu[12][25]='@';
    grilleDeJeu[12][26]=' ';
    grilleDeJeu[12][27]=' ';
    grilleDeJeu[12][28]=' ';
    grilleDeJeu[12][29]=' ';
    grilleDeJeu[12][30]=32;
    grilleDeJeu[12][31]='&';

    grilleDeJeu[13][0]=49;
    grilleDeJeu[13][1]=51;
    grilleDeJeu[13][2]=' ';
    grilleDeJeu[13][3]=' ';
    grilleDeJeu[13][4]=' ';
    grilleDeJeu[13][5]=' ';
    grilleDeJeu[13][6]=32;
    grilleDeJeu[13][7]='@';
    grilleDeJeu[13][8]=' ';
    grilleDeJeu[13][9]=' ';
    grilleDeJeu[13][10]=' ';
    grilleDeJeu[13][11]=' ';
    grilleDeJeu[13][12]=' ';
    grilleDeJeu[13][13]=' ';
    grilleDeJeu[13][14]=32;
    grilleDeJeu[13][15]='&';
    grilleDeJeu[13][16]=' ';
    grilleDeJeu[13][17]=' ';
    grilleDeJeu[13][18]=32;
    grilleDeJeu[13][19]='&';
    grilleDeJeu[13][20]=' ';
    grilleDeJeu[13][21]=' ';
    grilleDeJeu[13][22]=' ';
    grilleDeJeu[13][23]=' ';
    grilleDeJeu[13][24]=' ';
    grilleDeJeu[13][25]=' ';
    grilleDeJeu[13][26]=32;
    grilleDeJeu[13][27]='@';
    grilleDeJeu[13][28]=' ';
    grilleDeJeu[13][29]=' ';
    grilleDeJeu[13][30]=' ';
    grilleDeJeu[13][31]=' ';

    grilleDeJeu[14][0]=49;
    grilleDeJeu[14][1]=52;
    grilleDeJeu[14][2]=' ';
    grilleDeJeu[14][3]=' ';
    grilleDeJeu[14][4]=32;
    grilleDeJeu[14][5]='@';
    grilleDeJeu[14][6]=' ';
    grilleDeJeu[14][7]=' ';
    grilleDeJeu[14][8]=' ';
    grilleDeJeu[14][9]=' ';
    grilleDeJeu[14][10]=' ';
    grilleDeJeu[14][11]=' ';
    grilleDeJeu[14][12]=32;
    grilleDeJeu[14][13]='%';
    grilleDeJeu[14][14]=' ';
    grilleDeJeu[14][15]=' ';
    grilleDeJeu[14][16]=' ';
    grilleDeJeu[14][17]=' ';
    grilleDeJeu[14][18]=' ';
    grilleDeJeu[14][19]=' ';
    grilleDeJeu[14][20]=32;
    grilleDeJeu[14][21]='%';
    grilleDeJeu[14][22]=' ';
    grilleDeJeu[14][23]=' ';
    grilleDeJeu[14][24]=' ';
    grilleDeJeu[14][25]=' ';
    grilleDeJeu[14][26]=' ';
    grilleDeJeu[14][27]=' ';
    grilleDeJeu[14][28]=32;
    grilleDeJeu[14][29]='@';
    grilleDeJeu[14][30]=' ';
    grilleDeJeu[14][31]=' ';

    grilleDeJeu[15][0]=49;
    grilleDeJeu[15][1]=53;
    grilleDeJeu[15][2]=32;
    grilleDeJeu[15][3]=36;
    grilleDeJeu[15][4]=' ';
    grilleDeJeu[15][5]=' ';
    grilleDeJeu[15][6]=' ';
    grilleDeJeu[15][7]=' ';
    grilleDeJeu[15][8]=32;
    grilleDeJeu[15][9]='&';
    grilleDeJeu[15][10]=' ';
    grilleDeJeu[15][11]=' ';
    grilleDeJeu[15][12]=' ';
    grilleDeJeu[15][13]=' ';
    grilleDeJeu[15][14]=' ';
    grilleDeJeu[15][15]=' ';
    grilleDeJeu[15][16]=32;
    grilleDeJeu[15][17]=36;
    grilleDeJeu[15][18]=' ';
    grilleDeJeu[15][19]=' ';
    grilleDeJeu[15][20]=' ';
    grilleDeJeu[15][21]=' ';
    grilleDeJeu[15][22]=' ';
    grilleDeJeu[15][23]=' ';
    grilleDeJeu[15][24]=32;
    grilleDeJeu[15][25]='&';
    grilleDeJeu[15][26]=' ';
    grilleDeJeu[15][27]=' ';
    grilleDeJeu[15][28]=' ';
    grilleDeJeu[15][29]=' ';
    grilleDeJeu[15][30]=32;
    grilleDeJeu[15][31]=36;
}

void afficher_grille()
{
    printf("\n\n");
    for (int i=0;i<16;i++)
    {
        for (int j=0;j<1;j++)
        {
            printf("%c",(grilleDeJeu[i][j]));
            for (int k=1;k<32;k++)
            {
                printf("%c ",(grilleDeJeu[i][k]));
            }
        }
        printf("\n");
    }
    printf("\n\n");
    printf("Legende:\n");
    printf("# : point de depart\n");
    printf("& : lettre double\n");
    printf("%c : lettre triple\n",'%');
    printf("@ : mot double\n");
    printf("$ : mot triple\n");
}

void place_une_lettre(char lettre, int ligne, int colonne)
{
    grilleDeJeu[ligne][colonne*2]=lettre;
    //TODO faire en sorte que le 1er mot plac� soit sur la case du milieu
}