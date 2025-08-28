#include <iostream>

using namespace std;

int main() {
    int age;

    cout << "Enter your age: " << endl;
    cin >> age;

    if (age > 18) {
        cout << "You can purchase the tea." << endl;
    } else {
        cout << "You are two young to purchase." << endl;
    }

    return 0;
}