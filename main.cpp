#include <iostream>
#include "Matematicas.h"


// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.

int main() {
    int x, y;
    std::cout << "Enter 2 numbers: ";
    std::cin >> x >> y;

    int resultado_suma = sumar(x, y);
    int resultado_resta = restar(x, y);
    int resultado_div = dividir(x, y);
    int resutado_multi = multiplicar(x, y);

    std::cout << "suma: " << resultado_suma << std::endl;
    std::cout << "resta: " << resultado_resta << std::endl;
    std::cout << "dividir: " << resultado_div << std::endl;
    std::cout << "multiplicar: " << resutado_multi << std::endl;


    return 0;

}

