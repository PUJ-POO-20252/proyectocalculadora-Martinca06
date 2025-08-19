#include <iostream>

#include "Calculadora.h"
#include "Matematicas.h"

// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    int x = 10;
    int y = 4;

    int resultado_suma = sumar(x, y);
    int resultado_resta = restar(x, y);
    int resultado_div = dividir(x, y);

    std::cout << "suma: " << resultado_suma << std::endl;
    std::cout << "resta: " << resultado_resta << std::endl;
    std::cout << "dividir: " << resultado_div << std::endl;

    return 0;
}
