#include <iostream>
#include <Windows.h>
#define clear system ("cls")
#define def system ("color 0F")
#define green system ("color 0A")
#define yellow system ("color 0E")
#define red system ("color 0C")
using namespace std;

int magaz(string& userLogin, string& userEmail, int& money);

int menu();

void userRegistration(bool& aut, string& userLogin, string& userPassword, string& userEmail) {
    clear;
    def;

    cout << "\t\t\t\t\t\t\t\t\t\t[-] Придумайте логин: \n";
    cout << "\t\t\t\t\t\t\t\t\t\t[-] Введите: ";
    cin >> userLogin;

    cout << "\n\t\t\t\t\t\t\t\t\t\t[-] Придумайте пароль: \n";
    cout << "\t\t\t\t\t\t\t\t\t\t[-] Введите: ";
    cin >> userPassword;

    cout << "\n\t\t\t\t\t\t\t\t\t\t[-] Введите почту: \n";
    cout << "\t\t\t\t\t\t\t\t\t\t[-] Введите: ";
    cin >> userEmail;

    clear;
    def;
    green;
    cout << "\t\t\t\t\t\t\t\t\t\tВы успешно зарегистрировались!";
    Sleep(1500);
    aut = true;
}

int ovosh(int& kat, string& userLogin, string& userEmail, int& money) {
    clear;
    def;
    while (true) {
        cout << "\t\t\t\t\t\t\t\t\t\t[-] Логин: " << userLogin;
        cout << "\t[-] Баланс: " << money << "$" << "\n";
        cout << "\t\t\t\t\t\t\t\t\t\t[1] Яблоки сезонные 1 кг - 2$\n";
        cout << "\t\t\t\t\t\t\t\t\t\t[2] Лимон узбекский 260 грамм - 3$\n";
        cout << "\t\t\t\t\t\t\t\t\t\t[3] Гранат 1кг - 5$\n";
        cout << "\t\t\t\t\t\t\t\t\t\t[4] Помидоры на ветке красные 1кг - 3$\n";
        cout << "\t\t\t\t\t\t\t\t\t\t[5] Огурцы гладкие 1кг - 2$\n";
        cout << "\t\t\t\t\t\t\t\t\t\t[6] Салат Айсберг 1кг - 3$\n";
        cout << "\t\t\t\t\t\t\t\t\t\t[7] Перец красный сладкий - 4$\n";
        cout << "\t\t\t\t\t\t\t\t\t\t[8] Киви 1кг - 3$\n";
        cout << "\t\t\t\t\t\t\t\t\t\t[9] Укрон свежий 250г - 2$\n";
        cout << "\t\t\t\t\t\t\t\t\t\t[10] Вешенки 300г - 2$\n";
        cout << "\t\t\t\t\t\t\t\t\t\t[-] Введите 0, чтобы вернуться назад: ";
        int a;
        cin >> a;
        if (a == 0) {
            magaz(userLogin, userEmail, money);
        }

        if (a == 1) {
            if (money < 2) {
                clear;
                red;
                cout << "\t\t\t\t\t\t\t\t\t\tУ вас нехватает баланса!";
                Sleep(1200);
                magaz(userLogin, userEmail, money);
            }
            if (money >= 2) {
                money -= 2;
            }
        }
        else if (a == 2) {
            if (money < 3) {
                clear;
                red;
                cout << "\t\t\t\t\t\t\t\t\t\tУ вас нехватает баланса!";
                Sleep(1200);
                magaz(userLogin, userEmail, money);
            }
            if (money >= 3) {
                money -= 3;
            }
        }
        else if (a == 3) {
            if (money < 1) {
                clear;
                red;
                cout << "\t\t\t\t\t\t\t\t\t\tУ вас нехватает баланса!";
                Sleep(1200);
                magaz(userLogin, userEmail, money);
            }
            if (money >= 1) {
                money -= 1;
            }
        }
        else if (a == 4) {
            if (money < 5) {
                clear;
                red;
                cout << "\t\t\t\t\t\t\t\t\t\tУ вас нехватает баланса!";
                Sleep(1200);
                magaz(userLogin, userEmail, money);
            }
            if (money >= 5) {
                money -= 5;
            }
        }
        else if (a == 5) {
            if (money < 2) {
                clear;
                red;
                cout << "\t\t\t\t\t\t\t\t\t\tУ вас нехватает баланса!";
                Sleep(1200);
                magaz(userLogin, userEmail, money);
            }
            if (money >= 2) {
                money -= 2;
            }
        }
        else if (a == 6) {
            if (money < 3) {
                clear;
                red;
                cout << "\t\t\t\t\t\t\t\t\t\tУ вас нехватает баланса!";
                Sleep(1200);
                magaz(userLogin, userEmail, money);
            }
            if (money >= 3) {
                money -= 3;
            }
        }
        else if (a == 7) {
            if (money < 4) {
                clear;
                red;
                cout << "\t\t\t\t\t\t\t\t\t\tУ вас нехватает баланса!";
                Sleep(1200);
                magaz(userLogin, userEmail, money);
            }
            if (money >= 4) {
                money -= 4;
            }
        }
        else if (a == 8) {
            if (money < 3) {
                clear;
                red;
                cout << "\t\t\t\t\t\t\t\t\t\tУ вас нехватает баланса!";
                Sleep(1200);
                magaz(userLogin, userEmail, money);
            }
            if (money >= 3) {
                money -= 3;
            }
        }
        else if (a == 9) {
            if (money < 2) {
                clear;
                red;
                cout << "\t\t\t\t\t\t\t\t\t\tУ вас нехватает баланса!";
                Sleep(1200);
                magaz(userLogin, userEmail, money);
            }
            if (money >= 2) {
                money -= 2;
            }
        }
        else if (a == 10) {
            if (money < 2) {
                clear;
                red;
                cout << "\t\t\t\t\t\t\t\t\t\tУ вас нехватает баланса!";
                Sleep(1200);
                magaz(userLogin, userEmail, money);
            }
            if (money >= 2) {
                money -= 2;
            }
        }
        if (money <= 0) {
            clear;
            red;
            cout << "\t\t\t\t\t\t\t\t\t\tУ вас нехватает баланса!";
            Sleep(1200);
            magaz(userLogin, userEmail, money);
        }
        system("cls");
    }
    return 0;
}

