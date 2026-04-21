#include "logic.h"

int main() {

	int matrix[DEFAULT_SIZE][DEFAULT_SIZE];
	int n;

	cout << "Input size of square matrix: ";
	cin >> n;

	init(matrix, n, n, 0, 10);

	cout << "Matrix:\n";
	cout << convert_to_string(matrix, n, n) << endl;

	int max = find_max_element(matrix, n);
	int min = find_min_element(matrix, n);

	cout << "Max element: " << max << endl;
	cout << "Min element: " << min << endl;

	return 0;
}