#include <iostream>
using namespace std;

int clear() {
	system("cls");
	cout << "Конслось очистилась!";
	return 0;
}

void color() {
	system("color 4");
}

void getSizeInt() {
	cout << sizeof(int) << " байт.";
}

void getSizeChar() {
	cout << sizeof(char) << " байт.";
}

void getSizeDouble() {
	cout << sizeof(double) << " байт.";
}

void getSizeFloat() {
	cout << sizeof(float) << " байт.";
}

void getSizeBool() {
	cout << sizeof(bool) << " байт.";
}

void privet() {
	cout << "“Привет я функция!”";
}

void kvadrat() {
	int r;
	for (int i = 0; i < 5; i++) {
		for (int i2 = 0; i2 < 5; i2++) {
			cout << " # ";
		}
		cout << "  " << endl;
	}
}

int main() {
	setlocale(0, "");
	
	while (true) {
		cout << "\n[+] Программа - ”Фнукция”" << endl << endl;
		cout << "[1] Очищение консоли" << endl;
		cout << "[2] Изменить цвет фона" << endl;
		cout << "[3] Вывод размера типа данных INT" << endl;
		cout << "[4] Вывод размера типа данных CHAR" << endl;
		cout << "[5] Вывод размера типа данных DOUBLE" << endl;
		cout << "[6] Вывод размера типа данных FLOAT" << endl;
		cout << "[7] Вывод размера типа данных BOOL" << endl;
		cout << "[8] Вывод сообщения “Привет я функция”" << endl;
		cout << "[9] Вывод квадрата 5x5" << endl;
		cout << "[-] Введите: ";

		int a;
		cin >> a;

		if (a == 1) {
			clear();
		}

		if (a == 2) {
			color();
		}

		if (a == 3) {
			getSizeInt();
		}

		if (a == 4) {
			getSizeChar();
		}

		if (a == 5) {
			getSizeDouble();
		}

		if (a == 6) {
			getSizeFloat();
		}

		if (a == 7) {
			getSizeBool();
		}

		if (a == 8) {
			privet();
		}

		if (a == 9) {
			kvadrat();
		}
	}
	return 0;
}
