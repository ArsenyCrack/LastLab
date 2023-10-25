#include <iostream>
#include "snake.h"
#include "CarRacing.h"
#include "quizTest.h"
#include "dice.h"
#include <conio.h>
#include "functions.h"
#include <Windows.h>

using namespace std;


int main(){
    SetConsoleOutputCP(CP_UTF8);
    do {
        system("cls");
        gotoxy(10, 5); cout << " -------------------------- ";
        gotoxy(10, 6); cout << " |        GAMECENTER        | ";
        gotoxy(10, 7); cout << " --------------------------";
        gotoxy(10, 9); cout << "1. CarRacing";
        gotoxy(10, 10); cout << "2. Snake";
        gotoxy(10, 11); cout << "3. Quiz";
        gotoxy(10, 12); cout << "4. Dice";
        gotoxy(10, 13); cout << "5. Exit";
        char op = _getche();

        if (op == '1') CarRacing();
        else if (op == '2') snake();
        else if (op == '3') quiz();
        else if (op == '4') dice();
        else if (op == '5') exit(0);
    } while (1);
}