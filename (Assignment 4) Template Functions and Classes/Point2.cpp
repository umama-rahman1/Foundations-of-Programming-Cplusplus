//Assignment 4 for ECE 3400
//Umama Rahman; ID: 202000915

#include "Point2.h"

//default constructor
template <class T>
Point2<T>::Point2()
{
	this->xcoord = 0.0;
	this->ycoord = 0.0;
}

//contructor with x and y parameters
template <class T>
Point2<T>::Point2(const T& x, const T& y)
{
	this->xcoord = x;
	this->ycoord = y;
}

//getter for x coordinate
template <class T>
T& Point2<T>::x()
{
	return this->xcoord;
}

//const getter for x coordinate
template <class T>
const T& Point2<T>::x() const
{
	return this->xcoord;
}

//getter for y coordinate
template <class T>
T& Point2<T>::y()
{
	return ycoord;
}

//const getter for y coordinate
template <class T>
const T& Point2<T>::y() const
{
	return ycoord;
}

//operator for +=
template <class T>
Point2<T>& Point2<T>::operator+=(const Point2& p)
{
	this->xcoord = this->xcoord + p.x();
	this->ycoord = this->ycoord + p.y();
	return *this;
}

//operator for -=
template <class T>
Point2<T>& Point2<T>::operator-=(const Point2& p)
{
	this->xcoord = this->xcoord - p.x();
	this->ycoord = this->ycoord - p.y();
	return *this;
}

//overloading cout and cin operators
template <class T>
std::ostream& operator<<(std::ostream& out, const Point2<T>& p)
{
	out << "(" << p.x() << ", " << p.y() << ")" << std::endl;
	return out;
}

template <class T>
std::istream& operator>>(std::istream& in, Point2<T>& p)
{
	in >> p.xcoord;
	in >> p.ycoord;
	return in;
}