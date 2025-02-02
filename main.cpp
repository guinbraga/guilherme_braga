/* Implementar o caso de exemplo e mais 2 casos para demonstração. */
#include "neuronio_imp.hpp"
#include <iostream>

int main(){
    std::cout << "Demonstrando funcionamento com pesos e entradas do caso 2:" << std::endl;
    const vector<double> pesos1 = {0.2, 0.4};
    const vector<double> entr1 = {0.3, 2.0};
    double b1 = -0.5;
    Neuronio *n1 = new NeuronioReLU(pesos1, b1);
    std::cout << "Saída: " << n1->predict(entr1) << std::endl;

    const vector<double> pesos2 = {0.3, 0.54, 0.15, 0.9};
    const vector<double> entr2 = {0.3, 2.0, 0.31, 0.7};
    double b2 = 0.1;
    Neuronio *n2 = new NeuronioReLU(pesos2, b2);
    Neuronio *n3 = new NeuronioReLU(pesos2, -1.0);

    std::cout << "Demonstração com 4 pesos e 4 entradas escolhidos arbitrariamente:" << std::endl
    << "Saída: " << n2->predict(entr2) << std::endl;

    std::cout << "Demonstração com mesmos pesos e entradas do neuronio anterior, mas com bias = -1.0:"
    << std::endl << "Saída: " << n3->predict(entr2) << std::endl;

    std::cout << "Demonstração com alguns pesos e entradas negativos, bias 2.5" << std::endl;
    const vector<double> pesos3 = {-0.5, 0.4, -1.7, 3.0, -0.12};
    const vector<double> entr3 = {0.3, 0.47, 0.74, -0.1, -0.15};
    double b3 = 2.5;
    Neuronio* n4 = new NeuronioReLU(pesos3, b3);
    std::cout << "Saída: " << n4->predict(entr3) << std::endl;
}