#include <iostream>
#include <string>

using namespace std;

int main() {
    string typeOfTea = "\"Green Tea\".";
    float teaPricePerKG = 69.99;
    char teaGrade = 'A';

    cout << "The type of tea is " << typeOfTea << "\nThe price per kilogram is " << teaPricePerKG<< "$." << "\nThe grade of this tea is " << teaGrade << " grade." << endl;

    return 0;
}