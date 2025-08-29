#include <iostream>
#include <string>

using namespace std;

int main() {
    string response;

    do {
        cout << "Do you want to add more suger to your tea (type 'enough' to stop)?" << endl;
        cin >> response;

        if (response == "enough") {
            cout << "Ok, no more suger for your tea." << endl;
            break;
        }
    } while (true);

    return 0;
}