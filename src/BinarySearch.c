/*
 ============================================================================
 Name        : BinarySearch.c
 Author      : doremi
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void) {

	int c, first, last, middle, n, search, array[100];

	printf("enter the number of the element.\n");
	scanf("%d", &n);
	printf("enter the number: %d", n);

	for(c = 0; c < n; ++c) {
		scanf("%d", &array[c]);
	}

	printf("Enter the value to find\n");
	scanf("%d", &search);

	first = 0;
	last = n-1;
	middle = (first + last)/2;

	while(first < last) {

		if(array[middle] < search) {
			first =  middle + 1;
		}
		else if(array[middle] == search) {
			printf("%d found at location %d\n", search, middle+1);
			break;
		}
		else {
			last = middle - 1;
		}

		middle = (first + last)/2;
	}

	if(first > last) {
		printf("not found\n");
	}

	while(1) {

		if(kbhit()) {
			break;
		}

	}


//	puts("!!!Hello Doremi!!!"); /* prints !!!Hello Doremi!!! */
	return EXIT_SUCCESS;
}
