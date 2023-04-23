#include <iostream>
#include <string>

using namespace std;

void centerString(string str, int width) {
    int len = str.length();
    int blank = width - len;
    int half;

    if (blank >= 0) {
        if (blank % 2 == 0) {
            half = blank / 2;
            cout << "\nCentered string with blank on left and right ( | | is not count in the width):\n";

            cout << "|" << setw(half + len) << right << str << setw(half + 1) << "|" << endl;

            cout << "\nCentered string with space displayed as dots on left and right:\n";

            cout << string(half, '.') << str << string(half, '.') << endl;
        }
        else {
            half = (blank + 1) / 2;
            cout << "\nCentered string with blank on left and right ( | | is not count in the width):\n";

            cout << "|" << setw(half + len) << right << str << setw(half) << "|" << endl;

            cout << "\nCentered string with space displayed as dots on left and right:\n";

            cout << string(half, '.') << str << string(half - 1, '.') << endl;
        }
    }
    else {
        cout << "\nInvalid width or input width is too small for the input string." << endl;
    }
}


int main() {

    string inputString;
    int inpurWidth;


    cout << "Enter a string: ";
    getline(cin, inputString);

    cout << "\nEnter width: ";
    cin >> inpurWidth;

    centerString(inputString, inpurWidth);
}