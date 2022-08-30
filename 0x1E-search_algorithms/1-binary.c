#include "search_algos.h"
/**
* binary_search - searches for a value in a sorted array of integers
* using the Binary search algorithm
*
* @array: pointer to the first element of the array to search in
* @size: number of elements in array
* @value: value to search for
*
* Return: index of value or (-1) if value does not exist
*/
int binary_search(int *array, size_t size, int value)
{
    size_t beg_index, end_index, mid_index;

    if (size > 0)
    {
        beg_index = 0;
        end_index = size - 1;
        print_array(array, beg_index, end_index);
        while (beg_index <= end_index)
        {
            mid_index = (beg_index + end_index) / 2;
            if (array[mid_index] < value)
            {
                beg_index = mid_index + 1;
            }
            else if (array[mid_index] > value)
            {
                end_index = mid_index - 1;
            }
            else
            {
                return (mid_index);
            }
            if (beg_index <= end_index)
            {
                print_array(array, beg_index, end_index);
            }
        }
    }
    return (-1);
}

/**
* print_array - print the current part of the array being searched
*
* @array: pointer to the first element of the array
* @start: the first element of the array to print
* @end: the last element of the array to print
*/

void print_array(int *array, size_t start, size_t end)
{
    printf("Searching in array: %d", array[start]);
    start++;
    while (start <= end)
    {
        printf(", %d", array[start]);
        start++;
    }
    printf("\n");
}