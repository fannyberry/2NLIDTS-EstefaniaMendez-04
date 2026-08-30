// 2OLIDTS-EstefaniaMendez-04.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

const int numero_filas = 3;
const int numero_columnas = 3;

void imprimir_matriz(int matriz_local_imp[numero_filas][numero_columnas]) {
    printf("Los valores almacenados en la matriz de [%d][%d] son:\n", numero_filas, numero_columnas);
    for (int f = 0; f < numero_filas; f++) {
        for (int c = 0; c < numero_columnas; c++) {
            cout << matriz_local_imp[f][c] << " ";
        }
        cout << "\n";
    }
}

void capturar_valores(int matriz_local[numero_filas][numero_columnas]) {
    for (int f = 0; f < numero_filas; f++) {
        for (int c = 0; c < numero_columnas; c++) {
            printf("Ingrese los valores de la posicion [%d][%d]:\n", f, c);
            cin >> matriz_local[f][c];
        }
    }
}

int main() {
    int matriz_bidimensional[numero_filas][numero_columnas];
    cout << "Actividad 04 - Arreglo Bidimensional (Matriz de MxN)\n";
    capturar_valores(matriz_bidimensional);
    imprimir_matriz(matriz_bidimensional);
}