int xleb(int& kat, string& userLogin, string& userEmail, int& money) {
    clear;
    def;
    while (true) {
        cout << "\t\t\t\t\t\t\t\t\t\t[-] Логин: " << userLogin;
        cout << "\t[-] Баланс: " << money << "$" << "\n";
        cout << "\t\t\t\t\t\t\t\t\t\t[1] Багет изысканный 250г - 1$\n";
        cout << "\t\t\t\t\t\t\t\t\t\t[2] Уголок яблочный 85г - 2$\n";
        cout << "\t\t\t\t\t\t\t\t\t\t[3] Батон нарезной высший сорт в нарезке 400г - 1$\n";
        cout << "\t\t\t\t\t\t\t\t\t\t[4] Хлеб ржаной край формовой пшеничной-ржаной в нарезке 300г - 1$\n";
        cout << "\t\t\t\t\t\t\t\t\t\t[5] Слойка конвертик с черникой 70г - 1$\n";
        cout << "\t\t\t\t\t\t\t\t\t\t[6] Круассаны мини с кремом какао 300г - 2$\n";
        cout << "\t\t\t\t\t\t\t\t\t\t[7] Сушки с маком 200г - 1$\n";
        cout << "\t\t\t\t\t\t\t\t\t\t[8] Сухарки с изюмом классические 300г - 3$\n";
        cout << "\t\t\t\t\t\t\t\t\t\t[9] Лаваш армянский 300г - 1$\n";
        cout << "\t\t\t\t\t\t\t\t\t\t[10] Тортилья оригинальная пшеничная 400г - 1$\n";
        cout << "\t\t\t\t\t\t\t\t\t\t[-] Введите 0, чтобы вернуться назад: ";
        int a;
        cin >> a;
        if (a == 0) {
            magaz(userLogin, userEmail, money);
        }


        if (a == 1) {
            if (money < 1) {
                clear;
                red;
                cout << "\t\t\t\t\t\t\t\t\t\tУ вас нехватает баланса!";
                Sleep(1200);
                magaz(userLogin, userEmail, money);
            }
            if (money >= 1) {
                money -= 1;
            }
        }
        else if (a == 2) {
            if (money < 2) {
                clear;
                red;
                cout << "\t\t\t\t\t\t\t\t\t\tУ вас нехватает баланса!";
                Sleep(1200);
                magaz(userLogin, userEmail, money);
            }
            if (money >= 2) {
                money -= 2;
            }
        }
        else if (a == 3) {
            if (money < 1) {
                clear;
                red;
                cout << "\t\t\t\t\t\t\t\t\t\tУ вас нехватает баланса!";
                Sleep(1200);
                magaz(userLogin, userEmail, money);
            }
            if (money >= 1) {
                money -= 1;
            }
        }
        else if (a == 4) {
            if (money < 1) {
                clear;
                red;
                cout << "\t\t\t\t\t\t\t\t\t\tУ вас нехватает баланса!";
                Sleep(1200);
                magaz(userLogin, userEmail, money);
            }
            if (money >= 1) {
                money -= 1;
            }
        }
        else if (a == 5) {
            if (money < 1) {
                clear;
                red;
                cout << "\t\t\t\t\t\t\t\t\t\tУ вас нехватает баланса!";
                Sleep(1200);
                magaz(userLogin, userEmail, money);
            }
            if (money >= 1) {
                money -= 1;
            }
        }
        else if (a == 6) {
            if (money < 2) {
                clear;
                red;
                cout << "\t\t\t\t\t\t\t\t\t\tУ вас нехватает баланса!";
                Sleep(1200);
                magaz(userLogin, userEmail, money);
            }
            if (money >= 2) {
                money -= 2;
            }
        }
        else if (a == 7) {
            if (money < 1) {
                clear;
                red;
                cout << "\t\t\t\t\t\t\t\t\t\tУ вас нехватает баланса!";
                Sleep(1200);
                magaz(userLogin, userEmail, money);
            }
            if (money >= 1) {
                money -= 1;
            }
        }
        else if (a == 8) {
            if (money < 3) {
                clear;
                red;
                cout << "\t\t\t\t\t\t\t\t\t\tУ вас нехватает баланса!";
                Sleep(1200);
                magaz(userLogin, userEmail, money);
            }
            if (money >= 3) {
                money -= 3;
            }
        }
        else if (a == 9) {
            if (money < 1) {
                clear;
                red;
                cout << "\t\t\t\t\t\t\t\t\t\tУ вас нехватает баланса!";
                Sleep(1200);
                magaz(userLogin, userEmail, money);
            }
            if (money >= 1) {
                money -= 1;
            }
        }
        else if (a == 10) {
            if (money < 1) {
                clear;
                red;
                cout << "\t\t\t\t\t\t\t\t\t\tУ вас нехватает баланса!";
                Sleep(1200);
                magaz(userLogin, userEmail, money);
            }
            if (money >= 1) {
                money -= 1;
            }
        }
        if (money <= 0) {
            clear;
            red;
            cout << "\t\t\t\t\t\t\t\t\t\tУ вас нехватает баланса!";
            Sleep(1200);
            magaz(userLogin, userEmail, money);
        }
        system("cls");
    }
    return 0;
}

