#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "ics2305-assign1-support.h"

int main(int argc, char *argv[])
{

    // Local variables
	// NOTE: this is where you will want to add some new variables
    float f_array[20];
    int i, m_array[25], i_array[20];




	// Step #1 - read in the float numbers to process
	printf("Enter 20 Float Values: \n");
	for (i=0; i<20; i++){
	scanf("%f", &f_array[i]);}



	// Step #2 - convert the input values
	float_display_array(f_array);
    printf("\n");
	integer_display_array(f_array,i_array);
    printf("\n");
	printf("The floating point array has  %d  even numbers,and the integer array has  %d  even numbers.",float_evens(f_array),integer_evens(i_array));
    printf("\n");



 return 0;
}
