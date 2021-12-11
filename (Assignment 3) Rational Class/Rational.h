#pragma once
#include <iostream>

using namespace std;

class Rational
{
public:
	typedef int Integer;

	Rational(Integer numerator = 0, Integer denominator = 1);

	Rational(Rational&& other);

	Rational(Rational& other);

	Rational& operator=(const Rational& other);

	Rational& operator=(const Rational&& other);

	Rational operator+(const Rational& other);	
	
	Rational operator-(const Rational& other);
	
	Rational operator*(const Rational& other);

	Rational operator/(const Rational& other);	

	Rational operator+=(const Rational& other);

	Rational operator-=(const Rational& other);
	
	Rational operator*=(const Rational& other);

	Rational operator/=(const Rational& other);

	ostream& print(ostream& Out);

	istream& scan(istream& In);

	double toDouble();

	friend ostream& operator<<(ostream& out, Rational& rational);
	friend istream& operator>>(istream& in, Rational& rational);

private:
	Integer numerator;
	Integer denominator;
};