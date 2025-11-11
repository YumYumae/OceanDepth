#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../include/joueur.h"
#include "../include/combat.h"
#include "../include/creatures.h"

int main() {
    srand(time(NULL)); // Pour générer des attaques aléatoires

    // --- Initialisation du joueur ---
    Plongeur joueur;
    initialiserJoueur(&joueur);
    afficherStatutJoueur(joueur);

    // --- Création d'une créature de test ---
    CreatureMarine requin = {1, "Requin-Tigre", 90, 90, 15, 25, 5, 3, "aucun", 1};

    printf("\n🌊 Une créature apparaît : %s !\n", requin.nom);

    // --- Lancer le combat ---
    demarrerCombat(&joueur, &requin);

    printf("\n🏁 Fin du test de combat.\n");
    afficherStatutJoueur(joueur);

    return 0;
}
