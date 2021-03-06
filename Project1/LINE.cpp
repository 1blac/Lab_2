#include "LINE.h"
#include <sstream>

LINE::LINE()
{
    first = 0;
    second = 0;
    X = 0;
}

LINE::LINE(double A, double B, double x)
{
    first = A;
    second = B;
    X = x;
}

LINE::LINE(const LINE& S)
{
    first = S.first;
    second = S.second;
    X = S.X;
}

LINE::~LINE()
{ }

void LINE::SetFirst(double A)
{
    first = A;
}

void LINE::SetSecond(double B)
{
    second = B;
}

void LINE::SetX(double x)
{
    X = x;
}

double LINE::GetFirst() const
{
    return first;
}

double LINE::GetSecond() const
{
    return second;
}

double LINE::GetX() const
{
    return X;
}

LINE& LINE::operator = (const LINE& S)
{
    first = S.first;
    second = S.second;
    X = S.X;
    return *this;
}

LINE::operator string () const
{
    stringstream ss;
    ss << " A = " << first << endl;
    ss << " B = " << second << endl;
    ss << " x = " << X << endl;
    return ss.str();
}

ostream& operator < (ostream& out, const LINE& S)
{
    out << string(S);
    return out;
}

istream& operator > (istream& in, LINE& S)
{
    cout << "Enter the value of the functions:" << endl;
    cout << " A = "; in >> S.first;
    if (S.first != 0)
    {
        cout << " B = "; in >> S.second;
        cout << " x = "; in >> S.X;
    }
    else
    {
        cout << " " << endl;
        system("color 4F");
        cout << "You have entered an invalid value for variable A" << endl;
    }
    return in;
}

LINE& LINE::operator ++()
{
    first++;
    second++;
    X++;
    return *this;
}
LINE& LINE::operator --()
{
    first--;
    second--;
    X--;
    return *this;
}

LINE LINE::operator ++(int)
{
    LINE t(*this);
    first++;
    second++;
    X++;
    return t;
}
LINE LINE::operator --(int)
{
    LINE t(*this);
    first--;
    second--;
    X--;
    return t;
}

double LINE::function()
{

    return first * X + second;
}