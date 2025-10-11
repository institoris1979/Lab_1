#include <iostream>

#include <cmath> // для pow()

using namespace std;
int main() {
	double a; // довжина ребра куба
	cout << "Введіть довжину ребра куба a: ";
	cin >> a;
	double V = pow(a, 3); // об’єм куба: V = a³
	double S = 6 * pow(a, 2); // площа поверхні: S = 6a²
	cout << "Об'єм куба: " << V << endl;
	cout << "Площа поверхні куба: " << S << endl;
	return 0;
}
