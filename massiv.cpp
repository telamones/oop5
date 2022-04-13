#include "massiv.h"

double* Array(int n) {
    return new double [n];
}

void arrfill(double* arr, int n) {
    for (int i=0; i<n; i++) {
        arr [i] = i;
    }
}

void arrcout (double* arr, int n) {
    for (int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
}

void arrdel (double* arr) {
    delete [] arr;
}