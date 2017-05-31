#include <stdio.h>
#include <stdlib.h>

/*
 * Include the function prototypes of all those functions implemented in image_processing.c.
 * Do not remove or modify them in any way.
 */

void remove_red();
void convert_to_black_and_white();
void instagram_square();

int main(int argc, char *argv[]) {
	/* Task 1 needs to be completed here: Make sure that the command line arguments are correct. In case an error exists,
	* print the error message and terminate the program. Otherwise, invoke the corresponding
	* image processing function. */
	/* If there are the wrong number of arguments, print error message and terminate program */
	if(argc != 2) {
		printf("Error: Expecting one command-line argument, which needs to be either 1, 2, or 3.");
		return 1;
	/* Else, keep going */
	} else {
		/* Get the option provided in the arguments and store it into an integer variable */
		int option = (int) strtol(argv[1], NULL, 10);

		/* If the option is not one of either 1, 2 or 3, print error message and terminate program */
		if(!(option == 1 || option == 2 || option == 3)) {
			printf("Error: Expecting one command-line argument, which needs to be either 1, 2, or 3.");
			return 1;
		}

		/* Run corresponding function depending on the option provided in command prompt arguments */
		/* 1 for red-removal, 2 for black and white conversion or 3 for the instagram function */
		if(option == 1) {
			remove_red();
		} else if(option == 2) {
			convert_to_black_and_white();
		} else {
			instagram_square();
		}
	}
	return 0;
}
