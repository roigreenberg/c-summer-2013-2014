//-------------------------------------------------------------------------------------------------
//								Ex2 - Draw2DCharArray
// General	:	Initialize the given char array to be filled with space and print it to the screen
// Input 	:	arr - 2D char array
// Process	:	run over the array and fill/print
// Output	:	print of the array
//
//-------------------------------------------------------------------------------------------------
#include "Draw2DCharArray.h"
#include <stdio.h>

#define WHITE_SPACE ' '

/**
 * Initialize the given char array to be filled with space (' ') characters.
 */
void initializeArray(char arr[ROWS][COLS])
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = WHITE_SPACE;
		}
	}
}

/**
 * Draw the char array on the screen.
 * After each row go down a line ('\n').
 * Stop drawing when a nul character ('\0') is met.
 */
void drawArray(char arr[ROWS][COLS])
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] == '\0')
			{
				return;
			}
			printf("%c", arr[i][j]);
		}
		printf("\n");
	}
}

