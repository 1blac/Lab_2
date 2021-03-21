#include "Man.h"
#include <sstream>
void Man::Display() const
{
	cout << endl;
	cout << "name = " << name << endl;
	cout << "age = " << age << endl;
	cout << "weight = " << weight << endl;
	cout << "gender = " << gender << endl;
}
void Man::Init(string name, int age, int weight, string gender)
{
	setName(name);
	setAge(age);
	setWeight(weight);
	setGender(gender);
}
void Man::Read()
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
Man::Man()
	: name(""), age(0), weight(0), gender("")
{}
Man::Man(const string name, const string gender)
	: name(name), gender(gender)
{}
Man::Man(const int age, const int weight)
	: age(age), weight(weight)
{}
Man::Man(const string name, const int age, const int weight, const string gender)
	: name(name), age(age), weight(weight), gender(gender)
{}
Man::Man(const Man& m)
	: name(m.name), age(m.age), weight(m.weight), gender(m.gender)
{}
Man& Man::operator = (const Man& m)
{
	this->name = m.name;
	this->age = m.age;
	this->weight = m.weight;
	this->gender = m.gender;
	return *this;
}
ostream& operator << (ostream& out, const Man& m)
{
	out << string(m);
	return out;
}
istream& operator >> (istream& in, Man& m)
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
Man::operator string () const
{
	stringstream ss;
	ss << endl;
	ss << "name = " << name << endl;
	ss << "age = " << age << endl;
	ss << "weight" << weight << endl;
	ss << "gender" << gender << endl;
	return ss.str();
}
Man& Man::operator ++ ()
{
	++age;
	return *this;
}
Man& Man::operator -- ()
{
	--age;
	return *this;
}
Man Man::operator ++ (int)
{
	Man t(*this);
	age++;
	return t;
}
Man Man::operator -- (int)
{
	Man t(*this);
	age--;
	return t;
}
Man::~Man(void)
{}