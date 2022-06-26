#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "Global_include.h"

int main(){
    mauvais_choix_principal:
    affiche_Fanorona();
    printf("\n\n\n\t\t Veuillez choisir un nombre pour continuer :  ");
    int choix ;
    scanf("%d",&choix);

    switch(choix){
    case 1:Play();
        break;
    case 2:Rols();
        break;
    case 3:Help();
        break;
    case 4:Exit();
        break;
    default:
        system("cls");
        goto mauvais_choix_principal ;

    }
    return 0;

}
