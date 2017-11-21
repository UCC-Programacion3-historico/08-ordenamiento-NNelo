#ifndef INTERSORT_H
#define INTERSORT_H


#include "BubbleSort.h"

template<class T>
void interSort(T *vect, unsigned long tamanio) {
    unsigned long j;
    for (unsigned long k = 0; k < tamanio; k++) {
        j = k;
        while (j > 0 && vect[j] < vect[j-1]) {
            T temp = vect[j];
            vect[j] = vect[j-1];
            vect[j-1] = temp;
            j--;
        }
    }
}

#endif //IINTERSORT_H
