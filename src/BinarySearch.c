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
#include<conio.h>

int main(void) {

	int c, first, last, middle, n, search, array[100];
	int i, j, temp;

	printf("enter the number of the element.\n");
	scanf("%d", &n);

	// Input the number
	for(c = 0; c < n; ++c) {
		printf("input the %d number: ", c+1);
		scanf("%d", &array[c]);
		printf("\n");
	}

	printf("Enter the value to find\n");
	scanf("%d", &search);

	first = 0;
	last = n-1;

    // Use bubble sort to sort by from lower to high
    for (j = n-1; j > 0; j--) {
    	for (i = 0; i < j; i++) {
    		if (array[i] > array[i+1]) {
    			temp = array[i];
    			array[i] = array[i+1];
    			array[i+1] = temp;
    		}
    		printf("array[%d] = %d ", i, array[i]);
    	}
    	printf("\n");
    }

    printf("The array data afeter sorting is as following:\n");
    for (i = 0; i < n; i++) {
    	printf("array[%d] = %d ", i, array[i]);
    }

    printf("\n");

	// Binary search operation
	while(first <= last) {

		middle = (first + last)/2;

		if(array[middle] < search) {
			first =  middle + 1;
		}
		else if (array[middle] == search) {
			printf("The number %d in the %d position\n", search, middle+1);
			break;
		}
		else {
			last = middle - 1;
		}

	}

	printf("please press key to exit.\n");
	while(!kbhit());

	return 0;
}
