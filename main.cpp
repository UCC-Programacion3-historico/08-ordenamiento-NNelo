#include <iostream>
#include <fstream>
#include <string>
#include "BubbleSort.h"
#include "QuickSort.h"

using namespace std;

int main() {
    string line;
    string *palabras = new string[2014323]();
    ifstream miArchivo("../dicc.txt");
    unsigned long indice = 0;

    if (miArchivo.is_open()) {
        while (getline(miArchivo, line)) {
            palabras[indice] = line;
            indice++;
        }

//        bubbleSort<string>(palabras, indice);
        quickSort(palabras, 0, indice - 1);

        for (unsigned long i = 0; i < indice; i++)
            cout << palabras[i] << endl;

    } else
        cout << "No se pudo leer el archivo.";
    return 0;
}

//head -n10 dic.txt>dicc.txt