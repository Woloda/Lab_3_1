#include <iostream>
#include <sstream>
#include <string>

#include "Triad.h"


Triad::Triad() { x = 0; y = 0; z = 0; }   //конструктор за умовчанням(без параметрів)

Triad::Triad(const number v_x, const number v_y, const number v_z) {  //конструктор ініціалізації
	x = v_x; 
	y = v_y;
	z = v_z;
}

Triad::Triad(const Triad& obj) {   //конструктор копіювання
	x = obj.x;
	y = obj.y;
	z = obj.z;
}

std::ostream& operator << (std::ostream& out, Triad& obj) {   //операції виводу
	out << "\n\nEnter the number x: " << obj.x;
	out << "\nEnter the number y: " << obj.y;
	out << "\nEnter the number z: " << obj.z;

	return out;
}

std::istream& operator >> (std::istream& in, Triad& obj) {    //операції вводу
	number a, b, c;
	std::cout << "\n\nEnter the number x: "; in >> a;
	std::cout << "Enter the number y: ";     in >> b;
	std::cout << "Enter the number z: ";     in >> c;
	obj.x = a; obj.y = b; obj.z = c;

	return in;
}

Triad::operator std::string() const {   //перетворення до літерного рядку --- "операції приведення типу"
	std::string str;
	std::stringstream sout;

	sout << "\n\ncoordinate x: " << x;
	sout << "\ncoordinate y: " << y;
	sout << "\ncoordinate z: " << z;

	return sout.str();
}

number Triad::Addition() {   //обчислення суми чисел
	return x + y + z;
}