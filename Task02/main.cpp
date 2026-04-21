#include "logic.h"

int main() {

	int matrix[DEFAULT_SIZE][DEFAULT_SIZE];
	int n;

	cout << "Input size of square matrix: ";
	cin >> n;

	init(matrix, n, n, 0, 10);

	cout << "Matrix:\n";
	cout << convert_to_string(matrix, n, n) << endl;

	int main_sum = find_sum_of_main_elements(matrix, n);
	int addition_sum = find_sum_of_addition_elements(matrix, n);

	cout << "Sum of main elements: " << main_sum << endl;
	cout << "Sum of addition elements: " << addition_sum << endl;

	return 0;
}