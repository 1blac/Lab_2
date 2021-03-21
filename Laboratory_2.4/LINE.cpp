#include "LINE.h"

LINE::LINE()
{
	F = new double[1];
	F[0] = 0;
}
LINE::LINE(int N = 1)
{
	F = new double[N];

	for (int j = 0; j < N; j++)
		F[j] = 0;
}
double& LINE::operator[] (int j) { return F[j]; }