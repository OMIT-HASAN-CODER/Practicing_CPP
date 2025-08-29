#include <iostream>
#include <string>

using namespace std;

int main() {
    string days[7] = {"Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
    string meals[3] = {"breakfast", "lunch", "dinner"};
    int cupsPerMeals = 2;

    for (int i = 0; i < 7; i++) {
        cout << "In " << days[i] << endl;

        for (int j = 0; j < 3; j++) {
            cout << "Brewing " << cupsPerMeals << " cups of tea for " << meals[j] << endl;
        }

        cout << endl;
    }

    return 0;
}
