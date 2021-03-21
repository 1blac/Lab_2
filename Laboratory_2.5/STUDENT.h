#pragma once
#include "Man.h"
class Student
{
private:
	int yearOFstudy;
	Man man;
public:
	int getYearOFstudy() const { return yearOFstudy; }
	Man getMan() const { return man; }
	void setYearOFstudy(int yearOFstudy) { this->yearOFstudy = yearOFstudy; }
	void setMan(Man man) { this->man = man; }
	void Init(int yearOFstudy, Man man);
	void Display() const;
	void Read();
	Student(const string name = "", const int age = 0, const int weight = 0, const string gender = "", const int yearOFstudy = 0);
	Student(const Student& s);
	Student& operator = (const Student& s);
	friend ostream& operator << (ostream& out, const Student& s);
	friend istream& operator >> (istream& in, Student& s);
	operator string () const;
	Student& operator ++ ();
	Student& operator -- (); 
	Student operator ++ (int);
	Student operator -- (int);
	~Student(void);
};
