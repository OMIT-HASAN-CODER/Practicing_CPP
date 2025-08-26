#include <iostream>
#include <string>

using namespace std;

int main() {
    int userPrice;

    cout << "Tell your price for the tea: " << endl;
    cin >> userPrice;

    float shopKeeperPrice = (float)userPrice;
    shopKeeperPrice += userPrice * 0.1;

    int roundedPrice = (int) shopKeeperPrice;

    cout << "Base price: " << userPrice << endl;
    cout << "Price after 10% increase (float): " << shopKeeperPrice << endl;
    cout << "Rounded price (int after casting): " << roundedPrice << endl;

    return 0;
}