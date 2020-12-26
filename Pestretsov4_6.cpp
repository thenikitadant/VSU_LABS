// #6 lab.
// Дано вещественное число R и массив размера N. Найти два элемента массива, сумма которых наименее близка к данному числу.

// Пестрецов Н. - 1 курс, 4 группа

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int n, i, j, numi, numj;
	float* a, bub, bliz, max, R;

	cout << "enter n: ";
	cin >> n;
	cout << "enter R: ";
	cin >> R;

	a = new float[n];
	for (i = 0; i < n; i++)
		cin >> a[i];

	bub = a[1] * a[2];
	if (bub > R)
		max = bub - R;
	if (bub <= R)
		max = R - bub;
	bliz = max;

	for (i = 0; i < n - 1; i++)
		for (j = i + 1; j < n; j++) {
			bub = a[i] + a[j];
			if (bub >= R)
				max = bub - R;
			if (bub <= R)
				max = R - bub;
			if (max > bliz) {
				bliz = max; numi = i; numj = j;
			}
		}

	cout << endl << "***RESULT***" << endl;
	cout << "bliz = " << bliz << endl;
	cout << "1'st element = " << numi + 1 << endl;
	cout << "2'nd element = " << numj + 1 << endl;

	return 0;
}