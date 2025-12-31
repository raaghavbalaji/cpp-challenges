#include <iostream>
using namespace std;

int main() {
    float n;
    cout << "Enter your basic salary: " << endl;
    cin >> n;

    if (n <= 0) {
        cout << "Invalid input" << endl;
        return 0;
    }

    float hra, da, gross;

    if (n <= 10000) {
        hra = 0.20 * n;
        da = 0.80 * n;
    }
    else if (n <= 20000) {
        hra = 0.25 * n;
        da = 0.90 * n;
    }
    else {
        hra = 0.30 * n;
        da = 0.95 * n;
    }

    gross = n + hra + da;
    cout << "Gross salary: " << gross << endl;

    return 0;
}