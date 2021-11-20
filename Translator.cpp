#include <iostream>
#include <Windows.h>
#define clear system ("cls")
using namespace std;

int main(int& vode);

int vod() {
	int vode;
	cout << "\n\nВведите 1, чтобы выйти в меню: ";
	cin >> vode;
	if (vode == 1) {
		main(vode);
	}
	return 0;
}

int rus(int& rusc, int& vode) {
	clear;
	cout << "[-] Список 'Русских слов'\n" << endl;
	cout << "[0] Назад\n" << endl;
	cout << "[1] Дом" << endl;
	cout << "[2] Дорога" << endl;
	cout << "[3] Сад" << endl;
	cout << "[4] Квартира" << endl;
	cout << "[5] Комната" << endl;
	cout << "[6] Кухня" << endl;
	cout << "[7] Гостиная" << endl;
	cout << "[8] Холодильник" << endl;
	cout << "[9] Плита" << endl;
	cout << "[10] Кровать" << endl;
	cout << "[11] Стол" << endl;
	cout << "[12] Стул" << endl;
	cout << "[13] Кресло" << endl;
	cout << "[14] Диван" << endl;
	cout << "[15] Зеркало" << endl;
	cout << "[-] Введите значение: ";
	cin >> rusc;

	switch (rusc)
	{
	case 1:
		cout << "\nПеревод: Дом -> Hous";
		vod();
		break;
	case 2:
		cout << "Перевод: Дорога -> Road";
		vod();
		break;
	case 3:
		cout << "Перевод: Сад -> Garden";
		vod();
		break;
	case 4:
		cout << "Перевод: Квартира -> Flat";
		vod();
		break;
	case 5:
		cout << "Перевод: Комната -> Room";
		vod();
		break;
	case 6:
		cout << "Перевод: Кухня -> Kitchen";
		vod();
		break;
	case 7:
		cout << "Перевод: Гостиная -> Living Room";
		vod();
		break;
	case 8:
		cout << "Перевод: Холодильник -> Fridge";
		vod();
		break;
	case 9:
		cout << "Перевод: Плита -> Cooker";
		vod();
		break;
	case 10:
		cout << "Перевод: Кровать -> Bad";
		vod();
		break;
	case 11:
		cout << "Перевод: Стол -> Table";
		vod();
		break;
	case 12:
		cout << "Перевод: Стул -> Chair";
		vod();
		break;
	case 13:
		cout << "Перевод: Кресло -> Armchair";
		vod();
		break;
	case 14:
		cout << "Перевод: Диван -> Sofa";
		vod();
		break;
	case 15:
		cout << "Перевод: Зеркало -> Mirror";
		vod();
		break;
	default:
		cout << "Вы ввели неверное значение!";
		break;
	}
	return 0;
}

int en(int& enc, int& vode) {
	clear;
	cout << "[-] Список 'Русских слов'\n" << endl;
	cout << "[0] Назад\n" << endl;
	cout << "[1] Ray" << endl;
	cout << "[2] Rain" << endl;
	cout << "[3] Range" << endl;
	cout << "[4] Spider" << endl;
	cout << "[5] Walke" << endl;
	cout << "[6] Birde" << endl;
	cout << "[7] Fly" << endl;
	cout << "[8] Jump" << endl;
	cout << "[9] Swim" << endl;
	cout << "[10] Parrot" << endl;
	cout << "[11] Coffee" << endl;
	cout << "[12] Lunch" << endl;
	cout << "[13] Dinner" << endl;
	cout << "[14] Girl" << endl;
	cout << "[15] Boy" << endl;
	cout << "[-] Введите значение: ";
	cin >> enc;

	switch (enc)
	{
	case 1:
		cout << "\nПеревод: Ray -> Луч";
		vod();
		break;
	case 2:
		cout << "Перевод: Rain -> Дождь";
		vod();
		break;
	case 3:
		cout << "Перевод: Range -> Диапозон";
		vod();
		break;
	case 4:
		cout << "Перевод: Spider -> Паук";
		vod();
		break;
	case 5:
		cout << "Перевод: Walke -> Ходить";
		vod();
		break;
	case 6:
		cout << "Перевод: Birde -> Птица";
		vod();
		break;
	case 7:
		cout << "Перевод: Fly -> Летать";
		vod();
		break;
	case 8:
		cout << "Перевод: Jump -> Прыгать";
		vod();
		break;
	case 9:
		cout << "Перевод: Swim -> Плавать";
		vod();
		break;
	case 10:
		cout << "Перевод: Parrot -> Попугай";
		vod();
		break;
	case 11:
		cout << "Перевод: Coffee -> Кофе";
		vod();
		break;
	case 12:
		cout << "Перевод: Lunch -> Обед";
		vod();
		break;
	case 13:
		cout << "Перевод: Dinner -> Ужин";
		vod();
		break;
	case 14:
		cout << "Перевод: Girl -> Девочка";
		vod();
		break;
	case 15:
		cout << "Перевод: Boy -> Мальчик";
		vod();
		break;
	default:
		cout << "Вы ввели неверное значение!";
		break;
	}
	return 0;
}

int main(int& vode) {
	setlocale(0, "");
	int a = 0;
	while (a != 1) {
		clear;
		int rusc;
		int enc;
		cout << "[-] Переводчик\n" << endl;
		cout << "[1] Русские слова" << endl;
		cout << "[2] Английские слова\n" << endl;
		cout << "[3] Выйти" << endl;
		cout << "[+] Введите цифру: ";
		int per;
		cin >> per;

		switch (per)
		{
		case 1:
			rus(rusc, vode);
			break;
		case 2:
			en(enc, vode);
			break;
		case 3:
			exit(-1);
			break;
		default:
			cout << "\nВведено неверное значение!";
			Sleep(1700);
			break;
		}
	}
	return 0;
}