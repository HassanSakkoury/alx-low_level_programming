#include "main.h"
#include <stdio.h>

/**
 * main- check the code
 * Return: return0
 */
void swap_int(int *a, int *b);
{
	int change;
	change = *a;
	*a = *b;
	*b = change;
}	
