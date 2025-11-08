#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "creatures.h"

void generateCreatures(SeaMonster seaMonster[4], int depth) {
    // Generates creatures based on depth
    int numCreatures = 1 + (rand() % 4);

    int minHp, maxHp;
    int creatureType;

    for (int i = 0; i < 4; i++) {
        if (i < numCreatures) {
            seaMonster[i].id = i + 1;
            seaMonster[i].isAlive = 1;

            // The deeper it is, the more dangerous creatures appear
            if (depth < 100) {
                creatureType = rand() % 3 + 2;
            } else if (depth < 200) {
                creatureType = rand() % 4 + 1;
            } else {
                creatureType = rand() % 5;
            }

            switch(creatureType) {
                case 0:
                    strcpy(seaMonster[i].name, "Kraken");
                    minHp = 120;
                    maxHp = 180;
                    seaMonster[i].maxHp = minHp + rand() % (maxHp - minHp + 1);
                    seaMonster[i].currentHp = seaMonster[i].maxHp;
                    seaMonster[i].minDamage = 25;
                    seaMonster[i].maxDamage = 40;
                    seaMonster[i].defense = 15;
                    seaMonster[i].speed = 3;
                    strcpy(seaMonster[i].specialEffect, "none");
                    break;

                case 1:
                    strcpy(seaMonster[i].name, "Shark");
                    minHp = 60;
                    maxHp = 100;
                    seaMonster[i].maxHp = minHp + rand() % (maxHp - minHp + 1);
                    seaMonster[i].currentHp = seaMonster[i].maxHp;
                    seaMonster[i].minDamage = 15;
                    seaMonster[i].maxDamage = 25;
                    seaMonster[i].defense = 8;
                    seaMonster[i].speed = 7;
                    strcpy(seaMonster[i].specialEffect, "none");
                    break;

                case 2:
                    strcpy(seaMonster[i].name, "Jellyfish");
                    minHp = 20;
                    maxHp = 40;
                    seaMonster[i].maxHp = minHp + rand() % (maxHp - minHp + 1);
                    seaMonster[i].currentHp = seaMonster[i].maxHp;
                    seaMonster[i].minDamage = 8;
                    seaMonster[i].maxDamage = 15;
                    seaMonster[i].defense = 3;
                    seaMonster[i].speed = 4;
                    strcpy(seaMonster[i].specialEffect, "Paralysis");
                    break;

                case 3:
                    strcpy(seaMonster[i].name, "Swordfish");
                    minHp = 70;
                    maxHp = 90;
                    seaMonster[i].maxHp = minHp + rand() % (maxHp - minHp + 1);
                    seaMonster[i].currentHp = seaMonster[i].maxHp;
                    seaMonster[i].minDamage = 18;
                    seaMonster[i].maxDamage = 28;
                    seaMonster[i].defense = 10;
                    seaMonster[i].speed = 8;
                    strcpy(seaMonster[i].specialEffect, "none");
                    break;

                case 4:
                    strcpy(seaMonster[i].name, "Giant-Crab");
                    minHp = 80;
                    maxHp = 120;
                    seaMonster[i].maxHp = minHp + rand() % (maxHp - minHp + 1);
                    seaMonster[i].currentHp = seaMonster[i].maxHp;
                    seaMonster[i].minDamage = 12;
                    seaMonster[i].maxDamage = 20;
                    seaMonster[i].defense = 20;
                    seaMonster[i].speed = 2;
                    strcpy(seaMonster[i].specialEffect, "none");
                    break;
            }
        } else {
            seaMonster[i].id = -1;
            seaMonster[i].isAlive = 0;
            strcpy(seaMonster[i].name, "");
            seaMonster[i].maxHp = 0;
            seaMonster[i].currentHp = 0;
            seaMonster[i].minDamage = 0;
            seaMonster[i].maxDamage = 0;
            seaMonster[i].defense = 0;
            seaMonster[i].speed = 0;
            strcpy(seaMonster[i].specialEffect, "");
        }
    }
}

void displayCreature(SeaMonster creature) {
    if (creature.isAlive && creature.id != -1) {
        printf("\n=== %s ===\n", creature.name);
        printf("HP: %d/%d\n", creature.currentHp, creature.maxHp);
        printf("Attack: %d-%d\n", creature.minDamage, creature.maxDamage);
        printf("Defense: %d\n", creature.defense);
        printf("Speed: %d\n", creature.speed);
        if (strcmp(creature.specialEffect, "none") != 0) {
            printf("Special: %s\n", creature.specialEffect);
        }
    }
}