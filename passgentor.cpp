#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

string generatePassword(int length) {
    string characters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()";
    string password = "";
    for (int i = 0; i < length; i++) {
        password += characters[rand() % characters.length()];
    }
    return password;
}

int main() {
    int length;
    cout << "Enter the length of each password: ";
    cin >> length;

    srand(time(0));

    cout << "Password: " << generatePassword(length) << endl;

    return 0;
}






