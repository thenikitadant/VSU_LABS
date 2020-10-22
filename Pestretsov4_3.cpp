// 34b. 
// Пусть дано натуральное число n и вещественные числа a1, a2, ..., an, которые вводятся по одному.
// Получите их среднее арифметическое.

// Пестрецов Н. - 1 курс, 4 группа

#include <iostream>
using namespace std;
int main()
{
    int i, n;
    float* a;
    // переменная для подсчёта среднего арифметического
    float S = 0;
    cout << "enter n: ";
    cin >> n;
    a = new float[n];
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
        S += a[i];
    }
    S = (S + n) / (n + 1);
    cout << "S = " << S;
    return 0;
}