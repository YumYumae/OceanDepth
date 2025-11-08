#ifndef CREATURES_H
#define CREATURES_H

typedef struct {
    int id;
    char name[30];
    int maxHp;
    int currentHp;
    int minDamage;
    int maxDamage;
    int defense;
    int speed;
    char specialEffect[20];
    int isAlive;
} SeaMonster;

void generateCreatures(SeaMonster seaMonster[4], int depth);

void displayCreature(SeaMonster creature);

#endif