﻿// Скорость первого автомобиля V 1 км/ч, второго — V 2 км/ч, расстояние между ними S км.
// Определить расстояние между ними через T часов, если автомобили удаляются друг от
// друга.Данное расстояние равно сумме начального расстояния и общего пути,
// проделанного автомобилями; общий путь = время * суммарная скорость

// Пестрецов Н. - 1 курс, 4 группа

#include <iostream>
using namespace std;
int main()
{
	int V1, V2, S, T;
	cout << "enter *V1*" << endl;
	cin >> V1;
	cout << "enter *V2*" << endl;
	cin >> V2;
	cout << "enter *S*" << endl;
	cin >> S;
	cout << "enter *T*" << endl;
	cin >> T;
	S = S + T * (V1 + V2);
	cout << "S = " << S;
	return 0;
}