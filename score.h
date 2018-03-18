#include <stdio.h>

struct Score {
char name [4];
int score_number;
};

void score_set(struct Score* x, char y [4], int z);
void score_print(struct Score* x);
int score_compare(struct Score* one, struct Score* two);
