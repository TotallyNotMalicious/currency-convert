#include <iostream>

using std::cout;
using std::cin;

int main() {
    int choice;

    cout << "Enter your choice\n\n1: Convert USD to EUR\n2: Convert EUR to USD\n\nOption: ";
    cin >> choice;

    switch(choice) {
        case 1:
            int usd;

            cout << "USD: ";
            cin >> usd;
            cout << "EUR: " << usd * 0.82 << "\n";
            break;
        case 2:
            int eur;

            cout << "EUR: ";
            cin >> eur;
            cout << "USD: " << eur * 1.21 << "\n";
            break;
        default:
            cout << "Invalid choice. Please choose either 1 or 2\n";
            break;
    }
    system("pause");
}
