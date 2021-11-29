#include <iostream>
#include <Windows.h>
#define Clear system("CLS");
using namespace std;

int menu();

void Int() {
	const int size = 10;
	int num1[size] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	cout << "[-]Массив Int";
	cout << endl << endl;
	for (int i = 0; i < size; i++) {
		cout << "[" << i + 1 << "] int: " << num1[i] << endl;
	}

	int a;
	cout << "\nВведите 1, чтобы выйти в меню или 0, чтобы выйти: ";
	cin >> a;

	if (a == 1) {
		menu();
	}
	else {
		if (a == 0) {
			Clear;
			cout << "Досвидвание!";
			Sleep(1500);
			exit(-1);
		}
		else {
			Int();
		}
	}
}

void Short() {
	const int size = 10;
	short num2[size] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	cout << "[-]Массив Short";
	cout << endl << endl;
	for (int i = 0; i < size; i++) {
		cout << "[" << i + 1 << "] short: " << num2[i] << endl;
	}

	int a;
	cout << "\nВведите 1, чтобы выйти в меню или 0, чтобы выйти: ";
	cin >> a;

	if (a == 1) {
		menu();
	}
	else {
		if (a == 0) {
			Clear;
			cout << "Досвидвание!";
			Sleep(1500);
			exit(-1);
		}
		else {
			Short();
		}
	}
}

void Long() {
	const int size = 10;
	long num3[size] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	cout << "[-]Массив Long";
	cout << endl << endl;
	for (int i = 0; i < size; i++) {
		cout << "[" << i + 1 << "] long: " << num3[i] << endl;
	}

	int a;
	cout << "\nВведите 1, чтобы выйти в меню или 0, чтобы выйти: ";
	cin >> a;

	if (a == 1) {
		menu();
	}
	else {
		if (a == 0) {
			Clear;
			cout << "Досвидвание!";
			Sleep(1500);
			exit(-1);
		}
		else {
			Long();
		}
	}
}

void Float() {
	const int size = 10;
	float num4[size] = { 1.1, 2.1, 3.1, 4.1, 5.1, 6.1, 7.1, 8.1, 9.1, 10.1 };
	cout << "[-]Массив Float";
	cout << endl << endl;
	for (int i = 0; i < size; i++) {
		cout << "[" << i + 1 << "] float: " << num4[i] << endl;
	}

	int a;
	cout << "\nВведите 1, чтобы выйти в меню или 0, чтобы выйти: ";
	cin >> a;

	if (a == 1) {
		menu();
	}
	else {
		if (a == 0) {
			Clear;
			cout << "Досвидвание!";
			Sleep(1500);
			exit(-1);
		}
		else {
			Float();
		}
	}
}

void Double() {
	const int size = 10;
	double num5[size] = { 1.1, 2.1, 3.1, 4.1, 5.1, 6.1, 7.1, 8.1, 9.1, 10.1 };
	cout << "[-]Массив Double";
	cout << endl << endl;
	for (int i = 0; i < size; i++) {
		cout << "[" << i + 1 << "] double: " << num5[i] << endl;
	}

	int a;
	cout << "\nВведите 1, чтобы выйти в меню или 0, чтобы выйти: ";
	cin >> a;

	if (a == 1) {
		menu();
	}
	else {
		if (a == 0) {
			Clear;
			cout << "Досвидвание!";
			Sleep(1500);
			exit(-1);
		}
		else {
			Double();
		}
	}
}

void Char() {
	const int size = 10;
	char num6[size] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j' };
	cout << "[-]Массив Char";
	cout << endl << endl;
	for (int i = 0; i < size; i++) {
		cout << "[" << i + 1 << "] char: " << num6[i] << endl;
	}

	int a;
	cout << "\nВведите 1, чтобы выйти в меню или 0, чтобы выйти: ";
	cin >> a;

	if (a == 1) {
		menu();
	}
	else {
		if (a == 0) {
			Clear;
			cout << "Досвидвание!";
			Sleep(1500);
			exit(-1);
		}
		else {
			Char();
		}
	}
}

void Bool() {
	const int size = 10;
	bool num7[size] = { true, false, true, false, true, false, true, false, true, false };
	cout << "[-]Массив Bool";
	cout << endl << endl;
	for (int i = 0; i < size; i++) {
		cout << "[" << i + 1 << "] bool: " << num7[i] << endl;
	}

	int a;
	cout << "\nВведите 1, чтобы выйти в меню или 0, чтобы выйти: ";
	cin >> a;

	if (a == 1) {
		menu();
	}
	else {
		if (a == 0) {
			Clear;
			cout << "Досвидвание!";
			Sleep(1500);
			exit(-1);
		}
		else {
			Bool();
		}
	}
}

void String() {
	const int size = 10;
	string num8[size] = { "a", "b", "c", "d", "e", "f", "g", "h", "i", "j" };
	cout << "[-]Массив String";
	cout << endl << endl;
	for (int i = 0; i < size; i++) {
		cout << "[" << i + 1 << "] string: " << num8[i] << endl;
	}

	int a;
	cout << "\nВведите 1, чтобы выйти в меню или 0, чтобы выйти: ";
	cin >> a;

	if (a == 1) {
		menu();
	}
	else {
		if (a == 0) {
			Clear;
			cout << "Досвидвание!";
			Sleep(1500);
			exit(-1);
		}
		else {
			Double();
		}
	}

}

int menu() {
	setlocale(0, "");
	cout << "[-]Программа \"Массивы\"" << endl;
	cout << endl;
	cout << "[1]Int" << endl;
	cout << "[2]Short" << endl;
	cout << "[3]Long" << endl;
	cout << "[4]Float" << endl;
	cout << "[5]Double" << endl;
	cout << "[6]Char" << endl;
	cout << "[7]Bool" << endl;
	cout << "[8]String" << endl;
	cout << "[0] Выйти!";
	cout << endl;
	cout << "[-]Выберите массив: ";

	int menu;

	cin >> menu;

	Clear;
	switch (menu) {
	case 0:
		exit(-1);
	case 1:
		Int();
		break;
	case 2:
		Short();
		break;
	case 3:
		Long();
		break;
	case 4:
		Float();
		break;
	case 5:
		Double();
		break;
	case 6:
		Char();
		break;
	case 7:
		Bool();
		break;
	case 8:
		String();
		break;
	default:
		cout << "[-]Вы ввели не верное значение";
		cout << endl;
		break;
	}

	Clear;
	return 0;
}

int main() {
	
	int a = 0;
	while (a != 1) {
		menu();
	}

	return 0;
}