int maso(int& kat, string& userLogin, string& userEmail, int& money) {
    clear;
    def;
    while (true) {
        cout << "\t\t\t\t\t\t\t\t\t\t[-] Логин: " << userLogin;
        cout << "\t[-] Баланс: " << money << "$" << "\n";
        cout << "\t\t\t\t\t\t\t\t\t\t[1] Окорок свиной без кости охлажденный ~1.3кг - 6$\n";
        cout << "\t\t\t\t\t\t\t\t\t\t[2] Голень куриная с кожей охлажденная ~800г - 3\n";
        cout << "\t\t\t\t\t\t\t\t\t\t[3] Печень куриная охлажденная 500г - 2$\n";
        cout << "\t\t\t\t\t\t\t\t\t\t[4] Язык говяжий охлажденный ~1кг - 10$\n";
        cout << "\t\t\t\t\t\t\t\t\t\t[5] Стейк говяжий Чак Ролл охлажденный 300г - 5$\n";
        cout << "\t\t\t\t\t\t\t\t\t\t[6] Сердце куриное замороженное ~800г - 3$\n";
        cout << "\t\t\t\t\t\t\t\t\t\t[7] Фарш из мяса индейки охлажденный 500г - 3$\n";
        cout << "\t\t\t\t\t\t\t\t\t\t[8] Тушка цыпленка-бройлера охлажденная ~1,6кг - 5$\n";
        cout << "\t\t\t\t\t\t\t\t\t\t[9] Фарш говяжий Халяль ~400г - 2$\n";
        cout << "\t\t\t\t\t\t\t\t\t\t[10] Эскалоп из филе индейки охлажденный 600г - 4$\n";
        cout << "\t\t\t\t\t\t\t\t\t\t[-] Введите 0, чтобы вернуться назад: ";
        int a;
        cin >> a;
        if (a == 0) {
            magaz(userLogin, userEmail, money);
        }

        if (a == 1) {
            if (money < 6) {
                clear;
                red;
                cout << "\t\t\t\t\t\t\t\t\t\tУ вас нехватает баланса!";
                Sleep(1200);
                magaz(userLogin, userEmail, money);
            }
            if (money >= 6) {
                money -= 6;
            }
        }
        else if (a == 2) {
            if (money < 3) {
                clear;
                red;
                cout << "\t\t\t\t\t\t\t\t\t\tУ вас нехватает баланса!";
                Sleep(1200);
                magaz(userLogin, userEmail, money);
            }
            if (money >= 3) {
                money -= 3;
            }
        }
        else if (a == 3) {
            if (money < 2) {
                clear;
                red;
                cout << "\t\t\t\t\t\t\t\t\t\tУ вас нехватает баланса!";
                Sleep(1200);
                magaz(userLogin, userEmail, money);
            }
            if (money >= 2) {
                money -= 2;
            }
        }
        else if (a == 4) {
            if (money < 10) {
                clear;
                red;
                cout << "\t\t\t\t\t\t\t\t\t\tУ вас нехватает баланса!";
                Sleep(1200);
                magaz(userLogin, userEmail, money);
            }
            if (money >= 10) {
                money -= 10;
            }
        }
        else if (a == 5) {
            if (money < 5) {
                clear;
                red;
                cout << "\t\t\t\t\t\t\t\t\t\tУ вас нехватает баланса!";
                Sleep(1200);
                magaz(userLogin, userEmail, money);
            }
            if (money >= 5) {
                money -= 5;
            }
        }
        else if (a == 6) {
            if (money < 3) {
                clear;
                red;
                cout << "\t\t\t\t\t\t\t\t\t\tУ вас нехватает баланса!";
                Sleep(1200);
                magaz(userLogin, userEmail, money);
            }
            if (money >= 3) {
                money -= 3;
            }
        }
        else if (a == 7) {
            if (money < 3) {
                clear;
                red;
                cout << "\t\t\t\t\t\t\t\t\t\tУ вас нехватает баланса!";
                Sleep(1200);
                magaz(userLogin, userEmail, money);
            }
            if (money >= 3) {
                money -= 3;
            }
        }
        else if (a == 8) {
            if (money < 5) {
                clear;
                red;
                cout << "\t\t\t\t\t\t\t\t\t\tУ вас нехватает баланса!";
                Sleep(1200);
                magaz(userLogin, userEmail, money);
            }
            if (money >= 5) {
                money -= 5;
            }
        }
        else if (a == 9) {
            if (money < 2) {
                clear;
                red;
                cout << "\t\t\t\t\t\t\t\t\t\tУ вас нехватает баланса!";
                Sleep(1200);
                magaz(userLogin, userEmail, money);
            }
            if (money >= 2) {
                money -= 2;
            }
        }
        else if (a == 10) {
            if (money < 4) {
                clear;
                red;
                cout << "\t\t\t\t\t\t\t\t\t\tУ вас нехватает баланса!";
                Sleep(1200);
                magaz(userLogin, userEmail, money);
            }
            if (money >= 4) {
                money -= 4;
            }
        }
        if (money <= 0) {
            clear;
            red;
            cout << "\t\t\t\t\t\t\t\t\t\tУ вас нехватает баланса!";
            Sleep(1200);
            magaz(userLogin, userEmail, money);
        }
        system("cls");
    }
    return 0;
}

