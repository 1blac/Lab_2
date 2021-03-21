#include "Man.h"
#include "STUDENT.h"
#include <sstream>
void Student::Init(int yearOFstudy, Man man)
{
	setYearOFstudy(yearOFstudy);
	setMan(man);
}
void Student::Display() const
{
	cout << endl;
	cout << "man:" << endl;
	man.Display(); // використовуємо делегування
	cout << "yearOFstudy = " << yearOFstudy << endl;
}
void Student::Read()
{
	int yearOFstudy;
	Man m;
	cout << endl;
	cout << "Man: " << endl;
	m.Read(); // використовуємо делегування
	cout << "yearOFstudy = ? "; cin >> yearOFstudy;
	Init(yearOFstudy, m);
}
Student::Student(const string name, const int age, const int weight, const string gender, const int yearOFstudy)
	: man(name, age, weight, gender), yearOFstudy(yearOFstudy)
{}
Student::Student(const Student& s)
{
	man = s.man;
    yearOFstudy = s.yearOFstudy;
}
Student& Student::operator = (const Student& s)
{
	man = s.man;
	yearOFstudy = s.yearOFstudy;
	return *this;
}
ostream& operator << (ostream& out, const Student& s)
{
	out << string(s);
	return out;
}
istream& operator >> (istream& in, Student& s)
{
	int yearOFstudy;
	cout << endl;
	cout << "man = ? "; in >> s.man;
	cout << "yearOFstudy = ? "; in >> yearOFstudy;
	s.setYearOFstudy(yearOFstudy);
	return in;
}
Student::operator string () const
{
	stringstream ss;
	ss << "yearOFstudy = " << yearOFstudy << endl;
	return string(man) + ss.str();
}
Student& Student::operator ++ ()
{
	++yearOFstudy;
	return *this;
}
Student& Student::operator -- ()
{
	--yearOFstudy;
	return *this;
}
Student Student::operator ++ (int)
{
	Student s(*this);
	yearOFstudy++;
	return s;
}
Student Student::operator -- (int)
{
	Student s(*this);
	yearOFstudy--;
	return s;
}
Student::~Student(void)
{}