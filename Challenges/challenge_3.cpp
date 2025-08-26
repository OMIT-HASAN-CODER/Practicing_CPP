#include <iostream>
#include <string>

using namespace std;

int main() {
    string userFavoriteTea;
    int teaQuantity;

    cout << "What would you like to order in tea? or what is your favorite tea?" << endl;
    getline(cin, userFavoriteTea);

    cout << "How many cups of " << userFavoriteTea << " would you like to have today?" << endl;
    cin >> teaQuantity;

    if (teaQuantity > 1) {
        cout << "Here are your " << teaQuantity << " cups of " << userFavoriteTea << ", enjoy." << endl;
    }else {
        cout << "Here is your " << teaQuantity << " cup of " << userFavoriteTea << ", enjoy." << endl;
    }
}