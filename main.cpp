#include "massiv.h"

int main() {
    string answer;
    answer = "yes";
    while (answer=="yes") {
        int n;
        cout << "enter the size of array: ";
        cin >> n;

        double* arr;
        arr = Array(n);
        arrfill (arr, n);
        arrcout (arr, n);
        arrdel (arr);

        cout << "create a new massiv? (yes/no)";
        cin >> answer;
    }
}