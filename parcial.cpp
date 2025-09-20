#include <iostream>
#include <cmath>
int leernotas(){
    int n = 0;
    const int MAX_ESTUDIANTES = 100;
    float notas[MAX_ESTUDIANTES];

    char f;
    std::cout << "Desea ingresar manualmente? s/n";
    std::cin >> f;
    if (f == 's'){
        std::cout << "¿Cuántos estudiantes vas a ingresar?";
        std::cin >> n;
        if(n > MAX_ESTUDIANTES) n = MAX_ESTUDIANTES;
        for (int i = 0; i < n; i++){
            std::cout << "Ingrese la nota del estudiante " << i + 1 << ": ";
            std::cin >> notas[i];
        }
    } else {
        n = 5;
        notas[0] = 5.0;
        notas[1] = 4.2;
        notas[2] = 3.3;
        notas[3] = 2.0;
        notas[4] = 1.0;
    }
    // Aquí puedes retornar o procesar las notas según lo que necesites
    return 0;
}
//int calcularprom(){


