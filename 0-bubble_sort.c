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
int main (void){

	int arr[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
	for ( int w = 0 ; w < 10 ; w++){

	printf ("%d" ,arr[w])
	if (w != 9){
	 printf(", ");
	}
	}
	printf("\n\n");
	size_t size = sizeof(arr)/sizeof(arr[0]);
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
	printf("\n");
	for ( int i = 0; i < size  ; i++ ){
	if (i > 0 ){
	printf(", ");
	}
	printf ("%d" , array[i]);
	}
	printf("\n");
	return (0);
}
