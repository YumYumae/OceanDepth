#include <stdio.h>
#include "../include/combat.h"
#include "../include/joueur.h"
#include "../include/creatures.h"

void demarrerCombat(Plongeur *p, CreatureMarine *c) {
    printf("\n⚔️  Début du combat contre %s !\n", c->nom);

    while (p->pv > 0 && c->points_de_vie_actuels > 0) {
        attaquerCreature(p, c);

        if (c->points_de_vie_actuels <= 0) {
            printf("\n🏆 Vous avez vaincu %s !\n", c->nom);
            p->perles += 10;
            break;
        }


        int degats = c->attaque_minimale + (rand() % (c->attaque_maximale - c->attaque_minimale + 1));
        p->pv -= degats;
        if (p->pv < 0) p->pv = 0;

        printf("😱 %s vous attaque et inflige %d dégâts !\n", c->nom, degats);
        afficherStatutJoueur(*p);

        if (p->pv <= 0) {
            printf("\n💀 Vous êtes mort dans les profondeurs...\n");
        }
    }
}
