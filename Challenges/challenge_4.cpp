#include <iostream>

using namespace std;

int main() {
    int teaPacks;
    double pricePerPack, totalPrice;

    cout << "Enter the number of tea packs: " << endl;
    cin >> teaPacks;
    cout << "Enter the price of tea packs: " << endl;
    cin >> pricePerPack;

    totalPrice = teaPacks * pricePerPack;

    // adding 10% tax to the total price
    totalPrice += totalPrice * 0.1;

    cout << "Total price is: " << totalPrice << endl;
}