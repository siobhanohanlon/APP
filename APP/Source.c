#include<stdio.h>
#include<stdlib.h>

void main()
{
	int** array2D;
	int rows, cols;

	//Ask User to enter Rows&Cols amount
	printf("Please enter the number of rows and cols in the 2D Array");
	scanf("%d %d", &rows, &cols);

	//Set Array
	array2D = (int**)malloc(rows * sizeof(int*));
}