int voda(int& kat, string& userLogin, string& userEmail, int& money) {
    clear;
    def;
    while (true) {
        cout << "\t\t\t\t\t\t\t\t\t\t[-] Логин: " << userLogin;
        cout << "\t[-] Баланс: " << money << "$" << "\n";
        cout << "\t\t\t\t\t\t\t\t\t\t[1] Вода питьевая негазированная 5л - 1$\n";
        cout << "\t\t\t\t\t\t\t\t\t\t[2] Сок яблочный 2л - 2$\n";
        cout << "\t\t\t\t\t\t\t\t\t\t[3] Нектар вишнёвый 1л - 1$\n";
        cout << "\t\t\t\t\t\t\t\t\t\t[4] Холодный чай лимонный 2л - 2$\n";
        cout << "\t\t\t\t\t\t\t\t\t\t[5] Квас хлебный 2л - 1$\n";
        cout << "\t\t\t\t\t\t\t\t\t\t[6] Квас солодовый 1л - 1$\n";
        cout << "\t\t\t\t\t\t\t\t\t\t[7] Напиток энергетический газированный безалкогольный 0,5л - 1$\n";
        cout << "\t\t\t\t\t\t\t\t\t\t[8] Пиво светлое безалкогольное жестяная банка - 1$\n";
        cout << "\t\t\t\t\t\t\t\t\t\t[9] Вино безалкогольное белое сухое 0,75л - 11$\n";
        cout << "\t\t\t\t\t\t\t\t\t\t[10] Вода питьевая газированная 1.5л - 1$\n";
        cout << "\t\t\t\t\t\t\t\t\t\t[-] Введите 0, чтобы вернуться назад: ";
        int a;
        cin >> a;
        if (a == 0) {
            magaz(userLogin, userEmail, money);
        }

        if (a == 1) {
            if (money < 1) {
                clear;
                red;
                cout << "\t\t\t\t\t\t\t\t\t\tУ вас нехватает баланса!";
                Sleep(1200);
                magaz(userLogin, userEmail, money);
            }
            if (money >= 1) {
                money -= 1;
            }
        }
        else if (a == 2) {
            if (money < 2) {
                clear;
                red;
                cout << "\t\t\t\t\t\t\t\t\t\tУ вас нехватает баланса!";
                Sleep(1200);
                magaz(userLogin, userEmail, money);
            }
            if (money >= 2) {
                money -= 2;
            }
        }
        else if (a == 3) {
            if (money < 1) {
                clear;
                red;
                cout << "\t\t\t\t\t\t\t\t\t\tУ вас нехватает баланса!";
                Sleep(1200);
                magaz(userLogin, userEmail, money);
            }
            if (money >= 1) {
                money -= 1;
            }
        }
        else if (a == 4) {
            if (money < 2) {
                clear;
                red;
                cout << "\t\t\t\t\t\t\t\t\t\tУ вас нехватает баланса!";
                Sleep(1200);
                magaz(userLogin, userEmail, money);
            }
            if (money >= 2) {
                money -= 2;
            }
        }
        else if (a == 5) {
            if (money < 1) {
                clear;
                red;
                cout << "\t\t\t\t\t\t\t\t\t\tУ вас нехватает баланса!";
                Sleep(1200);
                magaz(userLogin, userEmail, money);
            }
            if (money >= 1) {
                money -= 1;
            }
        }
        else if (a == 6) {
            if (money < 1) {
                clear;
                red;
                cout << "\t\t\t\t\t\t\t\t\t\tУ вас нехватает баланса!";
                Sleep(1200);
                magaz(userLogin, userEmail, money);
            }
            if (money >= 1) {
                money -= 1;
            }
        }
        else if (a == 7) {
            if (money < 1) {
                clear;
                red;
                cout << "\t\t\t\t\t\t\t\t\t\tУ вас нехватает баланса!";
                Sleep(1200);
                magaz(userLogin, userEmail, money);
            }
            if (money >= 1) {
                money -= 1;
            }
        }
        else if (a == 8) {
            if (money < 1) {
                clear;
                red;
                cout << "\t\t\t\t\t\t\t\t\t\tУ вас нехватает баланса!";
                Sleep(1200);
                magaz(userLogin, userEmail, money);
            }
            if (money >= 1) {
                money -= 1;
            }
        }
        else if (a == 9) {
            if (money < 11) {
                clear;
                red;
                cout << "\t\t\t\t\t\t\t\t\t\tУ вас нехватает баланса!";
                Sleep(1200);
                magaz(userLogin, userEmail, money);
            }
            if (money >= 11) {
                money -= 11;
            }
        }
        else if (a == 10) {
            if (money < 1) {
                clear;
                red;
                cout << "\t\t\t\t\t\t\t\t\t\tУ вас нехватает баланса!";
                Sleep(1200);
                magaz(userLogin, userEmail, money);
            }
            if (money >= 1) {
                money -= 1;
            }
        }
        if (money <= 0) {
            clear;
            red;
            cout << "\t\t\t\t\t\t\t\t\t\tУ вас нехватает баланса!";
            Sleep(1200);
            magaz(userLogin, userEmail, money);
        }
        system("cls");
    }
    return 0;
}

