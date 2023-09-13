#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - Linear search of array
 * array: Is the given array
 * size: size of an array
 * value: value which we look for
 * Return: value or -1
 */

int linear_search(int *array, size_t size, int value){

	if(array != NULL){
		size_t i;
		for(i = 0; i < size; i++)
			if(array[i] == value)
				return (value);
		return (-1);
	
	}
return (-1);
}
