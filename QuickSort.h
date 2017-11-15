#ifndef QUICKSORT_H
#define QUICKSORT_H


template<class T>
void QuickSort(T *vect, unsigned long inicio, unsigned long fin) {
    if (inicio >= fin)
        return;
    unsigned long piv = inicio, izq = inicio + 1, der = fin;
    while (izq != der) {
        while (vect[izq] < vect[piv] && izq < der)
            izq++;
        while (vect[piv] < vect[der] && izq < der)
            der--;
        if (izq < der) {
            T aux = vect[izq];
            vect[izq] = vect[der];
            vect[der] = aux;
        }
    }
    T tmp = vect[piv];
    vect[piv] = vect[izq];
    vect[der] = tmp;

    QuickSort(vect, inicio, piv - 1);
    QuickSort(vect, piv + 1, fin);
}

#endif //QUICKSORT_H


/*
 *
    while (izq != der) {
        while (vect[piv] < vect[izq] && izq < der)
            izq++;
        while (vect[piv] > vect[der] && izq < der)
            der--;

    }
 */

/*
 *  if (fin <= inicio)
        return;

    unsigned long piv = (fin - inicio) / 2, izq = inicio, der = fin;
    while (izq < piv && der > piv) {
        while (vect[izq] <= vect[piv] && izq < piv)
            izq++;
        while (vect[piv] <= vect[der] && piv < der)
            der--;
        if (izq < piv && der > piv) {
            T aux = vect[izq];
            vect[izq] = vect[der];
            vect[der] = aux;
        }
    }

    QuickSort(vect, inicio, piv - 1);
    QuickSort(vect, piv + 1, fin);
 *
 */