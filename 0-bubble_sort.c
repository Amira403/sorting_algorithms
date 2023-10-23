#include <stdio.h>
#include "sort.h"
/**
 * bubble_sort - sort array lements from min to max value
 * @array: array
 * @size: array size
 */

void bubble_sort(int *array, size_t size);
void swap (int *b , int *c)
	{
	int temp = *b ;
	*b  = *c ;
	*c = temp;
	}
/**
 * main - main function 
 *
 * Return: Always 0
 */
int main (void)
{

	bubble_sort(arr , size );
}
void bubble_sort(int *array , size_t size){


	for (int i = 0 ; i < size ; i++)
	{
	for ( int j = 0; j < ( size  -1 ); j++)
	{
	if (array[j] > array [j + 1])
	{
	swap(&array[j], &array[j+1]);
	for (size_t k = 0; k < size; k++) {
	if (k > 0){
	printf(", ");
	}
	printf("%d", array[k]);
	}
	printf("\n");
	}
	}
	}
}
