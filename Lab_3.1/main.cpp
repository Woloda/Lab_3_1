#include <iostream>
#include <iomanip>

#include "Triangle.h"  //підключає --- "#include Triangle.h" і "#include Triad.h"

int main(void) {
	using std::cout;

	cout << "\n\n/////////////////////////////////////////////////////////////////////////////////////// Tets 1: ";

	Triad a;

	cout << "\nThe first object --- Triad: ";
	std::cin >> a;
	cout << "\n\nDisplay first object --- Triad: ";
	cout << a;

	cout << "\n\nAdding object numbers is : " << a.Addition();

	cout << "\n\nletter string conversion method: ";
	cout << a.operator std::string();

	cout << "\n\n/////////////////////////////////////////////////////////////////////////////////////// Tets 2: ";

	Triangle b(9,4,7);

	cout << "\n\nDisplay second object --- Triangle: ";
	cout << b;

	cout << "\n\nThe area of the triangle is: " << std::setprecision(4) << b.Calcul_Square();

	angle alpha, beta, sigma;
	cout << "\n\nThe angles of the triangle are: ";

	b.Calcul_Angles(alpha, beta, sigma, b.Calcul_Square());
	cout << "\n\nThe first angle of the triangle is: " << std::setprecision(3) << alpha;
	cout << "\nThe second angle of the triangle is: " << std::setprecision(3) << beta;
	cout << "\nThe third angle of the triangle is: " << std::setprecision(3) << sigma;

	cout << "\n\n/////////////////////////////////////////////////////////////////////////////////////// Tets 3: ";
	Triangle c(4, 9, 8);
	a = c;
	cout << "\n\nDisplay first object --- Triad: ";
	cout << a;

	cout << "\n\nAdding object numbers is : " << a.Addition();

	cout << "\n\nletter string conversion method: ";
	cout << a.operator std::string();

	return 0;
}