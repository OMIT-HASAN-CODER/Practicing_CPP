#include <iostream>
#include <string>

using namespace std;

int main() {
    string teaTypes[6] = {"Oolong Tea", "Orange Tea", "Green Tea", "Herbal Tea", "Black Tea", "No Tea"};

    for (int i = 0; i < 6; i++) {
        if (teaTypes[i] == "Herbal Tea") {
            cout << "Skipping " << teaTypes[i] << endl;
            continue;
        }

        if (teaTypes[i] == "No Tea") {
            cout << "Stop serving tea." << endl;
            break;
        }

        cout << "Serving " << teaTypes[i] << endl;
    }

    return 0;
}