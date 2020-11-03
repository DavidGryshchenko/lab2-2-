#include <iostream>
using std::cin;
using std::cout;

int main()
{
    setlocale(LC_ALL, "rus");
    const int size = 1000;
    int n, max, mas[size], mul = 1, sum = 0;
    cin >> n;

    for (int i = 0; i < n; ++i) cin >> mas[i];

    max = mas[0];
    for (int i = 0; i < n; ++i)
    {
        if (mas[i] < 0) mul *= mas[i];
        max = std::max(max, mas[i]);
    }
    cout << "Произведение отрицательных элементов массива: " << mul << std::endl;

    for (int i = 0; i < n && mas[i] != max; ++i) sum += mas[i];
    cout << "Сумма до максимального элемента массива: " << sum << std::endl;

    cout << "Массив вверх ногами: ";
    for (int i = n - 1; i >= 0; --i) cout << mas[i] << ' ';
}
