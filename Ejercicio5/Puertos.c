/*
 * Puertos.c
 *
 *  Created on: May 24, 2025
 *      Author: enzorofer
 */
#include <stdio.h>
#include "Puertos.h"

static Puerto A;
static Puerto B;
static Puerto_D D = {&B, &A};

void printall (){
	for (int i = 0; i < 8; i ++){
		printf ("%d", A[i]);
	}
	printf ("\n");
	for (int i = 0; i < 8; i ++){
		printf ("%d", B[i]);
	}

}

