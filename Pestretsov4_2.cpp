// Введите 3 числа. Если они могут быть длинами строн равнобедренного остроугольного треугольника, вычислите его площадь.
// Выведите длины сторон и площадь в порядке возрастания значений.

// Пестрецов Н. - 1 курс, 4 группа

#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	double a, b, c, S, p, bub;
	// length = 4, т.к. сортируются 4 значения (a, b, c, S)
	const int length = 4;
	cout << "enter a: ";
	cin >> a;
	cout << "enter b: ";
	cin >> b;
	cout << "enter c: ";
	cin >> c;
	if ((a + b > c) && (a + c > b) && (b + c > a))
		if ((a == b) || (a == c) || (b == c))
			if ((pow(a, 2) + pow(b, 2) > pow(c, 2)) || (pow(a, 2) + pow(c, 2) > pow(b, 2)) || (pow(b, 2) + pow(c, 2) > pow(a, 2)))
			{
				p = (a + b + c) / 2;
				S = sqrt(p * (p - a) * (p - b) * (p - c));
				cout << "S = " << S << endl;
				for (int i = 0; i < length; ++i)
				{
					if (a > b) {
						bub = a;
						a = b;
						b = bub;
					}
					if (b > c) {
						bub = b;
						b = c;
						c = bub;
					}
					if (c > S) {
						bub = c;
						c = S;
						S = bub;
					}
				}
				cout << a << " " << b << " " << c << " " << S << endl;
			}
	// если не остроугольный!
			else cout << "!Triangel isn't acute-angled";
	// если не равнобедренный!
		else cout << "!Triangle isn't isosceles";
	// если не может являться треугольником!
	else cout << "!Wrong sides of a triangle";
	return 0;
}
