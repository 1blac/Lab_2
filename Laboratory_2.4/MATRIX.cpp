#include "MATRIX.h"

Matrix::Matrix()
{
	N = 1;

	X = new LINE[N];
	X[0] = LINE(N);
}
Matrix::Matrix(int N)
{
	this->N = N < 1 ? 1 : N;

	X = new LINE[this->N];
	for (int i = 0; i < this->N; i++) { X[i] = LINE(this->N); }
}
Matrix::Matrix(int N, LINE* A)
{
	this->N = N;
	X = A;
}

int Matrix::GetMatrix() const { return N; }

LINE& Matrix::operator[] (int i) { return X[i]; }
Matrix& Matrix::operator = (const Matrix& A)
{
	N = A.N;
	X = A.X;
	return *this;
}
Matrix::operator string() const
{
	stringstream ss;
	for (int i = 0; i < this->GetMatrix(); i++)
	{
		for (int j = 0; j < this->GetMatrix(); j++)
		{
			ss << X[i].F[j] << "  ";
		}
		ss << endl;
	}
	return ss.str();
}
ostream& operator << (ostream& out, const Matrix& A)
{
	out << string(A);
	return out;
}
istream& operator >> (istream& in, Matrix& A)
{
	for (int i = 0; i < A.GetMatrix(); i++)
	{
		cout << "Enter a line of 3 elements" << endl;
		cout << " " << endl;
		for (int j = 0; j < A.GetMatrix(); j++)
		{
			in >> A.X[i].F[j];
		}
		cout << endl;
	}
	return in;
}
double Matrix::NormOfMatrix()
{
	double Square = 0;

	for (int i = 0; i < this->GetMatrix(); i++)
		for (int j = 0; j < this->GetMatrix(); j++)
			Square += this->X[i][j] * this->X[i][j];

	return sqrt(Square);
}
void Matrix::ComparisonOfMatrices(Matrix& A, Matrix& B)
{
	if (A == B) cout << "Matrices are equal" << endl << endl;
	else cout << "Matrices are not equal" << endl << endl;
}
Matrix::~Matrix()
{
	for (int i = 0; i < N; i++)
		if (X[i].F != nullptr)
			delete[](X[i].F);

	if (X != nullptr)
		delete[] X;
}
bool operator == (Matrix& A, Matrix& B)
{
	int Counter = 0;

	for (int i = 0; i < A.GetMatrix(); i++)
		for (int j = 0; j < A.GetMatrix(); j++)
			if (A[i][j] == B[i][j])
				Counter++;
	return Counter == A.GetMatrix() * A.GetMatrix() ? true : false;
}
void operator * (Matrix& A, Matrix& B)
{
	Matrix Result(A.GetMatrix());

	for (int i = 0; i < A.GetMatrix(); i++)
		for (int j = 0; j < B.GetMatrix(); j++)
			Result[i][j] = A[i][j] * B[i][j];
	cout << Result;
}
