#include <iostream>
#define clear system ("cls")
using namespace std;

int main();

void Calculator(double& number1, double& number2, char& sumbol, int& num1, int& num2, double& nub) {
	double otvet;
	int a;

	if (sumbol == '+') {
		clear;
	 	otvet = number1 + number2;
		cout << "\nОтвет: " << otvet << endl << endl;
		cout << "Введите 1, чтобы выйти в меню: ";
		cin >> a;
		if (a == 1) {
			clear;
			main();
		}
	}

	if (sumbol == '-') {
		clear;
		otvet = number1 - number2;
		cout << "\nОтвет: " << otvet << endl << endl;
		cout << "Введите 1, чтобы выйти в меню: ";
		cin >> a;
		if (a == 1) {
			clear;
			main();
		}
	}

	if (sumbol == '*') {
		clear;
		otvet = number1 * number2;
		cout << "\nОтвет: " << otvet << endl << endl;
		cout << "Введите 1, чтобы выйти в меню: ";
		cin >> a;
		if (a == 1) {
			clear;
			main();
		}
	}

	if (sumbol == '/') {
		clear;
		otvet = number1 / number2;
		cout << "\nОтвет: " << otvet << endl << endl;
		cout << "Введите 1, чтобы выйти в меню: ";
		cin >> a;
		if (a == 1) {
			clear;
			main();
		}
	}

	if (sumbol == '%') {
		clear;
		otvet = num1 % num2;
		cout << "\nОтвет: " << otvet << endl << endl;
		cout << "Введите 1, чтобы выйти в меню: ";
		cin >> a;
		if (a == 1) {
			clear;
			main();
		}
	}

	if (sumbol == '^') {
		clear;
		otvet = sqrt(nub);
		cout << "\nОтвет: " << otvet << endl << endl;
		cout << "Введите 1, чтобы выйти в меню: ";
		cin >> a;
		if (a == 1) {
			clear;
			main();
		}
	}

	if (sumbol == '#') {
		clear;
		otvet = (number1 + number2) * (number1 + number2);
		cout << "\nОтвет: " << otvet << endl << endl;
		cout << "Введите 1, чтобы выйти в меню: ";
		cin >> a;
		if (a == 1) {
			clear;
			main();
		}
	}
}

int main() {
	setlocale(0, "");
	int num1;
	int num2;
	double number1;
	double number2;
	double nub;

	cout << "[-] Программа 'Калькулятор'" << endl << endl;
	cout << "[+] Сложение +" << endl;
	cout << "[+] Вычитание -" << endl;
	cout << "[+] Умножение *" << endl;
	cout << "[+] Деление /" << endl;
	cout << "[+] Остаток после деленея %" << endl;
	cout << "[+] Квадратный корень ^" << endl;
	cout << "[+] Сокращённое умножение #" << endl << endl;
	cout << "[-] Введите знак: ";

	char sumbol;
	cin >> sumbol;

	if (sumbol == '%') {
		cout << "\n[-] Введите первое число: ";

		cin >> num1;

		cout << "\n[-] Введите второе число: ";

		cin >> num2;

		Calculator(number1, number2, sumbol, num1, num2, nub);
	}

	if (sumbol == '^') {
		cout << "\n[-] Введите число: ";
		cin >> nub;
		Calculator(number1, number2, sumbol, num1, num2, nub);
	}

	if (sumbol == '+' || sumbol == '-' || sumbol == '*' || sumbol == '/' || sumbol == '#') {
		cout << "\n[-] Введите первое число: ";

		cin >> number1;

		cout << "\n[-] Введите второе число: ";

		cin >> number2;

		Calculator(number1, number2, sumbol, num1, num2, nub);
	}
	return 0;
}