int baklea(int& kat, string& userLogin, string& userEmail, int& money) {
    clear;
    def;
    while (true) {
        cout << "\t\t\t\t\t\t\t\t\t\t[-] Логин: " << userLogin;
        cout << "\t[-] Баланс: " << money << "$" << "\n";
        cout << "\t\t\t\t\t\t\t\t\t\t[1] Крупа гречневая ядрица 900г - 3$\n";
        cout << "\t\t\t\t\t\t\t\t\t\t[2] Булгур 500г - 2$\n";
        cout << "\t\t\t\t\t\t\t\t\t\t[3] Крупа манная 800г - 1$\n";
        cout << "\t\t\t\t\t\t\t\t\t\t[4] Рис Басмати пропаренный длиннозерный 5кг - 12$\n";
        cout << "\t\t\t\t\t\t\t\t\t\t[5] Макаронные изделия Перья рифленые 500г - 1$\n";
        cout << "\t\t\t\t\t\t\t\t\t\t[6] Геркулес овсяные хлопья 500г - 1$\n";
        cout << "\t\t\t\t\t\t\t\t\t\t[7] Мука пшеничная высший сорт 1кг - 1$\n";
        cout << "\t\t\t\t\t\t\t\t\t\t[8] Вода пищевая 500г - 1$\n";
        cout << "\t\t\t\t\t\t\t\t\t\t[9] Лапша со вкусом говядины быстрого приготовления - 1$\n";
        cout << "\t\t\t\t\t\t\t\t\t\t[10] Подсолнечное масло рафинированное 1.8л - 5$\n";
        cout << "\t\t\t\t\t\t\t\t\t\t[-] Введите 0, чтобы вернуться назад: ";
        int a;
        cin >> a;
        if (a == 0) {
            magaz(userLogin, userEmail, money);
        }

        if (a == 1) {
            if (money < 3) {
                clear;
                red;
                cout << "\t\t\t\t\t\t\t\t\t\tУ вас нехватает баланса!";
                Sleep(1200);
                magaz(userLogin, userEmail, money);
            }
            if (money >= 3) {
                money -= 3;
            }
        }
        else if (a == 2) {
            if (money < 2) {
                clear;
                red;
                cout << "\t\t\t\t\t\t\t\t\t\tУ вас нехватает баланса!";
                Sleep(1200);
                magaz(userLogin, userEmail, money);
            }
            if (money >= 2) {
                money -= 2;
            }
        }
        else if (a == 3) {
            if (money < 1) {
                clear;
                red;
                cout << "\t\t\t\t\t\t\t\t\t\tУ вас нехватает баланса!";
                Sleep(1200);
                magaz(userLogin, userEmail, money);
            }
            if (money >= 1) {
                money -= 1;
            }
        }
        else if (a == 4) {
            if (money < 12) {
                clear;
                red;
                cout << "\t\t\t\t\t\t\t\t\t\tУ вас нехватает баланса!";
                Sleep(1200);
                magaz(userLogin, userEmail, money);
            }
            if (money >= 12) {
                money -= 12;
            }
        }
        else if (a == 5) {
            if (money < 1) {
                clear;
                red;
                cout << "\t\t\t\t\t\t\t\t\t\tУ вас нехватает баланса!";
                Sleep(1200);
                magaz(userLogin, userEmail, money);
            }
            if (money >= 1) {
                money -= 1;
            }
        }
        else if (a == 6) {
            if (money < 1) {
                clear;
                red;
                cout << "\t\t\t\t\t\t\t\t\t\tУ вас нехватает баланса!";
                Sleep(1200);
                magaz(userLogin, userEmail, money);
            }
            if (money >= 1) {
                money -= 1;
            }
        }
        else if (a == 7) {
            if (money < 1) {
                clear;
                red;
                cout << "\t\t\t\t\t\t\t\t\t\tУ вас нехватает баланса!";
                Sleep(1200);
                magaz(userLogin, userEmail, money);
            }
            if (money >= 1) {
                money -= 1;
            }
        }
        else if (a == 8) {
            if (money < 1) {
                clear;
                red;
                cout << "\t\t\t\t\t\t\t\t\t\tУ вас нехватает баланса!";
                Sleep(1200);
                magaz(userLogin, userEmail, money);
            }
            if (money >= 1) {
                money -= 1;
            }
        }
        else if (a == 9) {
            if (money < 1) {
                clear;
                red;
                cout << "\t\t\t\t\t\t\t\t\t\tУ вас нехватает баланса!";
                Sleep(1200);
                magaz(userLogin, userEmail, money);
            }
            if (money >= 1) {
                money -= 1;
            }
        }
        else if (a == 10) {
            if (money < 5) {
                clear;
                red;
                cout << "\t\t\t\t\t\t\t\t\t\tУ вас нехватает баланса!";
                Sleep(1200);
                magaz(userLogin, userEmail, money);
            }
            if (money >= 5) {
                money -= 5;
            }
        }
        if (money <= 0) {
            clear;
            red;
            cout << "\t\t\t\t\t\t\t\t\t\tУ вас нехватает баланса!";
            Sleep(1200);
            magaz(userLogin, userEmail, money);
        }
        system("cls");
    }
    return 0;
}

