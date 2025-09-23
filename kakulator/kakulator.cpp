#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");
    int choice;
    double num1, num2, result;
    int n;

        cout << "=== КАЛЬКУЛЯТОР ===" << endl;

        do {
            cout << "\nВыберите операцию:" << endl;
            cout << "1. Сложить 2 числа" << endl;
            cout << "2. Вычесть первое из второго" << endl;
            cout << "3. Перемножить два числа" << endl;
            cout << "4. Разделить первое на второе" << endl;
            cout << "5. Возвести в степень N первое число" << endl;
            cout << "6. Найти квадратный корень из числа" << endl;
            cout << "7. Найти 1 процент от числа" << endl;
            cout << "8. Найти факториал из числа" << endl;
            cout << "9. Выйти из программы" << endl;
            cout << "Ваш выбор: ";
            cin >> choice;

            if (choice == 1) {
                cout << "Введите первое число: ";
                cin >> num1;
                cout << "Введите второе число: ";
                cin >> num2;
                result = num1 + num2;
                cout << "Результат: " << num1 << " + " << num2 << " = " << result << endl;
            }
            else if (choice == 2) {
                cout << "Введите первое число: ";
                cin >> num1;
                cout << "Введите второе число: ";
                cin >> num2;
                result = num2 - num1;
                cout << "Результат: " << num2 << " - " << num1 << " = " << result << endl;
            }
            else if (choice == 3) {
                cout << "Введите первое число: ";
                cin >> num1;
                cout << "Введите второе число: ";
                cin >> num2;
                result = num1 * num2;
                cout << "Результат: " << num1 << " * " << num2 << " = " << result << endl;
            }
            else if (choice == 4) {
                cout << "Введите первое число: ";
                cin >> num1;
                cout << "Введите второе число: ";
                cin >> num2;
                if (num2 == 0) {
                    cout << "Ошибка: деление на ноль!" << endl;
                }
                else {
                    result = num1 / num2;
                    cout << "Результат: " << num1 << " / " << num2 << " = " << result << endl;
                }
            }
            else if (choice == 5) {
                cout << "Введите число: ";
                cin >> num1;
                cout << "Введите степень: ";
                cin >> n;
                result = 1;
                for (int i = 0; i < n; i++) {
                    result *= num1;
                }
                cout << "Результат: " << num1 << "^" << n << " = " << result << endl;
            }
            else if (choice == 6) {
                cout << "Введите число: ";
                cin >> num1;
                if (num1 < 0) {
                    cout << "Ошибка: нельзя извлечь корень из отрицательного числа!" << endl;
                }
                else {
                    result = num1;
                    for (int i = 0; i < 10; i++) {
                        result = 0.5 * (result + num1 / result);
                    }
                    cout << "Результат: √" << num1 << " = " << result << endl;
                }
            }
            else if (choice == 7) { 
                cout << "Введите число: ";
                cin >> num1;
                result = num1 * 0.01;
                cout << "Результат: 1% от " << num1 << " = " << result << endl;
            }
            else if (choice == 8) {
                cout << "Введите целое неотрицательное число: ";
                cin >> n;
                if (n < 0) {
                    cout << "Ошибка: факториал отрицательного числа не определен!" << endl;
                }
                else {
                    long long factorial = 1;
                    for (int i = 1; i <= n; i++) {
                        factorial *= i;
                    }
                    cout << "Результат: " << n << "! = " << factorial << endl;
                }
            }
            else if (choice == 9) {
                cout << "Выход из программы..." << endl;
            }
            else {
                cout << "Неверный выбор! Попробуйте снова." << endl;
            }

        } while (choice != 9);

        return 0;
    }