//-------------------------------------------------------------------------------------------------
//								Ex2 - RadiusReader
// General	:	read the given file. each line contains a single unsigned integer
// Input 	:	file - the given file
// Process	:	read the file in 2 ways. all the file into vector or one number at a time.
// Output	:	numbers from the file
//
//-------------------------------------------------------------------------------------------------

#include "RadiusReader.h"
#include <stdio.h>

#define SUCC_READ 1

/**
 * Read a vector of unsigned ints from a given FILE
 * each line contains a single unsigned integer
 * @return number of lines read
 */
unsigned int readVector(FILE * file, unsigned int vec[MAX_DEPTH])
{
	unsigned int val;
	unsigned int floor = 0;

	while (readSingleUInt(file, &val) == SUCC_CODE)
	{
		vec[floor++] = val;
	}

	return floor;
}

/**
 * Read a single unsigned int from a given FILE
 * each line contains a single unsigned integer
 * @return SUCC_CODE iff successful, FAIL_CODE otherwise
 */
int readSingleUInt(FILE * file, unsigned int * val)
{
	if (fscanf(file, "%u", val) == SUCC_READ)
	{
		return SUCC_CODE;
	}
	return FAIL_CODE;
}


