#include "logic.h"

int find_sum_of_main_elements(int matrix[DEFAULT_SIZE][DEFAULT_SIZE], int n) {
	int sum = 0;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i == j) {
				sum += matrix[i][j];
			}
		}
	}

	return sum;
}

int find_sum_of_addition_elements(int matrix[DEFAULT_SIZE][DEFAULT_SIZE], int n) {
	int sum = 0;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (j == n - 1 - i) {
				sum += matrix[i][j];
			}
		}
	}

	return sum;
}