int alko(int& kat, string& userLogin, string& userEmail, int& money) {
    clear;
    def;
    while (true) {
        cout << "\t\t\t\t\t\t\t\t\t\t[-] Логин: " << userLogin;
        cout << "\t[-] Баланс: " << money << "$" << "\n";
        cout << "\t\t\t\t\t\t\t\t\t\t[1] Вино стол.кр.сух. 1л - 3$\n";
        cout << "\t\t\t\t\t\t\t\t\t\t[2] Виски не менее 3 лет купажир. 0.7л - 11$\n";
        cout << "\t\t\t\t\t\t\t\t\t\t[3] Водка Кедровая 0.5л - 4$\n";
        cout << "\t\t\t\t\t\t\t\t\t\t[4] Текила 0.7л - 12$\n";
        cout << "\t\t\t\t\t\t\t\t\t\t[5] Пиво светл.пшенич. 0.5л - 2$\n";
        cout << "\t\t\t\t\t\t\t\t\t\t[6] Коньяк 5 лет 0.25л - 3$\n";
        cout << "\t\t\t\t\t\t\t\t\t\t[7] Бренди 0.5л - 15$\n";
        cout << "\t\t\t\t\t\t\t\t\t\t[8] Виски 4 года зерновой 1л - 28$\n";
        cout << "\t\t\t\t\t\t\t\t\t\t[9] Ликер 0.7л - 13$\n";
        cout << "\t\t\t\t\t\t\t\t\t\t[10] Ром выдержанный 3 года 0.7л - 13$\n";
        cout << "\t\t\t\t\t\t\t\t\t\t[-] Введите 0, чтобы вернуться назад: ";
        int a;
        cin >> a;
        if (a == 0) {
            magaz(userLogin, userEmail, money);
        }

        if (a == 1) {
            if (money < 3) {
                clear;
                red;
                cout << "\t\t\t\t\t\t\t\t\t\tУ вас нехватает баланса!";
                Sleep(1200);
                magaz(userLogin, userEmail, money);
            }
            if (money >= 3) {
                money -= 3;
            }
        }
        else if (a == 2) {
            if (money < 11) {
                clear;
                red;
                cout << "\t\t\t\t\t\t\t\t\t\tУ вас нехватает баланса!";
                Sleep(1200);
                magaz(userLogin, userEmail, money);
            }
            if (money >= 11) {
                money -= 11;
            }
        }
        else if (a == 3) {
            if (money < 4) {
                clear;
                red;
                cout << "\t\t\t\t\t\t\t\t\t\tУ вас нехватает баланса!";
                Sleep(1200);
                magaz(userLogin, userEmail, money);
            }
            if (money >= 4) {
                money -= 4;
            }
        }
        else if (a == 4) {
            if (money < 12) {
                clear;
                red;
                cout << "\t\t\t\t\t\t\t\t\t\tУ вас нехватает баланса!";
                Sleep(1200);
                magaz(userLogin, userEmail, money);
            }
            if (money >= 12) {
                money -= 12;
            }
        }
        else if (a == 5) {
            if (money < 2) {
                clear;
                red;
                cout << "\t\t\t\t\t\t\t\t\t\tУ вас нехватает баланса!";
                Sleep(1200);
                magaz(userLogin, userEmail, money);
            }
            if (money >= 2) {
                money -= 2;
            }
        }
        else if (a == 6) {
            if (money < 3) {
                clear;
                red;
                cout << "\t\t\t\t\t\t\t\t\t\tУ вас нехватает баланса!";
                Sleep(1200);
                magaz(userLogin, userEmail, money);
            }
            if (money >= 3) {
                money -= 3;
            }
        }
        else if (a == 7) {
            if (money < 15) {
                clear;
                red;
                cout << "\t\t\t\t\t\t\t\t\t\tУ вас нехватает баланса!";
                Sleep(1200);
                magaz(userLogin, userEmail, money);
            }
            if (money >= 15) {
                money -= 15;
            }
        }
        else if (a == 8) {
            if (money < 28) {
                clear;
                red;
                cout << "\t\t\t\t\t\t\t\t\t\tУ вас нехватает баланса!";
                Sleep(1200);
                magaz(userLogin, userEmail, money);
            }
            if (money >= 28) {
                money -= 28;
            }
        }
        else if (a == 9) {
            if (money < 13) {
                clear;
                red;
                cout << "\t\t\t\t\t\t\t\t\t\tУ вас нехватает баланса!";
                Sleep(1200);
                magaz(userLogin, userEmail, money);
            }
            if (money >= 13) {
                money -= 13;
            }
        }
        else if (a == 10) {
            if (money < 13) {
                clear;
                red;
                cout << "\t\t\t\t\t\t\t\t\t\tУ вас нехватает баланса!";
                Sleep(1200);
                magaz(userLogin, userEmail, money);
            }
            if (money >= 13) {
                money -= 13;
            }
        }
        if (money <= 0) {
            clear;
            red;
            cout << "\t\t\t\t\t\t\t\t\t\tУ вас нехватает баланса!";
            Sleep(1200);
            magaz(userLogin, userEmail, money);
        }
        system("cls");
    }
    return 0;
}

