#include <iostream>

using namespace std;

int main() {
    cout << "Calculating total tea bags required for making first 10 batches of tea.\nEach batch requires 2 tea bags---\n" << endl;

    for (int i = 1; i <= 10; i++) {
        int totalTeaBags = i * 2;
        cout << "For " << i << " batch of tea, you need " << totalTeaBags << " tea bags." << endl;
    }

    return 0;
}