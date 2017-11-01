#ifndef QUICKSORT_H
#define QUICKSORT_H

#include <iostream>

template<class T>
void swap(T *v, unsigned long piv, unsigned long izq);


template<class T>
void mostrar(const T *v, unsigned long inicio, unsigned long fin, unsigned long izq);

template<class T>
void mostrar2(const T *v, unsigned long inicio, unsigned long fin, unsigned long izq, unsigned long der);


template<class T>
void quickSort(T *v, unsigned long inicio, unsigned long fin) {
    unsigned long piv = inicio;
    unsigned long izq = inicio + 1;
    unsigned long der = fin;
    if (fin <= inicio) {
        return;
    }
    while (izq < der) {
        while (izq < fin && v[piv] >= v[izq]) {
            izq++;
        }

        while (v[piv] < v[der]) {
            der--;
        }

        mostrar2(v, inicio, fin, izq,der);
        if (izq < der) {
            swap<T>(v, izq, der);
        }
    }


    swap<T>(v, piv, der);

    quickSort(v, inicio, izq - 1);
    quickSort(v, izq + 1, fin);
}


template<class T>
void mostrar(const T *v, unsigned long inicio, unsigned long fin, unsigned long izq) {
    std::cout << std::endl;
    for (unsigned long i = inicio; i < izq; i++)
        std::cout << v[i] << " ";
    std::cout << "|" << v[izq] << "|";
    for (unsigned long i = izq + 1; i <= fin; i++)
        std::cout << v[i] << " ";
    std::cout << std::endl;
}

template<class T>
void mostrar2(const T *v, unsigned long inicio, unsigned long fin, unsigned long izq, unsigned long der) {
    unsigned long i;
    std::cout << std::endl;
    for (i = inicio; i < izq; i++)
        std::cout << v[i] << " ";
    std::cout << "|" << v[izq] << "|";
    for (i = izq + 1; i < der; i++)
        std::cout << v[i] << " ";
    std::cout << "|" << v[der] << "|";
    for (i = der + 1; i <= fin; i++)
        std::cout << v[i] << " ";
    std::cout << std::endl;
}

template<class T>
void swap(T *v, unsigned long piv, unsigned long izq) {
    T tmp = v[piv];
    v[piv] = v[izq];
    v[izq] = tmp;
}

#endif //QUICKSORT_H


/*
 *
 *     if (fin <= inicio)
        return;

    unsigned long piv = (fin - inicio) / 2, izq = inicio, der = fin;
    while (izq < der) {
        while (vect[izq] <= vect[piv] && izq < der)
            izq++;
        while (vect[piv] <= vect[der] && izq < der)
            der--;
        if (izq < der) {
            T aux = vect[izq];
            vect[izq] = vect[der];
            vect[der] = aux;
        }
    }

    quickSort(vect, inicio, piv - 1);
    quickSort(vect, piv + 1, fin);
 *
 *
 */