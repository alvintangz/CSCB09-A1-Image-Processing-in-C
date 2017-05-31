#include <stdio.h>

/*
 * Read an image from the standard input and set the red value of each pixel to
 * zero.
 */
void remove_red()
{
	/* Store the information in the image header */
	char mag_num[3];
	int col, row, max_colr; 
	scanf("%s %d %d %d", &mag_num, &col, &row, &max_colr);

	/* Output all information in the image header */
	printf("%s\n%d %d\n%d\n", mag_num, col, row, max_colr);

	/* Store the values used in future loops */
	int at_col, at_row;
	/* Store the values that will hold the RGB values of one colour at a given time */
	int current_red, current_green, current_blue;

	/* Loop through each column */
	for(at_col = 1; at_col <= col; at_col++) {
		/* Loop through each row */
		for(at_row = 1; at_row <= row; at_row++) {
			/* Get the current RGB value at pixel at_col * at_row. */
			scanf("%d %d %d", &current_red, &current_green, &current_blue);
			/* As red is removed, set the red to zero. */
			current_red = 0;
			/* Output the new RGB value at pixel at_col * at_row with the red removed.
			 * Make sure each pixel colour has its own line to maintain PPM standards.
			 */
			printf("%d %d %d\n", current_red, current_green, current_blue);
		}
	}
}

/*
 * Read an image from the standard input and convert it from colour to black and white.
 */
void convert_to_black_and_white()
{
	/* Store the information in the image header */
	char mag_num[3];
	int col, row, max_colr; 
	scanf("%s %d %d %d", &mag_num, &col, &row, &max_colr);

	/* Output all information in the image header */
	printf("%s\n%d %d\n%d\n", mag_num, col, row, max_colr);

	/* Store the values used in future loops */
	int at_col, at_row;
	/* Store the values that will hold the RGB values of one colour at a given time */
	int current_red, current_green, current_blue;
	/* Store the average of a colour's red, green and blue values */
	int average;

	/* Loop through each column */
	for(at_col = 1; at_col <= col; at_col++) {
		/* Loop through each row */
		for(at_row = 1; at_row <= row; at_row++) {
			/* Get the current RGB value at pixel at_col * at_row. */
			scanf("%d %d %d", &current_red, &current_green, &current_blue);
			/* Gets the average of three numbers */
			average = (current_red + current_green + current_blue) / 3;
			/* Output the new RGB value at pixel at_col * at_row with R, G, and B as
			 * the average to make it a back and white photo.
			 * Make sure each pixel colour has its own line to maintain PPM standards.
			 */
			printf("%d %d %d\n", average, average, average);
		}
	}
}

/*
 * Read an image from the standard input and convert it to a square image.
 */
void instagram_square()
{
	/* Store the information in the image header */
	char mag_num[3];
	int col, row, max_colr; 
	scanf("%s %d %d %d", &mag_num, &col, &row, &max_colr);

	/* Finds the smallest of row and col, then sets square_dem to it */
	int square_dim;
	if(col > row) {
		square_dim = row;
	} else {
		square_dim = col;
	}

	/* Output all information in the image header except change the col and row be
	 * the smallest of col or row.
	 */
	printf("%s\n%d %d\n%d\n", mag_num, square_dim, square_dim, max_colr);

	/* Store the values used in future loops */
	int at_col, at_row;
	/* Store the values that will hold the RGB values of one colour at a given time */
	int current_red, current_green, current_blue;

	/* Loop through each row */
	for(at_row = 1; at_row <= row; at_row++) {
		/* Loop through each column */
		for(at_col = 1; at_col <= col; at_col++) {
			/* Get the current RGB value at pixel at_col * at_row. */
			scanf("%d %d %d", &current_red, &current_green, &current_blue);
			/* Only print when at_row and at_column are less than square_dim to ensure
			 * the output picture is a square one.
			 */
			if(at_row <= square_dim && at_col <= square_dim) {
				/* Output the RGB value at pixel at_col * at_row.
			 	* Make sure each pixel colour has its own line to maintain
			 	* PPM standards.
			 	*/
				printf("%d %d %d\n", current_red, current_green, current_blue);
			}
		}
	}
}

