#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    string name;
    int score = 0;
    char answer1, answer2, answer3, answer4, answer5, answer6, answer7, answer8, answer9, answer10;
    int start = 0;

    cout << "������ �� ����!\n\n";
    cout << "������!" << endl;
    cout << " " << endl;
    cout << " " << endl;
    cout << " " << endl;
    cout << "���� �� �����(�) � ����, �� ����� 1. ����� - 2" << endl;
    cin >> start;
    if (start == 2) {
        cout << "GAME OVER :(";
        return 0;
    }
    // Question 1
    cout << "1) ������� �������?\n";
    cout << "a) �������\nb) ������\nc) ������\n";
    cout << "����� ���� ����� (a/b/c): ";
    cin >> answer1;
    if (answer1 == 'b') {
        cout << "��������� �����!\n";
        score++;
    }
    else {
        cout << "����! �����: b) ������.\n";
    }
    cout << endl;

    // Question 2
    cout << "2) ��� ������ Git?\n";
    cout << "a) �. ���������\nb) �. ���������\nc) �. �����\n\n";
    cout << "����� ���� ����� (a / b / c) : ";
    cin >> answer2;
    if (answer2 == 'a') {
        cout << "�� �� ����������!\n";
        score++;
    }
    else {
        cout << "�� � ���� ���... �����: a) �. ���������.\n";
    }
    cout << endl;

    // Question 3
    cout << "3) ��� �� ��������� ����� �� ������� �����?\n";
    cout << "a) �����\nb) ���� ����\nc) ������ �����\n\n";
    cout << "Enter your answer (a/b/c): ";
    cin >> answer3;
    if (answer3 == 'c') {
        cout << "�����!\n";
        score++;
    }
    else {
        cout << "�� ��� ��� ���� ���� � �� �����! �����: c) ������ �����\n";
    }
    cout << endl;
    // Question 4
    cout << "4) ���������� ���� ��������� ������ 2022/2023?\n";
    cout << "a) ��������� �������\nb) ��������� ����\nc) ��������� �����\n\n";
    cout << "����� ���� ����� (a/b/c): ";
    cin >> answer4;
    if (answer4 == 'b') {
        cout << "��������� �����!\n";
        score++;
    }
    else {
        cout << "�� ������� � ������� - ������� � �++! �����: b) ��������� ����.\n";
    }
    cout << endl;

    // Question 5
    cout << "5) VS Code -  ���...\n";
    cout << "a) ��������� ��������\nb) ���� ����������������\nc) �� ����� �����...\n\n";
    cout << "����� ���� ����� (a / b / c) : ";
    cin >> answer5;
    if (answer5 == 'a') {
        cout << "�� �� ������������!\n";
        score++;
    }
    else {
        cout << "���-�� ���� �� �� ��������... �����: a) �.���������.\n";
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
        cout << "DWAAAAA!!! �����: a) Yes, I do, my dear teacher! I speak English very well...\n";
    }
    cout << endl;
    // Question 7
    cout << "7) ������� - ����� ����� �����������?\n";
    cout << "a) �������\nb) �������\nc) �������\n\n";
    cout << "����� ���� ����� (a/b/c): ";
    cin >> answer7;
    if (answer7 == 'b') {
        cout << "��������� �����!\n";
        score++;
    }
    else {
        cout << "����! �����: b) ������� (��, �����).\n";
    }
    cout << endl;

    // Question 8
    cout << "8) 2 + 2 = ...\n";
    cout << "a) 22\nb) �\nc) 4\n\n";
    cout << "����� ���� ����� (a / b / c) : ";
    cin >> answer8;
    if (answer8 == 'c') {
        cout << "�� �� ����������!\n";
        score++;
    }
    else {
        cout << "�� �� �����������!... �����: c) 4\n";
    }
    cout << endl;

    // Question 9
    cout << "9) �������?\n";
    cout << "a) ������ ���\nb) ��\nc) ������ �����\n\n";
    cout << "����� ���� ����� (a/b/c): ";
    cin >> answer9;
    if (answer9 == 'c') {
        cout << "�����!\n";
        score++;
    }
    else {
        cout << "������� � ������ �� ����. �����: c) ������ �����\n";
    }
    cout << endl;
    // Question 10
    cout << "10) ?\n";
    cout << "a) ��������� �������\nb) ��������� ����\nc) ��������� �����\n\n";
    cout << "����� ���� ����� (a/b/c): ";
    cin >> answer10;
    if (answer10 == 'b') {
        cout << "��������� �����!\n";
        score++;
    }
    else {
        cout << "�� ������� � ������� - ������� � �++! �����: b) ��������� ����.\n";
    }
    cout << endl;
    // Display final score and message
    cout << "You scored " << score << " out of 10.\n";
    cout << "�����������! �� �������(�) " << score << " ��������!";
    return 0;
}