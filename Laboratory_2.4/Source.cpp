#include <iostream>
#include "MATRIX.h"

int main()
{
	Matrix N1(3), N2(3);

	cout << "Enter first matrix: " << endl;
	cout << " " << endl;
	cin >> N1;
	cout << N1;
	cout << " " << endl;
	cout << "Calculation of matrix norms (sqrt of the sum of square elements): " << N1.NormOfMatrix() << endl;
	cout << " " << endl;
	cout << "Enter second matrix: " << endl;
	cout << " " << endl;
	cin >> N2;
	cout << N2;
	cout << " " << endl;
	cout << "Calculation of matrix norms (sqrt of the sum of square elements): " << N2.NormOfMatrix() << endl;
	cout << " " << endl;
	cout << "Comparison of first and second matrix: " << endl;
	cout << " " << endl;
	N1.ComparisonOfMatrices(N1, N2);
    cout << "Multiplication of matrices:" << endl;
	cout << " " << endl;
	N1 * N2;

	return 0;
}