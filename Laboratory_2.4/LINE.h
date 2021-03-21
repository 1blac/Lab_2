#pragma once
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

class LINE
{
public:
	double* F;

	LINE();
	LINE(int);
	double& operator [] (int);
};
