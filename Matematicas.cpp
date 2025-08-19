//
// Created by marti on 18/08/2025.
//

#include "Matematicas.h"
#include <iostream>
using namespace std;

int sumar(int a, int b) {
    return a + b;
}

int restar(int a, int b) {
    return a - b;
}

int dividir(int a, int b) {
    if (b == 0) {
        cout << "Error: no se puede dividir por 0" << endl;
        return 0; // para evitar crash
    }
    return a / b;
}
