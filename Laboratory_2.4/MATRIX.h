#pragma once
#include "LINE.h"

class Matrix
{
private:
	int N;
	LINE* X;
public:
	Matrix();
	Matrix(int);
	Matrix(int N, LINE*);

	int GetMatrix() const;

	LINE& operator[] (int);
	Matrix& operator = (const Matrix&);
	friend ostream& operator << (ostream&, const Matrix&);
	friend istream& operator >> (istream&, Matrix&);
	operator string() const;

	friend void operator * (Matrix&, Matrix&);
	friend bool operator == (Matrix&, Matrix&);

	double NormOfMatrix();
	void ComparisonOfMatrices(Matrix&, Matrix&);

	~Matrix();
};
