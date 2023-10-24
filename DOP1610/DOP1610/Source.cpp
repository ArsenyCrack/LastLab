#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    string name;
    int score = 0;
    char answer1, answer2, answer3, answer4, answer5, answer6, answer7, answer8, answer9, answer10;
    int start = 0;

    cout << "Велкам ту КВИЗ!\n\n";
    cout << "Начнем!" << endl;
    cout << " " << endl;
    cout << " " << endl;
    cout << " " << endl;
    cout << "Если ты готов(а) к игре, то введи 1. Иначе - 2" << endl;
    cin >> start;
    if (start == 2) {
        cout << "GAME OVER :(";
        return 0;
    }
    // Question 1
    cout << "1) Столица Мексики?\n";
    cout << "a) Мексико\nb) Мехико\nc) Мехика\n";
    cout << "Введи свой ответ (a/b/c): ";
    cin >> answer1;
    if (answer1 == 'b') {
        cout << "Абсолютно верно!\n";
        score++;
    }
    else {
        cout << "Мимо! Верно: b) Мехико.\n";
    }
    cout << endl;

    // Question 2
    cout << "2) Кто создал Git?\n";
    cout << "a) Л. Торвальдс\nb) Л. Армстронг\nc) С. Джобс\n\n";
    cout << "Введи свой ответ (a / b / c) : ";
    cin >> answer2;
    if (answer2 == 'a') {
        cout << "Да ты вундеркинд!\n";
        score++;
    }
    else {
        cout << "Не в этот раз... Верно: a) Л. Торвальдс.\n";
    }
    cout << endl;

    // Question 3
    cout << "3) Кто из известных певиц НЕ получал Оскар?\n";
    cout << "a) Адель\nb) Леди Гага\nc) Тейлор Свифт\n\n";
    cout << "Enter your answer (a/b/c): ";
    cin >> answer3;
    if (answer3 == 'c') {
        cout << "Верно!\n";
        score++;
    }
    else {
        cout << "Да нам ваш балл этот и не нужОн! Верно: c) Тейлор Свифт\n";
    }
    cout << endl;
    // Question 4
    cout << "4) Победитель Лиги Чемпионов сезона 2022/2023?\n";
    cout << "a) Манчестер Юнайтед\nb) Манчестер Сити\nc) Манчестер Челси\n\n";
    cout << "Введи свой ответ (a/b/c): ";
    cin >> answer4;
    if (answer4 == 'b') {
        cout << "Абсолютно верно!\n";
        score++;
    }
    else {
        cout << "Не повезло в футболе - повезет в с++! Верно: b) Манчестер Сити.\n";
    }
    cout << endl;

    // Question 5
    cout << "5) VS Code -  это...\n";
    cout << "a) Текстовый редактор\nb) Язык программирования\nc) Не знаем таких...\n\n";
    cout << "Введи свой ответ (a / b / c) : ";
    cin >> answer5;
    if (answer5 == 'a') {
        cout << "Да ты компьютерщик!\n";
        score++;
    }
    else {
        cout << "Кто-то тест по ТП прогулял... Верно: a) Л.Торвальдс.\n";
    }
    cout << endl;

    // Question 6
    cout << "6) Vanechkin, do you speak English?\n";
    cout << "a) Yes, I do, my dear teacher! I speak English very well...\nb) Cho?!\nc) Yes, I does, my dear teacher! I speak English very well...\n\n";
    cout << "Enter your answer (a/b/c): ";
    cin >> answer6;
    if (answer6 == 'a') {
        cout << "U'RE GREAT OMG!\n";
        score++;
    }
    else {
        cout << "DWAAAAA!!! Верно: a) Yes, I do, my dear teacher! I speak English very well...\n";
    }
    cout << endl;
    // Question 7
    cout << "7) колангб - какое слово зашифровано?\n";
    cout << "a) капризы\nb) уровень\nc) задание\n\n";
    cout << "Введи свой ответ (a/b/c): ";
    cin >> answer7;
    if (answer7 == 'b') {
        cout << "Абсолютно верно!\n";
        score++;
    }
    else {
        cout << "мимо! Верно: b) Уровень (да, тяжко).\n";
    }
    cout << endl;

    // Question 8
    cout << "8) 2 + 2 = ...\n";
    cout << "a) 22\nb) Ч\nc) 4\n\n";
    cout << "Введи свой ответ (a / b / c) : ";
    cin >> answer8;
    if (answer8 == 'c') {
        cout << "Да ты вундеркинд!\n";
        score++;
    }
    else {
        cout << "Да ты гуманитарий!... Верно: c) 4\n";
    }
    cout << endl;

    // Question 9
    cout << "9) Сколько?\n";
    cout << "a) Потому что\nb) Да\nc) Верный ответ\n\n";
    cout << "Введи свой ответ (a/b/c): ";
    cin >> answer9;
    if (answer9 == 'c') {
        cout << "Верно!\n";
        score++;
    }
    else {
        cout << "Сегодня в казино не идем. Верно: c) Верный ответ\n";
    }
    cout << endl;
    // Question 10
    cout << "10) ?\n";
    cout << "a) Манчестер Юнайтед\nb) Манчестер Сити\nc) Манчестер Челси\n\n";
    cout << "Введи свой ответ (a/b/c): ";
    cin >> answer10;
    if (answer10 == 'b') {
        cout << "Абсолютно верно!\n";
        score++;
    }
    else {
        cout << "Не повезло в футболе - повезет в с++! Верно: b) Манчестер Сити.\n";
    }
    cout << endl;
    // Display final score and message
    cout << "You scored " << score << " out of 10.\n";
    cout << "Поздравляем! Ты выиграл(а) " << score << " кредитов!";
    return 0;
}