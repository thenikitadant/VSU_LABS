// #6 lab.
// Дано вещественное число R и массив размера N. Найти два элемента массива, сумма которых наименее близка к данному числу.

// Пестрецов Н. - 1 курс, 4 группа

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int i, j, numi = 0, str, maxi = 0, maxj = 0, bub = 0;
	float maxstr, minstolb, res;
	const int N = 3, M = 3;
	int a[N][M];

	//cout << "enter N: ";
	//cin >> N;
	//cout << "enter M: ";
	//cin >> M;


	for (i = 0; i < N; i++)
		for (j = 0; j < M; j++)
			cin >> a[i][j];

	for (i = 0; i < N; i++) {
		maxstr = a[i][0];
		for (j = 1; j < M; j++)
		{
			if (a[i][j] > maxstr) {
				maxstr = a[i][j]; maxi = i; maxj = j;
			}
		}

		cout << "***" << endl;
		cout << "**inf: " << "maxstr = " << maxstr << endl;
		cout << "**inf: " << "maxj = " << maxj << endl;
		cout << "***" << endl;

		minstolb = a[0][maxj];
		for (str = 1; str < N; str++)
			if (a[str][maxj] < minstolb) {
				minstolb = a[str][maxj]; numi = str;
			}
		if (maxi == numi) {
			res = maxstr;  cout << "res = " << res << endl; bub = 1;
		}
	}
	if (bub = 0)
		cout << "NOOOOOOOOOOOOOOOOOOO!";
	else
		cout << "YESSSSSSSSSSSSSSSSSSSSS =  " << res;
	return 0;
}