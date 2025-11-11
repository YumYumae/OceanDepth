#include <stdio.h>
#include "../include/joueur.h"
#include "../include/creatures.h"

void initialiserJoueur(Plongeur *p) {
    p->pv_max = 100;
    p->pv = p->pv_max;
    p->oxygene_max = 100;
    p->oxygene = p->oxygene_max;
    p->fatigue = 0;
    p->perles = 0;
}


void afficherStatutJoueur(Plongeur p) {
    printf("\n===== STATUT DU PLONGEUR =====\n");
    printf("Vie: %d/%d\n", p.pv, p.pv_max);
    printf("Oxygène: %d/%d\n", p.oxygene, p.oxygene_max);
    printf("Fatigue: %d/5\n", p.fatigue);
    printf("Perles: %d\n", p.perles);
}


void attaquerCreature(Plongeur *p, CreatureMarine *c) {
    int degats = 15 - c->defense;
    if (degats < 1) degats = 1;

    c->points_de_vie_actuels -= degats;
    if (c->points_de_vie_actuels < 0)
        c->points_de_vie_actuels = 0;

    printf("\n💥 Vous attaquez %s et lui infligez %d dégâts!\n", c->nom, degats);
    p->oxygene -= 3;
    p->fatigue += 1;
}
