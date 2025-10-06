//Elabore programas que muestre un menú de productos y retorne el precio del producto seleccionado:
//Programa 2: Utilice switch

#include <iostream>
using namespace std;

int main() {
    int opcion;
    do {
        cout << "===Menú===" << endl;
        cout << "1) Torta" << endl;
        cout << "2) Palomitas" << endl;
        cout << "3) Agua" << endl;
        cout << "4) Salir" << endl;

        cout << "Selecciona el producto: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Tortas: $45" << endl;
                break;
            case 2:
                cout << "Palomitas: $30" << endl;
                break;
            case 3:
                cout << "Aguas 600ml: $15" << endl;
                break;
            case 4:
                cout << "Saliendo del menú..." << endl;
                break;
            default:
                cout << "Opción inválida. Intenta de nuevo." << endl;
        }
    } while (opcion != 4);

    return 0;
}
