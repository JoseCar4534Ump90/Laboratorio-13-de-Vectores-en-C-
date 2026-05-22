#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cout << "Ingrese la cantidad de estudiantes: ";
    cin >> n;

    // Creamos el vector de tamaño dinámico 'n'
    vector<double> notas(n);
    double suma = 0;

    // Registro de notas con validación
    for (int i = 0; i < n; i++) {
        do {
            cout << "Ingrese la nota del estudiante " << i + 1 << " (0-100): ";
            cin >> notas[i];
            
            if (notas[i] < 0 || notas[i] > 100) {
                cout << "Nota invalida. Intente de nuevo.\n";
            }
        } while (notas[i] < 0 || notas[i] > 100);
        
        suma += notas[i]; // Acumulamos para el promedio
    }

    // Inicializamos el mayor y menor con la primera nota
    double notaMayor = notas[0];
    double notaMenor = notas[0];

    cout << "\n--- Todas las notas almacenadas ---\n";
    for (int i = 0; i < n; i++) {
        cout << "Estudiante " << i + 1 << ": " << notas[i] << "\n";
        
        // Lógica para encontrar el mayor y menor
        if (notas[i] > notaMayor) notaMayor = notas[i];
        if (notas[i] < notaMenor) notaMenor = notas[i];
    }

    double promedio = suma / n;

    // Mostrar resultados finales
    cout << "\n====================================\n";
    cout << "        REPORTE DE NOTAS\n";
    cout << "====================================\n";
    cout << "Promedio general: " << promedio << "\n";
    cout << "Nota mayor:       " << notaMayor << "\n";
    cout << "Nota menor:       " << notaMenor << "\n";

    return 0;
}