#include <iostream>

using namespace std;

int main() {
    int teaBags;

    while (true) {
        cout << "Enter the number of tea bags you have left: " << endl;
        cin >> teaBags;

        if (teaBags == 0) {
            cout << "You are out of tea bags." << endl;
            break;
        }
    }

    return 0;
}