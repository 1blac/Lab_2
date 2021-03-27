#include "Man.h"
using namespace std;
int main()
{
	Student s1;
	Student s4("Orest", 19, 69, "Male", 2);
	cout << s4 << endl;
	s1 = ++s4;
	s1 = s4++;
	cout << s1 << endl;
	cout << s4 << endl;
	cin >> s1;
	cin >> s4;
	cout << s1 << endl;
	cout << ++s4 << endl;
	return 0;
}