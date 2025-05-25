/*
 * Main.c
 *
 *  Created on: May 24, 2025
 *      Author: enzorofer
 */
#include <stdio.h>
#include "Puertos.h"

int main (){
	maskOn (D, 27167);
	printf ("%d\n", (uint16_t) getValue (D));
	printf ("%d\n", (uint16_t) getValue (A));
	printf ("%d\n", (uint16_t) getValue (B));
	printall (D);
	printall (A);
	printall (B);
	bitSet(A,2);
	printf ("%d\n", (uint16_t) getValue (A));
	bitSet('C',3); //error a proposito
	bitToggle(A,1);
	bitSet(B,6);
	bitClr(B,5);
	printall (D);
	maskOff (D, 2153);
	printall (D);
	maskToggle(D, 33915);
	printall (D);

	return 0;
}
