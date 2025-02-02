#include "neuronio.hpp"
#include <algorithm>

class NeuronioReLU: public Neuronio{
    public:
    double predict(const vector<double> entradas) const{
        double somatorio = 0;
        for (int i = 0; i<entradas.size(); ++i){
            somatorio+=entradas[i]*pesos[i];
        }
        return std::max(0.0, (somatorio+bias));        
    }

    NeuronioReLU(const vector<double>& pesos, double bias) : Neuronio(pesos, bias){}
};