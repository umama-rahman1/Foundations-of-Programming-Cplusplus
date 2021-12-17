//Umama Rahman; ID: 202000915
#include <cstdlib>
#include <iostream>

template <std::size_t N>
class Vector
{
	public:
		// default constructor (initialize all components to 0.0f)
		Vector();

		// copy constructor
		Vector(const Vector<N>& other);

		// dot product with other Vector v
		float dot(Vector<N> v);

		// magnitude of this Vector
		float magnitude();

		// get the ith component of this Vector (indexing should begin at 0)
		float getComponent(int i) const;

		// set the ith component of this Vector (indexing should begin at 0)
		bool setComponent(int i, float value);

	private:

		// components of this Vector
		float components[N];

		// number of components in this Vector
		int numcomponents;
};

// Overloaded addition operator
template <std::size_t N>
Vector<N> operator+(const Vector<N> &v1, const Vector<N> &v2);

// Overloaded subtraction operator
template <std::size_t N>
Vector<N> operator-(const Vector<N> &v1, const Vector<N> &v2);

// Overloaded output stream operator
template <std::size_t N>
std::ostream& operator<<(std::ostream& os, const Vector<N>& v)
{
	os << "(";
	for (int i = 0; i < N-1; i++)
	{
		os << v.getComponent(i) << ", "; 
	}
	os << v.getComponent(N-1) << ")";
	return os;
}
