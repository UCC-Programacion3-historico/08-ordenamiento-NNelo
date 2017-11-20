#ifndef SHELLSORT_H
#define SHELLSORT_H


template<class T>
void shellSort(T *vect, unsigned long tamanio) {        // ojo que no anda con tam-1
    for (auto k = tamanio / 2; k > 0; k /= 2) {         // k incremento
        for (auto i = k; i < tamanio; ++i) {            // i vuelta
            T temp = vect[i];                           // temp porque va cambiando
            auto j = i;
            for (j = i; j >= k && vect[j - k] > temp; j -= k)
                vect[j] = vect[j - k];
            vect[j] = temp;
        }
    }
}


#endif //SHELLSORT_H
