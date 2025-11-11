#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../include/joueur.h"
#include "../include/combat.h"
#include "../include/creatures.h"

int main() {
    srand(time(NULL));

    Plongeur joueur;
    initialiserJoueur(&joueur);
    afficherStatutJoueur(joueur);

    CreatureMarine requin = {1, "Requin-Tigre", 90, 90, 15, 25, 5, 3, "aucun", 1};

    printf("\n🌊 Une créature apparaît : %s !\n", requin.nom);

    demarrerCombat(&joueur, &requin);

    printf("\n🏁 Fin du test de combat.\n");
    afficherStatutJoueur(joueur);

    return 0;
}
