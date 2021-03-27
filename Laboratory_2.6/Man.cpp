#include "Man.h"
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
void Student::Man::Display() const
{
	cout << endl;
	cout << "name = " << name << endl;
	cout << "age = " << age << endl;
	cout << "weight = " << weight << endl;
	cout << "gender = " << gender << endl;
}
void Student::Man::Init(string name, int age, int weight, string gender)
{
	setName(name);
	setAge(age);
	setWeight(weight);
	setGender(gender);
}
void Student::Man::Read()
{
	string name;
	int age;
	int weight;
	string gender;
	cout << endl;
	cout << "name = ? "; cin >> name;
	cout << "age = ? "; cin >> age;
	cout << "weight = ? "; cin >> weight;
	cout << "gender = ? "; cin >> gender;
	Init(name, age, weight, gender);
}
Student::Man::Man()
	: name(""), age(0), weight(0), gender("")
{}
Student::Man::Man(const string name, const string gender)
	: name(name), gender(gender)
{}
Student::Man::Man(const int age, const int weight)
	: age(age), weight(weight)
{}
Student::Man::Man(const string name, const int age, const int weight, const string gender)
	: name(name), age(age), weight(weight), gender(gender)
{}
Student::Man::Man(const Man& m)
	: name(m.name), age(m.age), weight(m.weight), gender(m.gender)
{}
Student::Man& Student::Man::operator = (const Man& m)
{
	this->name = m.name;
	this->age = m.age;
	this->weight = m.weight;
	this->gender = m.gender;
	return *this;
}
ostream& operator << (ostream& out, const Student::Man& m)
{
	out << string(m);
	return out;
}
istream& operator >> (istream& in, Student::Man& m)
{
	string name;
	int age;
	int weight;
	string gender;
	cout << endl;
	cout << "name = ? "; in >> name;
	cout << "age = ? "; in >> age;
	cout << "weight = ?"; in >> weight;
	cout << "gender = ?"; in >> gender;
	m.setName(name);
	m.setAge(age);
	m.setWeight(weight);
	m.setGender(gender);
	return in;
}
Student::Man::operator string () const
{
	stringstream ss;
	ss << endl;
	ss << "name = " << name << endl;
	ss << "age = " << age << endl;
	ss << "weight = " << weight << endl;
	ss << "gender = " << gender << endl;
	return ss.str();
}
Student::Man& Student::Man::operator ++ ()
{
	++age;
	return *this;
}
Student::Man& Student::Man::operator -- ()
{
	--age;
	return *this;
}
Student::Man Student::Man::operator ++ (int)
{
	Man t(*this);
	age++;
	return t;
}
Student::Man Student::Man::operator -- (int)
{
	Man t(*this);
	age--;
	return t;
}
Student::Man::~Man(void)
{}
