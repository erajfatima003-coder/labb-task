#include <iostream>
using namespace std;

int main() {
    char arr[8];

    cout << "Enter 8 characters: ";
    for(int i = 0; i < 8; i++) {
        cin >> arr[i];
    }

    cout << "You entered: ";
    for(int i = 0; i < 8; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
