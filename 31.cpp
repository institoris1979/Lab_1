#include <iostream>

using namespace std;
int main() {
	double a, b, c2;
	// Введення катетів
	cout << "Введіть катет a: ";
	cin >> a;
	cout << "Введіть катет b: ";
	cin >> b;
	// Обчислення квадрата гіпотенузи
	c2 = a * a + b * b;
	// Виведення результату
	cout << "Квадрат гіпотенузи c^2 = " << c2 << endl;
	return 0;
}
