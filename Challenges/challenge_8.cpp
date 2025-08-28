#include <iostream>
#include <string>
using namespace std;

int main() {
    string favoriteTea;

    cout << "Enter your favorite tea name: " << endl;
    cin >> favoriteTea;

    if (favoriteTea == "Oolong") {
        cout << "You have excellent taste!" << endl;
    }

    return 0;
}