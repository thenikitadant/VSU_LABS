// #4 lab.
// Даны действительные числа x и ε. Вычислить с точностью ε. Проверить x<>0.

// Пестрецов Н. - 1 курс, 4 группа

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int znam = 1;
	int i, n, k = 0;
	double a, x, eps, fact = 1, S = 0;
	cout << "enter eps: ";
	cin >> eps;
	cout << "enter x (x <> 0): ";
	cin >> x;
	a = -x;
	if (x != 0)
	{
		while (abs(a) > eps)
		{
			S += a;
			k++;
			n = 2 * k - 1;
			znam = 1;
			i = 1;

			while (i != (n+1))
			{
				znam *= i; i++;
			}

			n = 2 * k + 1;
			i = 1;
			while (i != (n+1))
			{
				znam *= i; i++;
			}

			a = (pow(-1, k + 1)) * (pow(x, 2 * k - 1)) / znam;
			cout << "a = " << a << endl;
		}
	}
	cout << "S = " << S;
	return 0;
	system("pause");
}
