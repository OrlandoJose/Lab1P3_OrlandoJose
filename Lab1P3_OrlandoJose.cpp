
#include <iostream>
using namespace std;
int main()
{
    double pesolibras, alturacm,pesokg,alturam;
    cout << "Ingrese el peso en libras: ";
    cin >> pesolibras;
    cout << "Ingrese la altura en centimetros: ";
    cin >> alturacm;
    pesokg = pesolibras / 2.2;
    alturam = alturacm / 100;
    cout << "El indice de masa corporal es: " << (pesokg)/(alturam*alturam);
    return 0;
}