int slakoe(int& kat, string& userLogin, string& userEmail, int& money) {
    clear;
    def;
    while (true) {
        cout << "\t\t\t\t\t\t\t\t\t\t[-] Логин: " << userLogin;
        cout << "\t[-] Баланс: " << money << "$" << "\n";
        cout << "\t\t\t\t\t\t\t\t\t\t[1] Шоколадные конфеты молочные с хрустящей вафлей 169г - 1$\n";
        cout << "\t\t\t\t\t\t\t\t\t\t[2] Шоколадный батончик 180г - 2$\n";
        cout << "\t\t\t\t\t\t\t\t\t\t[3] Шоколад с цельным лесным орехом 100г - 2$\n";
        cout << "\t\t\t\t\t\t\t\t\t\t[4] Печенье с апельсиновым джемом 360г - 2$\n";
        cout << "\t\t\t\t\t\t\t\t\t\t[5] Чизкейк ванильный глубокозамороженный 1, 25кг - 6$\n";
        cout << "\t\t\t\t\t\t\t\t\t\t[6] Набор пирожных Муравейник 420г - 2$\n";
        cout << "\t\t\t\t\t\t\t\t\t\t[7] Пирожное бисквитное с молочной начинкой 5 шт - 2$\n";
        cout << "\t\t\t\t\t\t\t\t\t\t[8] Торт вафельный с фундуком 270г - 2$\n";
        cout << "\t\t\t\t\t\t\t\t\t\t[9] Халва с арахисом 250г - 1$\n";
        cout << "\t\t\t\t\t\t\t\t\t\t[10] Драже с молочным шоколадом 130г - 1$\n";
        cout << "\t\t\t\t\t\t\t\t\t\t[-] Введите 0, чтобы вернуться назад: ";
        int a;
        cin >> a;
        if (a == 0) {
            magaz(userLogin, userEmail, money);
        }

        if (a == 1) {
            if (money < 1) {
                clear;
                red;
                cout << "\t\t\t\t\t\t\t\t\t\tУ вас нехватает баланса!";
                Sleep(1200);
                magaz(userLogin, userEmail, money);
            }
            if (money >= 1) {
                money -= 1;
            }
        }
        else if (a == 2) {
            if (money < 2) {
                clear;
                red;
                cout << "\t\t\t\t\t\t\t\t\t\tУ вас нехватает баланса!";
                Sleep(1200);
                magaz(userLogin, userEmail, money);
            }
            if (money >= 2) {
                money -= 2;
            }
        }
        else if (a == 3) {
            if (money < 2) {
                clear;
                red;
                cout << "\t\t\t\t\t\t\t\t\t\tУ вас нехватает баланса!";
                Sleep(1200);
                magaz(userLogin, userEmail, money);
            }
            if (money >= 2) {
                money -= 2;
            }
        }
        else if (a == 4) {
            if (money < 2) {
                clear;
                red;
                cout << "\t\t\t\t\t\t\t\t\t\tУ вас нехватает баланса!";
                Sleep(1200);
                magaz(userLogin, userEmail, money);
            }
            if (money >= 2) {
                money -= 2;
            }
        }
        else if (a == 5) {
            if (money < 6) {
                clear;
                red;
                cout << "\t\t\t\t\t\t\t\t\t\tУ вас нехватает баланса!";
                Sleep(1200);
                magaz(userLogin, userEmail, money);
            }
            if (money >= 6) {
                money -= 6;
            }
        }
        else if (a == 6) {
            if (money < 2) {
                clear;
                red;
                cout << "\t\t\t\t\t\t\t\t\t\tУ вас нехватает баланса!";
                Sleep(1200);
                magaz(userLogin, userEmail, money);
            }
            if (money >= 2) {
                money -= 2;
            }
        }
        else if (a == 7) {
            if (money < 2) {
                clear;
                red;
                cout << "\t\t\t\t\t\t\t\t\t\tУ вас нехватает баланса!";
                Sleep(1200);
                magaz(userLogin, userEmail, money);
            }
            if (money >= 2) {
                money -= 2;
            }
        }
        else if (a == 8) {
            if (money < 2) {
                clear;
                red;
                cout << "\t\t\t\t\t\t\t\t\t\tУ вас нехватает баланса!";
                Sleep(1200);
                magaz(userLogin, userEmail, money);
            }
            if (money >= 2) {
                money -= 2;
            }
        }
        else if (a == 9) {
            if (money < 1) {
                clear;
                red;
                cout << "\t\t\t\t\t\t\t\t\t\tУ вас нехватает баланса!";
                Sleep(1200);
                magaz(userLogin, userEmail, money);
            }
            if (money >= 1) {
                money -= 1;
            }
        }
        else if (a == 10) {
            if (money < 1) {
                clear;
                red;
                cout << "\t\t\t\t\t\t\t\t\t\tУ вас нехватает баланса!";
                Sleep(1200);
                magaz(userLogin, userEmail, money);
            }
            if (money >= 1) {
                money -= 1;
            }
        }
        if (money <= 0) {
            clear;
            red;
            cout << "\t\t\t\t\t\t\t\t\t\tУ вас нехватает баланса!";
            Sleep(1200);
            magaz(userLogin, userEmail, money);
        }
        system("cls");
    }
    return 0;
}

