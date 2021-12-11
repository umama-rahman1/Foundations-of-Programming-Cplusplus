#include "Rational.h"

//Contructor
Rational::Rational(Integer num, Integer denom) {
	numerator = num;
	if (denom != 0) {
		denominator = denom;
	}
}

//Move constructor
Rational::Rational(Rational&& other) {
	numerator = other.numerator;
	denominator = other.denominator;
}

//Copy constructor
Rational::Rational(Rational& other) {
	numerator = other.numerator;
	denominator = other.denominator;
}

//Copy assingment
Rational& Rational::operator=(const Rational& other) {
	numerator = other.numerator;
	denominator = other.denominator;
	return *this;
}

//Move assignment
Rational& Rational::operator=(const Rational&& other) {
	numerator = other.numerator;
	denominator = other.denominator;
	return *this;
}

//addition operator
Rational Rational::operator+(const Rational &other) {
	Rational buffer;
	buffer.numerator = this->denominator * other.numerator + this->numerator * other.denominator;
	buffer.denominator = this->denominator * other.denominator;
	return buffer;
}

//subtraction operator
Rational Rational::operator-(const Rational& other) {
	Rational buffer;
	buffer.numerator = this->numerator * other.denominator - this->denominator * other.numerator;
	buffer.denominator = this->denominator * other.denominator;
	return buffer;
}

//multiplication operator
Rational Rational::operator*(const Rational& other) {
	Rational buffer;
	buffer.numerator = this->numerator * other.numerator;
	buffer.denominator = this->denominator * other.denominator;
	return buffer;
}

//division operator
Rational Rational::operator/(const Rational& other) {
	Rational buffer;
	buffer.numerator = this->numerator *other.denominator;
	buffer.denominator = this->denominator * other.numerator;
	return buffer;
}

//+= operator
Rational Rational::operator+=(const Rational& other) {
	this->numerator = (this->denominator * other.numerator) + (this->numerator * other.denominator);
	this->denominator = this->denominator * other.denominator;
	return *this;
}

//-= operator
Rational Rational::operator-=(const Rational& other) {
	this->numerator =  (this->numerator * other.denominator) - (this->denominator * other.numerator);
	this->denominator = this->denominator * other.denominator;
	return *this;
}

//*= operator
Rational Rational::operator*=(const Rational& other) {
	this->numerator *= other.numerator;
	this->denominator *= other.denominator;
	return *this;
}

// /= operator
Rational Rational::operator/=(const Rational& other) {
	this->numerator = this->numerator * other.denominator;
	this->denominator = this->denominator * other.numerator;
	return *this;
}

ostream& Rational::print(ostream& Out)
{
	Out << numerator << "/" << denominator;
	return Out;
}

istream& Rational::scan(istream& In)
{
	In >> numerator;
	In.ignore(1);
	In >> denominator;
	return In;
}

ostream& operator<<(ostream& Out, Rational& r)
{
	return r.print(Out);
}

istream& operator>>(istream& In, Rational& r)
{
	return r.scan(In);
}

double Rational::toDouble() {
	return double(numerator) / double(denominator);
}






