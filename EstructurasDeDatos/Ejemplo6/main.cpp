#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
    int cuantos;
    cout << "¿Cuántos datos va a introducir? ";
    cin >> cuantos;
    if (cuantos <= 0)
        cout << "La cantidad no es válida";
    else {
        int llevo = 0;
        double suma = 0, dato, media = 0;
        while (llevo < cuantos) {
            cout << "Introduzca el dato " << llevo + 1 << ": ";
            cin >> dato;
            suma += dato;
            llevo++;
        }
        media = suma / cuantos;
        cout << "La media de los " << cuantos << " datos es " << media << "." << endl;
    }
    return 0;
}