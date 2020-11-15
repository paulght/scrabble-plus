#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Menu.h"

int main()
{
    printf("SCRABBLE");
    printf("\n\n");
    int reponse;
    do
    {
        reponse=menu();
        switch(reponse)
        {
        case 1:
            printf("\n");
            printf("1 - Lancer une nouvelle partie\n");
            nouvelle_partie();
            break;
        case 2:
            printf("\n");
            printf("2 - Reprendre une partie sauvegardee\n");
            printf("Cette partie du jeu n'a pas encore ete developpe!!!\n");
            //TODO sauvegarder une partie et la continuer
            break;
        case 3:
            printf("\n");
            printf("3 - Afficher l'aide\n");
            break;
        case 4:
            printf("\n");
            printf("4 - Afficher les scores des joueurs\n");
            printf("Cette partie du jeu n'a pas encore ete developpe!!!\n");
            //TODO calculer et afficher les scores des joueurs
            break;
        case 5:
            printf("\n");
            printf("5 - Quitter le jeu\n");
            break;
        }
    } while ((reponse!=2) && (reponse!=4) && (reponse!=5));
    return 0;
}