int magaz(string& userLogin, string& userEmail, int& money) {
    clear;
    def;
    cout << "\t\t\t\t\t\t\t\t\t\t__________Онлайн магазин KDR__________\n\n";
    cout << "\t\t\t\t\t\t\t\t\t\t[-] Логин: " << userLogin;
    cout << "\t[-] Почта: " << userEmail;
    cout << "\t[-] Баланс: " << money;
    cout << "\n\n\t\t\t\t\t\t\t\t\t\t[-] Выберите категорию: \n\n";
    cout << "\t\t\t\t\t\t\t\t\t\t [1] Овощи, фрукты: \n\n";
    cout << "\t\t\t\t\t\t\t\t\t\t [2] Хлеб, выпечка: \n\n";
    cout << "\t\t\t\t\t\t\t\t\t\t [3] Мясо, птица: \n\n";
    cout << "\t\t\t\t\t\t\t\t\t\t [4] Вода, напитки: \n\n";
    cout << "\t\t\t\t\t\t\t\t\t\t [5] Бакалея: \n\n";
    cout << "\t\t\t\t\t\t\t\t\t\t [6] Алкоголь: \n\n";
    cout << "\t\t\t\t\t\t\t\t\t\t [7] Сладости: \n\n";
    cout << "\t\t\t\t\t\t\t\t\t\t [0] Назад: \n\n";
    cout << "\t\t\t\t\t\t\t\t\t\t [-] Введите: ";
    int kat;
    cin >> kat;
    if (kat == 1) {
        ovosh(kat, userLogin, userEmail, money);
    }
    if (kat == 2) {
        xleb(kat, userLogin, userEmail, money);
    }
    if (kat == 3) {
        maso(kat, userLogin, userEmail, money);
    }
    if (kat == 4) {
        voda(kat, userLogin, userEmail, money);
    }
    if (kat == 5) {
        baklea(kat, userLogin, userEmail, money);
    }
    if (kat == 6) {
        alko(kat, userLogin, userEmail, money);
    }
    if (kat == 7) {
        slakoe(kat, userLogin, userEmail, money);
    }
    if (kat == 0) {
        kat = menu();
    }
    return 0;
}

int bonus(string& userLogin, int& money) {
    clear;
    def;
    cout << "\t\t\t\t\t\t\t\t\t\t[-] Логин: " << userLogin;
    cout << "\t[-] Баланс: " << money << "$";
    cout << "\n\n\t\t\t\t\t\t\t\t\t\tВведите промокод: ";
    string promo = "";
    cin >> promo;
    if (promo == "bonus228") {
        money = money + 228;
        clear;
        green;
        cout << "\t\t\t\t\t\t\t\t\t\tВам начислено 228$";
        Sleep(1500);
    }
    if (promo == "pokupki1000") {
        clear;
        green;
        money = money + 1000;
        cout << "\t\t\t\t\t\t\t\t\t\tВам начислено 1000$";
        Sleep(1500);
    }
    if (promo == "666") {
        clear;
        green;
        money = money + 666;
        cout << "\t\t\t\t\t\t\t\t\t\tВам начислено 666$";
        Sleep(1500);
    }
    return 0;
}

int menu() {
    string userLogin = "";
    string userPasword = "";
    string userEmail = "";
    bool auth = false;
    int menu;
    int money = 0;

    while (true) {
        clear;
        def;
        cout << "\t\t\t\t\t\t\t\t\t\t__________Онлайн магазин KDR__________\n\n";
        cout << "\t\t\t\t\t\t\t\t\t\t[-] Логин: " << userLogin;
        cout << "\t[-] Баланс: " << money << "$";
        cout << "\n\n\t\t\t\t\t\t\t\t\t\t[1] Войти\n\n";
        cout << "\t\t\t\t\t\t\t\t\t\t[2] Регистрация\n\n";
        cout << "\t\t\t\t\t\t\t\t\t\t[3] Промокод\n\n";
        cout << "\t\t\t\t\t\t\t\t\t\t[4] Выйти\n\n\n";
        cout << "\t\t\t\t\t\t\t\t\t\t[-] Введите: ";
        cin >> menu;

        switch (menu)
        {
        case 1:
            if (menu == 1 && auth) {
                magaz(userLogin, userEmail, money);
            }
            break;
        case 2:
            userRegistration(auth, userLogin, userPasword, userEmail);
            break;
        case 3:
            if (menu == 3 && auth) {
                bonus(userLogin, money);
            }
            break;
        case 4:
            exit(1);
        }
    }
}

int main() {
    setlocale(0, "");

    int a = 0;
    while (a != 4) {
        a = menu();
    }

    return 0;
}