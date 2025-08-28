#include <iostream>

using namespace std;

int main() {
    int choice;

    cout << "These are different tea brewing methods.\n";
    cout << "1. Boiling.\n";
    cout << "2. Steeping.\n";
    cout << "3. Iced Tea.\n";
    cout << "Choose your method: " << endl;
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "You choose Boiling." << endl;
            break;
        case 2:
            cout << "You choose Steeping." << endl;
            break;
        case 3:
            cout << "You choose Iced Tea." << endl;
            break;
        default:
            cout << "invalid choice." << endl;
            break;
    }

    return 0;
}