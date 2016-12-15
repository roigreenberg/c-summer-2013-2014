/*
 * generalSwap.c
 *
 *  Created on: Aug 11, 2014
 *      Author: roigreenberg
 */

/**
 * A swap functions that works with everything
 * Need to get also the size of the elements that are being swapped
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef void* Element;

void generalSwap(Element a, Element b, int sizeOfElement);

int main()
{

	double a = 4., b = 5.;
	int c = 44, d = 55;
	generalSwap(&a, &b, sizeof(double));
	generalSwap(&c, &d, sizeof(int));
	printf("a=%f b=%f\n", a, b); /* should print a=5 b=4 */
	printf("c=%d d=%d\n", c, d); /* should print c=55 d=44 */
	return 0;
}

/**
 * The swap function
 * Swap the two given elements of the given size
 */
void generalSwap(Element a, Element b, int sizeOfElement)
{
	void* temp = malloc(sizeOfElement);
	memcpy(temp, a, sizeOfElement);
	memcpy(a, b, sizeOfElement);
	memcpy(b, temp, sizeOfElement);
	free(temp);
}
