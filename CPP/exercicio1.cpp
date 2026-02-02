#include <iostream>

using namespace std;

int main() {
    const double conPesos=3712.5;
    const double conReal=5.37;
    const double conSoles=3.36;
    double pesos, reais, soles, dollars;

    cout << "Enter number of Colombian Pesos: ";
    cin >> pesos;
    cout << "Enter number of Brazilian Reais: ";
    cin >> reais;
    cout << "Enter number of Peruvian Soles: ";
    cin >> soles;
    
    dollars=(pesos/conPesos)+(reais/conReal)+(soles/conSoles);
    cout << "US Dollars = $" << dollars;
}