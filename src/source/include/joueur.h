#ifndef JOUEUR_H
#define JOUEUR_H

// Structure du plongeur (joueur)
typedef struct {
    int pv;
    int pv_max;
    int oxygene;
    int oxygene_max;
    int fatigue;  // de 0 à 5
    int perles;   // monnaie du jeu
} Plongeur;

// Fonctions principales
void initialiserJoueur(Plongeur *p);
void afficherStatutJoueur(Plongeur p);
void attaquerCreature(Plongeur *p, struct CreatureMarine *c);

#endif
