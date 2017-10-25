#ifndef QUICKSORT_H
#define QUICKSORT_H


template<class T>
void quickSort(T *vect, unsigned long inicio, unsigned long fin) {
    if (fin <= inicio)
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
}

#endif //QUICKSORT_H