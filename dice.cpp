#include <iostream>
#include <cstdlib>
#include <ctime>
#include <Windows.h>
using namespace std;

float credits = 10.0; // начальное количество кредитов

float rollDice(float bet, float chance, int left, int right, int &a) {
    float roll;

    roll = rand() % 999999;
    a = roll;
    if (roll >= left && roll <= right) { // если выпало число в соответствующем диапазоне, то игрок выиграл
        return bet * (100.0 / chance);
    } else { // иначе игрок проиграл
        return -bet;
    }
}

int dice() {
    SetConsoleOutputCP(CP_UTF8);
    system("cls");
    cout << endl << "Приветствую в игре DICE!" << endl;
    cout << "Здесь вы можете сорвать джекпот и разбогатеть!" << endl;
    cout << "Все, что нужно - это просто ставить ставки под опреденным шансом." << endl;
    cout << "Ставку, процент выигрыша, сторону (меньше или больше) можно писать через пробел." << endl;
    cout << "Например: 10 50 м , что означает: ставка 10 кредитов под 50% шансом на меньше" << endl << endl;
    cout << "псс.. если выбьешь шанс < 10%, то будет считаться что ты сорвал джекпот, попробуй!" << endl << endl;


    float result;
    srand(time(0)); // инициализация генератора случайных чисел

    while (true) {
        cout << "Текущий баланс: " << credits << " кредитов" << endl;

        float bet, chance;
        cout << "Введите ставку: ";
        cin >> bet;

        if (bet <= 0 || bet > credits) {
            cout << "Некорректная ставка!" << endl << endl;
            continue;
        }

        cout << "Введите шанс (от 0.1% до 99%): ";
        cin >> chance;

        if (chance < 0.1 || chance > 99) {
            cout << "Некорректный шанс!" << endl << endl;
            continue;
        }

        int left_less = 0, right_less = chance * 10000 - 1, \
        left_more = (100 - chance) * 10000, right_more = 999999;;

        string choice;
        cout << "Выберите 'меньше' (диапазон: от " << left_less << " до " << right_less\
        << "), или 'больше' (диапазон: от " << left_more << " до " << right_more << ")" << endl;
        cout << "Напишите просто м или б: " ;
        cin >> choice;
        cout << endl;

        int random_number = 0;
        if (choice == "меньше" || choice == "м"){
            result = rollDice(bet, chance, left_less, right_less, random_number);
        }else if (choice == "больше" || choice == "б"){
            result = rollDice(bet, chance, left_more, right_more, random_number);
        }else{
            cout << "Выберите корректно сторону!" << endl << endl;
            continue;
        }

        if (result > 0){
            if (chance < 10){
                cout << "\t\t\t\t" << "$$$$$$ JACKPOT $$$$$$" << endl;
                cout << "\t\t" << "Теперь вы официально лудоман! Поздравляю с заносом!" << endl;
                cout << "\t\t\t" << "!!!!! Вы выиграли " << result - bet << " кредитов !!!!!" << endl;
            }else{
                cout << "\t\t\t" << "!!!!! Вы выиграли " << result - bet << " кредитов !!!!!" << endl;
            }
            credits += result - bet;
        }else{
            cout << "\t\t\t" << "!!!!! Вы проиграли " << -result << " кредитов !!!!!" << endl;
            credits += result;
        }
        cout << "\t\t\t" << "Выпало число: " << random_number << endl;


        if (credits < 1) {
            credits = 10.0; // если кредитов осталось меньше 1, выдаем снова 10 кредитов
            cout << endl << "Кредиты закончились. Вам снова начислено 10 кредитов." << endl << endl;
        }else{
            cout << endl;
        }
    }

    return 0;
}
