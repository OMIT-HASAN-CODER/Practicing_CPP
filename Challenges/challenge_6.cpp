#include <iostream>

using namespace std;

int main() {
    int cups;
    bool isMember;

    cout << "Enter the number of cups: " << endl;
    cin >> cups;
    cout << "Are you a member for more than a year (1 for yea and 0 for no)?" << endl;
    cin >> isMember;

    if (cups > 12 || isMember) {
        cout << "Congratulations! You will get a discount." << endl;
    } else {
        cout << "Sorry! You will not get a discount." << endl;
    }

    return 0;
}