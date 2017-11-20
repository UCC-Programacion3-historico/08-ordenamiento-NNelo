#ifndef SHELLSORT_H
#define SHELLSORT_H


template<class T>
void shellSort(T *vect, unsigned long tamanio) {        //tamanio en lenguaje programador
    for (auto k = tamanio / 2; k > 0; k /= 2) {         // k incremento
        for (auto i = k; i < tamanio; i++) {            // i vuelta
            for (auto j = i; j >= k && vect[j - k] > vect[i]; j -= k) {
                T aux = vect[i];
                vect[i] = vect[j - k];
                vect[j - k] = aux;
            }
        }
    }
}


#endif //SHELLSORT_H
