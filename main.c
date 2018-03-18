#include <stdio.h>
#include <stdlib.h>
#include "score.h"

int main() {
    /* create an array of scores */
   struct Score scores[10];

    /* put in some test data */
    score_set(&scores[0], "IAN", 750);
    score_set(&scores[1], "BOB", 1200);
    score_set(&scores[2], "ADA", 3500);
    score_set(&scores[3], "SUE", 900);
    score_set(&scores[4], "EVA", 500);
    score_set(&scores[5], "BEN", 1500);
    score_set(&scores[6], "ROY", 3000);
    score_set(&scores[7], "KIM", 1250);
    score_set(&scores[8], "VIC", 2500);
    score_set(&scores[9], "DAN", 1800);

    /* sort them using the compare function above */
    qsort(scores, 10, sizeof(struct Score), 
        (int (*) (const void*, const void*)) &score_compare);

    /* display them */
    int i;
    for (i = 0; i < 10; i++) {
        score_print(&scores[i]);
    }

    return 0;
}
