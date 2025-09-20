#include <iostream>
#include <cmath>
void leernotas(float notas[][10], int n_estudiantes, int n_notas) {
    for (int i = 0; i < n_estudiantes; i++) {
        std::cout << "Ingrese las notas del estudiante " << i + 1 << ":\n";
        for (int j = 0; j < n_notas; j++) {
            std::cout << "  Nota " << j + 1 << ": ";
            std::cin >> notas[i][j];
        }
    }
}
float calcularmax(float notas[], int n) {
    float max = notas[0];
    for (int i = 1; i < n; i++) {
        if (notas[i] > max) max = notas[i];
    }
    return max;
}
int main() {
    int n_estudiantes, n_notas;
    const int MAX_ESTUDIANTES = 100;
    const int MAX_NOTAS = 10;
    float notas[MAX_ESTUDIANTES][MAX_NOTAS];
    std::cout << "¿Cuántos estudiantes vas a ingresar? ";
    std::cin >> n_estudiantes;
    if (n_estudiantes > MAX_ESTUDIANTES) n_estudiantes = MAX_ESTUDIANTES;
    std::cout << "¿Cuántas notas va a ingresar para cada estudiante? ";
    std::cin >> n_notas;
    if (n_notas > MAX_NOTAS) n_notas = MAX_NOTAS;
    leernotas(notas, n_estudiantes, n_notas);
    for (int i = 0; i < n_estudiantes; i++) {
        float suma = 0;
        std::cout << "Notas del estudiante " << i + 1 << ": ";
        for (int j = 0; j < n_notas; j++) {
            std::cout << notas[i][j] << " ";
            suma += notas[i][j];
        }
        float promedio = (n_notas > 0) ? suma / n_notas : 0;
        std::cout << "| Promedio: " << promedio << std::endl;
    }
    return 0;
}


