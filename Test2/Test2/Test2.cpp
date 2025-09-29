#include <iostream>
#include <cmath>
#include <ctime> 
#include <cstdlib>
#include <windows.h>
using namespace std;


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Russian");
	int x{};
		cout << "Угадай число от 0 до 100" << endl;
		
		srand(time(0));
		int min = 0;
		int max = 100;
		int i = rand() % (max - min + 1) + min;

		int number;
		do {

			cin >> number;

			if (number > i) {
				cout << "Меньше" << endl;
			}
			if (number < i) {
				cout << "Больше" << endl;
			}
			if (number == i) {
				cout << "Правильно" << endl;
			}

		} while (number != i);

		return 0;

}