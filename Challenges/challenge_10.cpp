#include <iostream>

using namespace std;

int main() {
    double temperature;

    cout << "Enter the temperature of tea water in Celsius: " << endl;
    cin >> temperature;

    if (temperature > 100) {
        cout << "Too hot!" << endl;
    } else if (temperature >= 80 && temperature <= 100) {
        cout << "Perfect temperature." << endl;
    } else {
        cout << "Too cold!" << endl;
    }

    return 0;
}