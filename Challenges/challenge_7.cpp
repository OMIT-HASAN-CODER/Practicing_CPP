#include <iostream>

using namespace std;

int main() {
    int stock, choice;

    cout << "Enter stock value (some of available teas: 1=Green, 2=Black, 4=Oolong): " << endl;
    cin >> stock;
    cout << "Check tea availability (Enter 1 for Green, 2 for Black, 4 for Oolong): " << endl;
    cin >> choice;

    if (stock & choice) {
        cout << "Tea is in stock." << endl;
    } else {
        cout << "Tea is not in stock." << endl;
    }

    return 0;
}