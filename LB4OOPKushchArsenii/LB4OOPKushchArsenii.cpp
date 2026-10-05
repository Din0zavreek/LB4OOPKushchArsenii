#include <iostream>
#include <windows.h>
#include "Bank.h"

using namespace std;

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    cout << "--- Демонстрація Конструкторів ---" << endl;

    Money m1;
    cout << "m1 (створений за замовчуванням): ";
    m1.Display();

    Money m2(10, 5, 2, 1, 0, 3, 1, 4, 2, 1);
    cout << "m2 (створений конструктором з параметрами): ";
    m2.Display();

    Money m3(m2);
    cout << "m3 (копія m2): ";
    m3.Display();

    cout << "\n--- Ввід даних через Read() ---" << endl;
    m1.Read();
    cout << "Оновлений m1: ";
    m1.Display();

    cout << "\n--- Виконання перевантажених операцій ---" << endl;
    Money sum = m1 + m2;
    cout << "m1 + m2 = ";
    sum.Display();

    Money diff = m1 - m2;
    cout << "m1 - m2 = ";
    diff.Display();

    double div = m1 / m2;
    cout << "Ділення(m1 / m2): " << div << endl << endl;

    double divFactor;
    cout << "Введіть дробове число для ділення першої суми: ";
    cin >> divFactor;
    Money divResult = m1 / divFactor;
    cout << "Ділення (m1 на дробове число): ";
    divResult.Display();

    double mulFactor;
    cout << "\nВведіть дробове число для множення першої суми: ";
    cin >> mulFactor;
    Money mulResult = m1 * mulFactor;
    cout << "Множення (m1 на дробове число): ";
    mulResult.Display();

    cout << "\nРезультати порівняння" << endl << endl;

    if (m1 == m2) {
        cout << "Суми рівні." << endl;
    }
    if (m1 != m2) {
        cout << "Суми не рівні." << endl;
    }
    if (m1 > m2) {
        cout << "Перша сума більша за другу суму." << endl;
    }
    if (m1 < m2) {
        cout << "Перша сума менша за другу суму." << endl;
    }

    return 0;
}