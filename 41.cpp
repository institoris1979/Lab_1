#include <iostream>

using namespace std;
int main() {
	double a, b, h, S;
	cout << "Введіть основу a: ";
	cin >> a;
	cout << "Введіть основу b: ";
	cin >> b;
	cout << "Введіть висоту h: ";
	cin >> h;
	S = (a + b) / 2 * h;
	cout << "Площа трапеції: " << S << endl;
	return 0;
}




