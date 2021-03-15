#include "LINE.h"
#include <iostream>

using namespace std;

int main()
{

	LINE y;
	cin > y;
	y.function();
	cout << " Formula: y = A * x + B" << endl;
	cout << " y = " << y.function() << endl;

	return 0;
}