#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	cout << "[-]????????? \"?????????\"" << endl;
	cout << endl;
	cout << "[1]?????????" << endl;
	cout << "[2]?????" << endl;
	int menu;
	int day;
	string month;
	cin >> menu;
	system("CLS");
	switch (menu)
	{
	case 1:
		cout << "[-]???????? ??????" << endl;
		cout << endl;
		cout << "[1]??????" << endl;
		cout << "[2]???????" << endl;
		cout << "[3]????" << endl;
		cout << "[4]??????" << endl;
		cout << "[5]???" << endl;
		cout << "[6]????" << endl;
		cout << "[7]????" << endl;
		cout << "[8]??????" << endl;
		cout << "[9]????????" << endl;
		cout << "[10]???????" << endl;
		cout << "[11]??????" << endl;
		cout << "[12]???????" << endl;
		cout << endl;
		cout << "[-]???????? ????? ??????: ";
		cin >> menu;
		system("CLS");
		switch (menu)
		{
		case 1:
			month = "??????";
			cout << "[-]??????? ????? ???: ";
			cin >> menu;
			system("CLS");
			switch (menu)
			{
			case 1:
				day = 1;
				break;
			case 2:
				day = 2;
				break;
			case 3:
				day = 3;
				break;
			case 4:
				day = 4;
				break;
			case 5:
				day = 5;
				break;
			case 6:
				day = 6;
				break;
			case 7:
				day = 7;
				break;
			case 8:
				day = 8;
				break;
			case 9:
				day = 9;
				break;
			case 10:
				day = 10;
				break;
			case 11:
				day = 11;
				break;
			case 12:
				day = 12;
				break;
			case 13:
				day = 13;
				break;
			case 14:
				day = 14;
				break;
			case 15:
				day = 15;
				break;
			case 16:
				day = 16;
				break;
			case 17:
				day = 17;
				break;
			case 18:
				day = 18;
				break;
			case 19:
				day = 19;
				break;
			case 20:
				day = 20;
				break;
			case 21:
				day = 21;
				break;
			case 22:
				day = 22;
				break;
			case 23:
				day = 23;
				break;
			case 24:
				day = 24;
				break;
			case 25:
				day = 25;
				break;
			case 26:
				day = 26;
				break;
			case 27:
				day = 27;
				break;
			case 28:
				day = 28;
				break;
			case 29:
				day = 29;
				break;
			case 30:
				day = 30;
				break;
			case 31:
				day = 31;
			default:
				cout << "[-]?? ????? ?? ?????? ????????!";
				return 0;
			}
			break;
		case 2:
			month = "???????";
			cout << "[-]??????? ????? ???: ";
			cin >> menu;
			system("CLS");
			switch (menu)
			{
			case 1:
				day = 1;
				break;
			case 2:
				day = 2;
				break;
			case 3:
				day = 3;
				break;
			case 4:
				day = 4;
				break;
			case 5:
				day = 5;
				break;
			case 6:
				day = 6;
				break;
			case 7:
				day = 7;
				break;
			case 8:
				day = 8;
				break;
			case 9:
				day = 9;
				break;
			case 10:
				day = 10;
				break;
			case 11:
				day = 11;
				break;
			case 12:
				day = 12;
				break;
			case 13:
				day = 13;
				break;
			case 14:
				day = 14;
				break;
			case 15:
				day = 15;
				break;
			case 16:
				day = 16;
				break;
			case 17:
				day = 17;
				break;
			case 18:
				day = 18;
				break;
			case 19:
				day = 19;
				break;
			case 20:
				day = 20;
				break;
			case 21:
				day = 21;
				break;
			case 22:
				day = 22;
				break;
			case 23:
				day = 23;
				break;
			case 24:
				day = 24;
				break;
			case 25:
				day = 25;
				break;
			case 26:
				day = 26;
				break;
			case 27:
				day = 27;
				break;
			case 28:
				day = 28;
				break;
			default:
				cout << "[-]?? ????? ?? ?????? ????????!";
				return 0;
			}
			break;
		case 3:
			month = "?????";
			cout << "[-]??????? ????? ???: ";
			cin >> menu;
			system("CLS");
			switch (menu)
			{
			case 1:
				day = 1;
				break;
			case 2:
				day = 2;
				break;
			case 3:
				day = 3;
				break;
			case 4:
				day = 4;
				break;
			case 5:
				day = 5;
				break;
			case 6:
				day = 6;
				break;
			case 7:
				day = 7;
				break;
			case 8:
				day = 8;
				break;
			case 9:
				day = 9;
				break;
			case 10:
				day = 10;
				break;
			case 11:
				day = 11;
				break;
			case 12:
				day = 12;
				break;
			case 13:
				day = 13;
				break;
			case 14:
				day = 14;
				break;
			case 15:
				day = 15;
				break;
			case 16:
				day = 16;
				break;
			case 17:
				day = 17;
				break;
			case 18:
				day = 18;
				break;
			case 19:
				day = 19;
				break;
			case 20:
				day = 20;
				break;
			case 21:
				day = 21;
				break;
			case 22:
				day = 22;
				break;
			case 23:
				day = 23;
				break;
			case 24:
				day = 24;
				break;
			case 25:
				day = 25;
				break;
			case 26:
				day = 26;
				break;
			case 27:
				day = 27;
				break;
			case 28:
				day = 28;
				break;
			case 29:
				day = 29;
				break;
			case 30:
				day = 30;
				break;
			case 31:
				day = 31;
			default:
				cout << "[-]?? ????? ?? ?????? ????????!";
				return 0;
			}
			break;
		case 4:
			month = "??????";
			cout << "[-]??????? ????? ???: ";
			cin >> menu;
			system("CLS");
			switch (menu)
			{
			case 1:
				day = 1;
				break;
			case 2:
				day = 2;
				break;
			case 3:
				day = 3;
				break;
			case 4:
				day = 4;
				break;
			case 5:
				day = 5;
				break;
			case 6:
				day = 6;
				break;
			case 7:
				day = 7;
				break;
			case 8:
				day = 8;
				break;
			case 9:
				day = 9;
				break;
			case 10:
				day = 10;
				break;
			case 11:
				day = 11;
				break;
			case 12:
				day = 12;
				break;
			case 13:
				day = 13;
				break;
			case 14:
				day = 14;
				break;
			case 15:
				day = 15;
				break;
			case 16:
				day = 16;
				break;
			case 17:
				day = 17;
				break;
			case 18:
				day = 18;
				break;
			case 19:
				day = 19;
				break;
			case 20:
				day = 20;
				break;
			case 21:
				day = 21;
				break;
			case 22:
				day = 22;
				break;
			case 23:
				day = 23;
				break;
			case 24:
				day = 24;
				break;
			case 25:
				day = 25;
				break;
			case 26:
				day = 26;
				break;
			case 27:
				day = 27;
				break;
			case 28:
				day = 28;
				break;
			case 29:
				day = 29;
				break;
			case 30:
				day = 30;
				break;
			default:
				cout << "[-]?? ????? ?? ?????? ????????!";
				return 0;
			}
			break;
		case 5:
			month = "???";
			cout << "[-]??????? ????? ???: ";
			cin >> menu;
			system("CLS");
			switch (menu)
			{
			case 1:
				day = 1;
				break;
			case 2:
				day = 2;
				break;
			case 3:
				day = 3;
				break;
			case 4:
				day = 4;
				break;
			case 5:
				day = 5;
				break;
			case 6:
				day = 6;
				break;
			case 7:
				day = 7;
				break;
			case 8:
				day = 8;
				break;
			case 9:
				day = 9;
				break;
			case 10:
				day = 10;
				break;
			case 11:
				day = 11;
				break;
			case 12:
				day = 12;
				break;
			case 13:
				day = 13;
				break;
			case 14:
				day = 14;
				break;
			case 15:
				day = 15;
				break;
			case 16:
				day = 16;
				break;
			case 17:
				day = 17;
				break;
			case 18:
				day = 18;
				break;
			case 19:
				day = 19;
				break;
			case 20:
				day = 20;
				break;
			case 21:
				day = 21;
				break;
			case 22:
				day = 22;
				break;
			case 23:
				day = 23;
				break;
			case 24:
				day = 24;
				break;
			case 25:
				day = 25;
				break;
			case 26:
				day = 26;
				break;
			case 27:
				day = 27;
				break;
			case 28:
				day = 28;
				break;
			case 29:
				day = 29;
				break;
			case 30:
				day = 30;
				break;
			case 31:
				day = 31;
			default:
				cout << "[-]?? ????? ?? ?????? ????????!";
				return 0;
			}
			break;
		case 6:
			month = "????";
			cout << "[-]??????? ????? ???: ";
			cin >> menu;
			system("CLS");
			switch (menu)
			{
			case 1:
				day = 1;
				break;
			case 2:
				day = 2;
				break;
			case 3:
				day = 3;
				break;
			case 4:
				day = 4;
				break;
			case 5:
				day = 5;
				break;
			case 6:
				day = 6;
				break;
			case 7:
				day = 7;
				break;
			case 8:
				day = 8;
				break;
			case 9:
				day = 9;
				break;
			case 10:
				day = 10;
				break;
			case 11:
				day = 11;
				break;
			case 12:
				day = 12;
				break;
			case 13:
				day = 13;
				break;
			case 14:
				day = 14;
				break;
			case 15:
				day = 15;
				break;
			case 16:
				day = 16;
				break;
			case 17:
				day = 17;
				break;
			case 18:
				day = 18;
				break;
			case 19:
				day = 19;
				break;
			case 20:
				day = 20;
				break;
			case 21:
				day = 21;
				break;
			case 22:
				day = 22;
				break;
			case 23:
				day = 23;
				break;
			case 24:
				day = 24;
				break;
			case 25:
				day = 25;
				break;
			case 26:
				day = 26;
				break;
			case 27:
				day = 27;
				break;
			case 28:
				day = 28;
				break;
			case 29:
				day = 29;
				break;
			case 30:
				day = 30;
				break;
			default:
				cout << "[-]?? ????? ?? ?????? ????????!";
				return 0;
			}
			break;
		case 7:
			month = "????";
			cout << "[-]??????? ????? ???: ";
			cin >> menu;
			system("CLS");
			switch (menu)
			{
			case 1:
				day = 1;
				break;
			case 2:
				day = 2;
				break;
			case 3:
				day = 3;
				break;
			case 4:
				day = 4;
				break;
			case 5:
				day = 5;
				break;
			case 6:
				day = 6;
				break;
			case 7:
				day = 7;
				break;
			case 8:
				day = 8;
				break;
			case 9:
				day = 9;
				break;
			case 10:
				day = 10;
				break;
			case 11:
				day = 11;
				break;
			case 12:
				day = 12;
				break;
			case 13:
				day = 13;
				break;
			case 14:
				day = 14;
				break;
			case 15:
				day = 15;
				break;
			case 16:
				day = 16;
				break;
			case 17:
				day = 17;
				break;
			case 18:
				day = 18;
				break;
			case 19:
				day = 19;
				break;
			case 20:
				day = 20;
				break;
			case 21:
				day = 21;
				break;
			case 22:
				day = 22;
				break;
			case 23:
				day = 23;
				break;
			case 24:
				day = 24;
				break;
			case 25:
				day = 25;
				break;
			case 26:
				day = 26;
				break;
			case 27:
				day = 27;
				break;
			case 28:
				day = 28;
				break;
			case 29:
				day = 29;
				break;
			case 30:
				day = 30;
				break;
			case 31:
				day = 31;
			default:
				cout << "[-]?? ????? ?? ?????? ????????!";
				return 0;
			}
			break;
		case 8:
			month = "???????";
			cout << "[-]??????? ????? ???: ";
			cin >> menu;
			system("CLS");
			switch (menu)
			{
			case 1:
				day = 1;
				break;
			case 2:
				day = 2;
				break;
			case 3:
				day = 3;
				break;
			case 4:
				day = 4;
				break;
			case 5:
				day = 5;
				break;
			case 6:
				day = 6;
				break;
			case 7:
				day = 7;
				break;
			case 8:
				day = 8;
				break;
			case 9:
				day = 9;
				break;
			case 10:
				day = 10;
				break;
			case 11:
				day = 11;
				break;
			case 12:
				day = 12;
				break;
			case 13:
				day = 13;
				break;
			case 14:
				day = 14;
				break;
			case 15:
				day = 15;
				break;
			case 16:
				day = 16;
				break;
			case 17:
				day = 17;
				break;
			case 18:
				day = 18;
				break;
			case 19:
				day = 19;
				break;
			case 20:
				day = 20;
				break;
			case 21:
				day = 21;
				break;
			case 22:
				day = 22;
				break;
			case 23:
				day = 23;
				break;
			case 24:
				day = 24;
				break;
			case 25:
				day = 25;
				break;
			case 26:
				day = 26;
				break;
			case 27:
				day = 27;
				break;
			case 28:
				day = 28;
				break;
			case 29:
				day = 29;
				break;
			case 30:
				day = 30;
				break;
			case 31:
				day = 31;
			default:
				cout << "[-]?? ????? ?? ?????? ????????!";
				return 0;
			}
			break;
		case 9:
			month = "????????";
			cout << "[-]??????? ????? ???: ";
			cin >> menu;
			system("CLS");
			switch (menu)
			{
			case 1:
				day = 1;
				break;
			case 2:
				day = 2;
				break;
			case 3:
				day = 3;
				break;
			case 4:
				day = 4;
				break;
			case 5:
				day = 5;
				break;
			case 6:
				day = 6;
				break;
			case 7:
				day = 7;
				break;
			case 8:
				day = 8;
				break;
			case 9:
				day = 9;
				break;
			case 10:
				day = 10;
				break;
			case 11:
				day = 11;
				break;
			case 12:
				day = 12;
				break;
			case 13:
				day = 13;
				break;
			case 14:
				day = 14;
				break;
			case 15:
				day = 15;
				break;
			case 16:
				day = 16;
				break;
			case 17:
				day = 17;
				break;
			case 18:
				day = 18;
				break;
			case 19:
				day = 19;
				break;
			case 20:
				day = 20;
				break;
			case 21:
				day = 21;
				break;
			case 22:
				day = 22;
				break;
			case 23:
				day = 23;
				break;
			case 24:
				day = 24;
				break;
			case 25:
				day = 25;
				break;
			case 26:
				day = 26;
				break;
			case 27:
				day = 27;
				break;
			case 28:
				day = 28;
				break;
			case 29:
				day = 29;
				break;
			case 30:
				day = 30;
				break;
			default:
				cout << "[-]?? ????? ?? ?????? ????????!";
				return 0;
			}
			break;
		case 10:
			month = "???????";
			cout << "[-]??????? ????? ???: ";
			cin >> menu;
			system("CLS");
			switch (menu)
			{
			case 1:
				day = 1;
				break;
			case 2:
				day = 2;
				break;
			case 3:
				day = 3;
				break;
			case 4:
				day = 4;
				break;
			case 5:
				day = 5;
				break;
			case 6:
				day = 6;
				break;
			case 7:
				day = 7;
				break;
			case 8:
				day = 8;
				break;
			case 9:
				day = 9;
				break;
			case 10:
				day = 10;
				break;
			case 11:
				day = 11;
				break;
			case 12:
				day = 12;
				break;
			case 13:
				day = 13;
				break;
			case 14:
				day = 14;
				break;
			case 15:
				day = 15;
				break;
			case 16:
				day = 16;
				break;
			case 17:
				day = 17;
				break;
			case 18:
				day = 18;
				break;
			case 19:
				day = 19;
				break;
			case 20:
				day = 20;
				break;
			case 21:
				day = 21;
				break;
			case 22:
				day = 22;
				break;
			case 23:
				day = 23;
				break;
			case 24:
				day = 24;
				break;
			case 25:
				day = 25;
				break;
			case 26:
				day = 26;
				break;
			case 27:
				day = 27;
				break;
			case 28:
				day = 28;
				break;
			case 29:
				day = 29;
				break;
			case 30:
				day = 30;
				break;
			case 31:
				day = 31;
			default:
				cout << "[-]?? ????? ?? ?????? ????????!";
				return 0;
			}
			break;
		case 11:
			month = "??????";
			cout << "[-]??????? ????? ???: ";
			cin >> menu;
			system("CLS");
			switch (menu)
			{
			case 1:
				day = 1;
				break;
			case 2:
				day = 2;
				break;
			case 3:
				day = 3;
				break;
			case 4:
				day = 4;
				break;
			case 5:
				day = 5;
				break;
			case 6:
				day = 6;
				break;
			case 7:
				day = 7;
				break;
			case 8:
				day = 8;
				break;
			case 9:
				day = 9;
				break;
			case 10:
				day = 10;
				break;
			case 11:
				day = 11;
				break;
			case 12:
				day = 12;
				break;
			case 13:
				day = 13;
				break;
			case 14:
				day = 14;
				break;
			case 15:
				day = 15;
				break;
			case 16:
				day = 16;
				break;
			case 17:
				day = 17;
				break;
			case 18:
				day = 18;
				break;
			case 19:
				day = 19;
				break;
			case 20:
				day = 20;
				break;
			case 21:
				day = 21;
				break;
			case 22:
				day = 22;
				break;
			case 23:
				day = 23;
				break;
			case 24:
				day = 24;
				break;
			case 25:
				day = 25;
				break;
			case 26:
				day = 26;
				break;
			case 27:
				day = 27;
				break;
			case 28:
				day = 28;
				break;
			case 29:
				day = 29;
				break;
			case 30:
				day = 30;
				break;
			default:
				cout << "[-]?? ????? ?? ?????? ????????!";
				return 0;
			}
			break;
		case 12:
			month = "???????";
			cout << "[-]??????? ????? ???: ";
			cin >> menu;
			system("CLS");
			switch (menu)
			{
			case 1:
				day = 1;
				break;
			case 2:
				day = 2;
				break;
			case 3:
				day = 3;
				break;
			case 4:
				day = 4;
				break;
			case 5:
				day = 5;
				break;
			case 6:
				day = 6;
				break;
			case 7:
				day = 7;
				break;
			case 8:
				day = 8;
				break;
			case 9:
				day = 9;
				break;
			case 10:
				day = 10;
				break;
			case 11:
				day = 11;
				break;
			case 12:
				day = 12;
				break;
			case 13:
				day = 13;
				break;
			case 14:
				day = 14;
				break;
			case 15:
				day = 15;
				break;
			case 16:
				day = 16;
				break;
			case 17:
				day = 17;
				break;
			case 18:
				day = 18;
				break;
			case 19:
				day = 19;
				break;
			case 20:
				day = 20;
				break;
			case 21:
				day = 21;
				break;
			case 22:
				day = 22;
				break;
			case 23:
				day = 23;
				break;
			case 24:
				day = 24;
				break;
			case 25:
				day = 25;
				break;
			case 26:
				day = 26;
				break;
			case 27:
				day = 27;
				break;
			case 28:
				day = 28;
				break;
			case 29:
				day = 29;
				break;
			case 30:
				day = 30;
				break;
			case 31:
				day = 31;
			default:
				cout << "[-]?? ????? ?? ?????? ????????!";
				return 0;
			}
			break;
		default:
			cout << "[-]?? ????? ?? ?????? ????????!";
			return 0;
		}
		cout << "[-]?????????: " << day << " " << month;
		break;
	case 2:
		cout << "[-]?? ????? ?? ?????????";
		return 0;
		break;
	default:
		cout << "[-]?? ????? ?? ?????? ????????!";
		return 0;
	}
	return 0;
}