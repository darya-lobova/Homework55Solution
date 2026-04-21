#include "logic.h"

int find_max_element(int matrix[DEFAULT_SIZE][DEFAULT_SIZE], int n) {
	int max = 0;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (matrix[i][j] > max) {
				max = matrix[i][j];
			}
		}
	}

	return max;
}

int find_min_element(int matrix[DEFAULT_SIZE][DEFAULT_SIZE], int n) {
	int min = find_max_element(matrix, n);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (matrix[i][j] < min) {
				min = matrix[i][j];
			}
		}

	}

	return min;

}