#include <iostream>

using namespace std;

int main() {
    int teaBags;

    cout << "Enter the number of tea bags you have: " << endl;
    cin >> teaBags;

    if (teaBags < 20) {
        teaBags += 10;
    }

    cout << "Your total tea bags are: " << teaBags << endl;

    return 0;
}