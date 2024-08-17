#include <iostream>
#include "Functions.h" // Asegúrate de incluir el archivo de cabecera que contiene las declaraciones de tus funciones

using namespace std;

int main() {
    // Pruebas para sumaIterativa
    cout << "Prueba sumaIterativa:" << endl;
    cout << "sumaIterativa(5): " << sumaIterativa(5) << " (esperado: 15)" << endl;
    cout << "sumaIterativa(10): " << sumaIterativa(10) << " (esperado: 55)" << endl;
    cout << "sumaIterativa(1): " << sumaIterativa(1) << " (esperado: 1)" << endl;

    // Pruebas para sumaRecursiva
    cout << "Prueba sumaRecursiva:" << endl;
    cout << "sumaRecursiva(5): " << sumaRecursiva(5) << " (esperado: 15)" << endl;
    cout << "sumaRecursiva(10): " << sumaRecursiva(10) << " (esperado: 55)" << endl;
    cout << "sumaRecursiva(1): " << sumaRecursiva(1) << " (esperado: 1)" << endl;

    // Pruebas para sumaDirecta
    cout << "Prueba sumaDirecta:" << endl;
    cout << "sumaDirecta(5): " << sumaDirecta(5) << " (esperado: 15)" << endl;
    cout << "sumaDirecta(10): " << sumaDirecta(10) << " (esperado: 55)" << endl;
    cout << "sumaDirecta(1): " << sumaDirecta(1) << " (esperado: 1)" << endl;

    // Pruebas para OTresNMasUnoRecursiva
    cout << "Prueba OTresNMasUnoRecursiva:" << endl;
    cout << "OTresNMasUnoRecursiva(6): " << OTresNMasUnoRecursiva(6) << " (esperado: 8)" << endl;
    cout << "OTresNMasUnoRecursiva(19): " << OTresNMasUnoRecursiva(19) << " (esperado: 20)" << endl;
    cout << "OTresNMasUnoRecursiva(27): " << OTresNMasUnoRecursiva(27) << " (esperado: 111)" << endl;

    // Pruebas para OTresNMasUnoIterativa
    cout << "Prueba OTresNMasUnoIterativa:" << endl;
    cout << "OTresNMasUnoIterativa(6): " << OTresNMasUnoIterativa(6) << " (esperado: 8)" << endl;
    cout << "OTresNMasUnoIterativa(19): " << OTresNMasUnoIterativa(19) << " (esperado: 20)" << endl;
    cout << "OTresNMasUnoIterativa(27): " << OTresNMasUnoIterativa(27) << " (esperado: 111)" << endl;

    return 0;
}
