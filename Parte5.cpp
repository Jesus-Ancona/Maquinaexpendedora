#include <iostream>
#include <string>

using namespace std;

void chocolatesSubMenu() {
    char opcion;
    
    cout << "Chocolates disponibles:" << endl;
    cout << "A. Kitkats" << endl;
    cout << "B. M&Ms" << endl;
    cout << "C. Hershey's" << endl;
    cout << "Ingrese su producto deseado: ";
    cin >> opcion;
    
    if (opcion == 'A' || opcion == 'a') {
        // Submenú de Kitkats
        cout << "Kitkats disponibles:" << endl;
        cout << "1. Clásico" << endl;
        cout << "2. Dark" << endl;
        cout << "3. White" << endl;
        cout << "4. Chunky" << endl;
        cout << "Ingrese su producto deseado: ";
        cin >> opcion;
        
        if (opcion == '1') {
            cout << "Expulsando: Kitkat clasico" << endl;
        } else if (opcion == '2') {
            cout << "Expulsando: Kitkat dark" << endl;
        } else if (opcion == '3') {
            cout << "Expulsando: Kitkat white" << endl;
        } else if (opcion == '4') {
            cout << "Expulsando: Kitkat chunky" << endl;
        } else {
            cout << "Su producto no existe, reiniciando..." << endl;
        }
    } else if (opcion == 'B' || opcion == 'b') {
        // Submenú de M&Ms
        cout << "M&Ms disponibles:" << endl;
        cout << "1. Clasicos" << endl;
        cout << "2. De cacahuate" << endl;
        cout << "Ingrese su producto deseado: ";
        cin >> opcion;

        if (opcion == '1') {
            cout << "Expulsando: M&Ms clasicos" << endl;
        } else if (opcion == '2') {
            cout << "Expulsando: M&Ms de cacahuate" << endl;
        } else {
            cout << "Su producto no existe, reiniciando..." << endl;
        }
    } else if (opcion == 'C' || opcion == 'c') {
        // Submenú de Hershey's
        cout << "Hershey's disponibles:" << endl;
        cout << "1. Oscuro" << endl;
        cout << "2. Blanco" << endl;
        cout << "Ingrese su producto deseado: ";
        cin >> opcion;

        if (opcion == '1') {
            cout << "Expulsando Hershey's oscuro" << endl;
        } else if (opcion == '2') {
            cout << "Expulsando Hershey's blanco" << endl;
        } else {
            cout << "Su producto no existe, reiniciando..." << endl;
        }
    } else {
        cout << "Su producto no existe, reiniciando..." << endl;
    }

    cout << "Gracias por comprar" << endl;
}

void refrescosSubMenu() {
    char opcion;

    cout << "Refrescos disponibles:" << endl;
    cout << "A. Coca" << endl;
    cout << "B. Coca light" << endl;
    cout << "C. Manzanita" << endl;
    cout << "D. Sprite" << endl;
    cout << "Ingrese su producto deseado: ";
    cin >> opcion;

    if (opcion == 'A'|| opcion == 'a') {
        cout << "Expulsando: Coca" << endl;
    } else if (opcion == 'B'|| opcion == 'b') {
        cout << "Expulsando: Coca light" << endl;
    } else if (opcion == 'C'|| opcion == 'c') {
        cout << "Expulsando: Manzanita" << endl;
    } else if (opcion == 'D' || opcion == 'd') {
        cout << "Expulsando: Sprite" << endl;
    } else {
        cout << "Su producto no existe, reiniciando..." << endl;
    }

    cout << "Gracias por comprar" << endl;
}

int main() {
    char opcion;

    while (true) {
        cout << "Bienvenido a la maquina expendedora" << endl;
        cout << "----------Menu----------" << endl;
        cout << "1. Chocolates" << endl;
        cout << "2. Refrescos" << endl;
        cout << "3. Papas" << endl;
        cout << "C. Salir" << endl;
        cout << "Ingrese su producto deseado: ";
        cin >> opcion;
        
        if (opcion == '1') {
            chocolatesSubMenu();
        } else if (opcion == '2') {
            refrescosSubMenu();
        } else if (opcion == '3') {
            cout << "Lo sentimos, no hay papas en este momento" << endl;
        } else if (opcion == 'C' || opcion == 'c') {
            cout << "Gracias, saliendo..." << endl;
            break;
        } else {
            cout << "Su producto no existe, reiniciando..." << endl;
        }
    }

    return 0;
}