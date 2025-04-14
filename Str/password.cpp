#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool isValidPassword(string password) {
    if (password.length() != 16) {
        return false;
    }

    if (!isupper(password[0])) {
        return false; // First character must be uppercase
    }

    bool hasUpper = false, hasLower = false, hasDigit = false, hasSpecial = false;
    string specialChars = "!@#$%^&*";

    for (char ch : password) {
        if (isupper(ch)) hasUpper = true;
        else if (islower(ch)) hasLower = true;
        else if (isdigit(ch)) hasDigit = true;
        else if (specialChars.find(ch) != string::npos) hasSpecial = true;
    }

    return hasUpper && hasLower && hasDigit && hasSpecial;
}

int main() {
    string password;
    cout << "Enter password: ";
    cin >> password;

    if (isValidPassword(password)) {
        cout << "Valid password ✅" << endl;
    } else {
        cout << "Invalid password ❌" << endl;
    }

    return 0;
}