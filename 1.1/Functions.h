// Descripción: Calcula la sumatoria de 1 hasta n de manera iterativa
// Autor: Cyrce Salinas A01666121
// Fecha de creación: 16/09/2021
// Complejidad: O(n)

int sumaIterativa(int n) {
    int suma = 0;
    for (int i = 1; i <= n; i++) {
        suma += i;
    }
    return suma;
}

// Descripción: Calcula la sumatoria de 1 hasta n de manera recursiva
// Autor: Cyrce Salinas A01666121
// Fecha de creación: 16/09/2021
// Complejidad: O(n)

int sumaRecursiva(int n) {
    if (n == 1) {
        return 1;
    } else {
        return n + sumaRecursiva(n - 1);
    }
}

// Descripción: Calcula la sumatoria de 1 hasta n usando la fórmula directa n*(n+1)/2
// Autor: Cyrce Salinas A01666121
// Fecha de creación: 16/09/2021
// Complejidad: O(1)

int sumaDirecta(int n) {
    return n * (n + 1) / 2;
}

// Descripción: Calcula el número de pasos necesarios para llegar a 1 usando el método recursivo (3n+1)
// Autor: Cyrce Salinas A01666121
// Fecha de creación: 16/09/2021
// Complejidad: No calculada

int OTresNMasUnoRecursiva(int n) {
    if (n == 1) {
        return 0;
    } else if (n % 2 == 0) {
        return 1 + OTresNMasUnoRecursiva(n / 2);
    } else {
        return 1 + OTresNMasUnoRecursiva(3 * n + 1);
    }
}

// Descripción: Calcula el número de pasos necesarios para llegar a 1 usando el método iterativo (3n+1)
// Autor: Cyrce Salinas A01666121
// Fecha de creación: 16/09/2021
// Complejidad: No calculada

int OTresNMasUnoIterativa(int n) {
    int pasos = 0;
    while (n != 1) {
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = 3 * n + 1;
        }
        pasos++;
    }
    return pasos;
}