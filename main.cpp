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

        char op;
        cout<<"1 Bubble sort\n2 Quick Sort\n";
        cin>>op;
        switch (op){
            case '1':
                BubbleSort<string>(palabras, indice-1);
                break;
            case '2':
                QuickSort<string>(palabras, 0, indice-1);
                break;
            default:
                break;
        }

        cout<<"Ver arreglo?\n";
        cin>>op;
        if(op)
        for (unsigned long i = 0; i < indice; i++)
            cout << palabras[i] << endl;

    } else
        cout << "No se pudo leer el archivo.";
    return 0;
}

//head -n10 dic.txt>dicc.txt