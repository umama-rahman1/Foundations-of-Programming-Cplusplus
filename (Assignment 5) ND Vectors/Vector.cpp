//Umama Rahman; ID: 202000915

#include "Vector.h"
#include <cstdlib>
#include <cmath>
#include <iostream>
using namespace std;

//default constructor
template <std::size_t N>
Vector<N>::Vector() {
	this->numcomponents = N;
	this->components[N];
	for (int i = 0; i < N; i++) {
		components[i] = 0.0f;
	}
}

//copy constructor
template <std::size_t N>
Vector<N>::Vector(const Vector<N>& other) {
	for (int i = 0; i < N; i++) {
		this->components[i] = other.components[i];
	}
}

//dot product function
template <std::size_t N>
float Vector<N>::dot(Vector<N> v) {
	float result = 0;
	for (int i = 0; i < N; i++) {
		result += this->getComponent(i) * v.getComponent(i);
	}
	return result;
}

//magnitude function
template <std::size_t N>
float Vector<N>::magnitude() {
	float sum = 0;
	for (int i = 0; i < N; i++) {
		sum += this->getComponent(i) * this->getComponent(i);
	}
	float result = sqrt(sum);
	return result;
}

//getComponent function
template <std::size_t N>
float Vector<N>::getComponent(int i) const {
	return this->components[i];
}

//setComponent function
template <std::size_t N>
bool Vector<N>::setComponent(int i, float value) {
	this->components[i] = value;
	return true;
}

//addition operator
template <std::size_t N>
Vector<N> operator+(const Vector<N>& v1, const Vector<N>& v2) {
	Vector<N> vect;
	for (int i = 0; i < N; i++) {
		vect.setComponent(i, v1.getComponent(i) + v2.getComponent(i));
	}
	return vect;
}

//subtraction operator
template <std::size_t N>
Vector<N> operator-(const Vector<N>& v1, const Vector<N>& v2) {
	Vector<N> vect;
	for (int i = 0; i < N; i++) {
		vect.setComponent(i, v1.getComponent(i) - v2.getComponent(i));
	}
	return vect;
}

/*
//Test code
int main()
{
	Vector<3> v;
	v.setComponent(0, 1.0);
	v.setComponent(1, 2.0);
	v.setComponent(2, 1.0);
	cout << "V: " << v << endl;

	Vector<3> a;
	a.setComponent(0, 2.0);
	a.setComponent(1, 2.0);
	a.setComponent(2, 2.0);
	cout << "A: " << a << endl;

	a.setComponent(1, 3.0);
	cout << "New A: " << a << endl;

	cout << a.dot(v) << endl;

	cout << v.magnitude() << endl;

	cout << a - v << endl;

}
*/