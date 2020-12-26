// #4 lab.
// Даны действительные числа x и ε. Вычислить с точностью ε. Проверить x<>0.

// Пестрецов Н. - 1 курс, 4 группа

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int znam, fact, stepen;
	int N, kolvo, i, j;
	double a, x, E, S1 = 0, S2 = 0, S3 = 0;
	
	cout << "enter N: ";
	cin >> N;
	cout << "enter E: ";
	cin >> E;
	cout << "enter x (x <> 0): ";
	cin >> x;
	a = x;
	

	while (pow(E, x) > S1)											// общее условие.
	{
		for (i = 1; i < N; i++)										// нахождение 1-ой суммы.
		{
			S1 += a;
			znam = 1; stepen = 1;
			fact = znam;
			j = i;

			while (j != 0)											// нахождение факториала (знаметеля) в слагаемом N;
			{
				fact *= j; j--;
			}

			a = pow(x, stepen) / fact;
			znam++; stepen++;
			cout << "a = " << a << endl;
		}

		
		a = x;
		if (abs(a) > abs(E)) {										// нахождение 2-ой суммы.
			i = 1;
			while (abs(a) > abs(E))
			{
				S2 += a;
				znam = 1; stepen = 1;
				fact = znam;
				j = i;

				while (j != 0)
				{
					fact *= j; j--;
				}

				a = pow(x, stepen) / fact;
				znam++; stepen++; i++;
			}
		}


		a = x;
		if (abs(a) > abs(0.1 * E)) {								// нахождение 3-ой суммы.
			i = 1; kolvo = 1;
			while (abs(a) > abs(0.1 * E))
			{
				S3 += a;
				znam = 1; stepen = 1;
				fact = znam;
				j = i;

				while (j != 0)
				{
					fact *= j; j--;
				}

				a = pow(x, stepen) / fact;
				znam++; stepen++; i++; kolvo++;
			}
		}
	}

	cout << endl << "***RESULT***" << endl;
	cout << "1'st summ = " << S1 << endl;
	cout << "2'nd summ = " << S2 << endl;
	cout << "3'rd summ = " << S3 << endl;
	cout << "kol-vo = " << kolvo << endl;


	return 0;
	system("pause");
}