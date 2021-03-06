/*
 ============================================================================
 Name        : find_largest.c
 Author      : 
 Version     :
 Copyright   : Copyright (C) Y'all
 Description : demonstrates the find-largest-integer algorithm
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "my_func.h"

int main(void)
{
	int s[]={22,32,9,0,1,2,45,668,932,26,5,3,333,4,7}; // our data array
	size_t N=sizeof(s)/sizeof(int); // number of elements in s

	printf("The largest integer in the array is: %d\n", find_largest_int(s, N));
	printf("find_largest program complete.\n\n");

	return EXIT_SUCCESS;
}
