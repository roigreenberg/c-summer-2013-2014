//-----------------------------------------------------------------------------
//								Ex1
// General	:	find if there is an integer number -x- at a given range of
// 				which F(x)=G(x)
// Input 	:	2 monotonous functions, Range and Epsilon. may or may not given
//				in "Definitions"
// Process	:	The search is like a binary-search using the fact F and G are
//				monotonous.
// 				The complexity of binary-search is log(n) when n=the RANGE
// Output	:	The number x and the value F(x) iff exists.
//
//-----------------------------------------------------------------------------

#include <stdio.h>
#include "Definitions.h"

// Macros and const definitions if not include in "Definitions.h"
#ifndef F
	#define F(x) (x + 0.5)
#endif

#ifndef G
	#define G(x) (10.5 - x)
#endif

#ifndef EPSILON
	#define EPSILON 0.0001
#endif

#ifndef RANGE
	#define RANGE 1000
#endif

#define HALF 2
/**
 *-----------------------------------------------------------------------------
 *
 * General		:	find if there is an integer number -x- at a given range of
 * 					which F(x)=G(x)
 * Paraneters	:
 * Return value	:	the number x
 *
 *-----------------------------------------------------------------------------
 */
int findEq()
{
	int max = RANGE;
	int min = 0;
	int cur;
	int j = RANGE;

	for( ; j > 0 ; j = j / 2)
	{
		cur = (max + min) / HALF;


		if ((G(cur) - F(cur)) > EPSILON)
		{
			min = cur;
		}
		else if ((G(cur) - F(cur)) < -EPSILON)
		{
			max = cur;
		}
		else
		{
			printf("%d\n%.3f\n", cur, F(cur));
			return cur;
		}
	}

	if (-EPSILON < (G(max) - F(max)) && (G(max) - F(max)) < EPSILON)
	{
		printf("%d\n%.3f\n", max, F(max));
		return cur;
	}
	return -1;
}
/**
 * The main function
 */
int main()
{
	findEq();
	return 0;
}
