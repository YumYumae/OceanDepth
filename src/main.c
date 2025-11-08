#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "creatures/creatures.h"

int main() {
    srand(time(NULL));

    SeaMonster seaMonster[4];

    printf("╔═══════════════════════════════════════════════╗\n");
    printf("║            Welcome to OceanDepths!            ║\n");
    printf("╚═══════════════════════════════════════════════╝\n");

    int depths[] = {50, 150, 300};

    for (int d = 0; d < 3; d++) {
        printf("\n======================================");
        printf("\n>>> Depth: %dm <<<\n", depths[d]);
        printf("======================================\n");

        generateCreatures(seaMonster, depths[d]);

        for (int i = 0; i < 4; i++) {
            if (seaMonster[i].isAlive && seaMonster[i].id != -1) {
                displayCreature(seaMonster[i]);
            }
        }
    }

    return 0;
}
