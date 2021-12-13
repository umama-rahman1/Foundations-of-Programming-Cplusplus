//Assignment 4 for ECE 3400
//Umama Rahman; ID: 202000915

#include <iostream>
using namespace std;

template <class T>

class Point2
{
public:

	Point2(); //default constructor
	Point2(const T& x, const T& y); //contructor with x and y parameters

	T& x(); //getter for x coordinate
	const T& x() const; //const getter for x coordinate

	T& y(); //getter for y coordinate
	const T& y() const; //const getter for y coordinate

	Point2& operator+=(const Point2& p); //operator for addition and equal to

	Point2& operator-=(const Point2& p); //operator for subtration and equal to
	
private:
	//declaring variables for coordinates x and y
	T xcoord;
	T ycoord;
};

//overloads for cout and cin operators
template <class T>
std::ostream& operator<<(std::ostream& out, const Point2<T>& p);

template <class T>
std::istream& operator>>(std::istream& in, Point2<T>& p);
