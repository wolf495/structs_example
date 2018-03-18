#include <stdio.h>
#include "score.h"	
#include <string.h>
void score_set(struct Score* x,char y[4],int z){
	strcpy(x->name,y);
	x->score_number=z;
}

void score_print(struct Score* x){
	printf("%s %d\n",x->name,x->score_number);
}

int score_compare(struct Score* one, struct Score* two){
if(one->score_number < two->score_number){return 1;}
else if(one->score_number > two->score_number){return -1;}
else{return 0;}
}

