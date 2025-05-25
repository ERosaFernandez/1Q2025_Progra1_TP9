/*
 * Puertos.h
 *
 *  Created on: May 24, 2025
 *      Author: enzorofer
 */

#ifndef EJERCICIO5_PUERTOS_H_
#define EJERCICIO5_PUERTOS_H_

#include <stdint.h>

typedef struct {
	uint8_t b0		:1	;
	uint8_t b1		:1	;
	uint8_t b2		:1	;
	uint8_t b3		:1	;
	uint8_t b4		:1	;
	uint8_t b5		:1	;
	uint8_t b6		:1	;
	uint8_t b7		:1	;
} Puerto;

typedef struct {
	Puerto * B;
	Puerto * A;
} Puerto_D;

#endif /* EJERCICIO5_PUERTOS_H_ */
