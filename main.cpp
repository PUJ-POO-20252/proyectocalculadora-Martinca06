#include <iostream>
#include "Matematicas.h"

// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    int x = 10;
    int y = 4;

    int resultado_suma = sumar(x, y);
    int resultado_resta = restar(x, y);

    std::cout << "suma: " << resultado_suma << std::endl;
    std::cout << "resta: " << resultado_resta << std::endl;

    return 0;
}
