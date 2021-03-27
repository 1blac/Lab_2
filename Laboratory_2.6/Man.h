#pragma once
#include <string>
#include <iostream>
using namespace std;

	class Student
	{
	private:
		int yearOFstudy;
	public:
		class Man
		{
		public:
			string name;
			int age;
			int weight;
			string gender;
			static int counter;
		public:
			string getName() const { return name; }
			int getAge() const { return age; }
			int getWeight() const { return weight; }
			string getGender() const { return gender; }
			void setName(string name) { this->name = name; }
			void setAge(int age) { this->age = age; }
			void setWeight(int weight) { this->weight = weight; }
			void setGender(string gender) { this->gender = gender; }
			void Init(string name, int age, int weight, string gender);
			void Display() const;
			void Read();
			Man();
			Man(const string name, const string gender);
			Man(const int age, const int weight);
			Man(const string name, const int age, const int weight, const string gender);
			Man(const Man& m);
			Man& operator = (const Man& m);
			friend ostream& operator << (ostream& out, const Man& m);
			friend istream& operator >> (istream& in, Man& m);
			operator string () const;
			Man& operator ++ ();
			Man& operator -- ();
			Man operator ++ (int);
			Man operator -- (int);
			~Man(void);
		};
		Man man;
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
	