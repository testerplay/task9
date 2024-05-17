#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

string doubleCharacter(const char C, const string& S) {
    string result;
    for (char ch : S) {
        result += ch;
        if (ch == C) {
            result += ch;
        }
    }
    return result;
}

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    char C;
    string S;

    cout << "Введите символ C: ";
    cin >> C;

    cout << "Введите строку S: ";
    cin.ignore();  // Игнорируем символ новой строки после ввода символа
    getline(cin, S);

    string doubledString = doubleCharacter(C, S);

    cout << "Результирующая строка: " << doubledString << endl;

    return 0;
}
