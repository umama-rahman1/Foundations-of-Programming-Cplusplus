//Umama Rahman; 202000915
#include"Vector3.h"
#include <iostream>
using namespace std;

//cross product function implementation
Vector3 Vector3::cross(Vector3 v) {
	Vector3 vect;
	vect.setComponent(0, ((this->getComponent(1) * v.getComponent(2)) - (this->getComponent(2) * v.getComponent(1))));
	vect.setComponent(1, ((this->getComponent(2) * v.getComponent(0)) - (this->getComponent(0) * v.getComponent(2))));
	vect.setComponent(2, ((this->getComponent(0) * v.getComponent(1)) - (this->getComponent(1) * v.getComponent(0))));
	return vect;
}

/*
//Test code
int main()
{
    Vector3 a;
    a.setComponent(0, 2.0);
	a.setComponent(1, -3.0);
    a.setComponent(2, -1.0);

    cout << "A: " << a << endl;

	Vector3 v;
	v.setComponent(0, 1.0);
	v.setComponent(1, 4.0);
	v.setComponent(2, -2.0);
	cout << "V: " << v << endl;

	cout << a.cross(v) << endl;
}
*/