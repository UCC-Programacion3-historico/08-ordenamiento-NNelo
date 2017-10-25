#ifndef BUBBLESORT_H
#define BUBBLESORT_H

template<class T>
void bubbleSort(T *vect, unsigned long tamanio) {
    bool B = false;
    while (!B) {
        B = true;
        for (int i = 0; i < tamanio; ++i) {
            if (vect[i] > vect[i + 1]) {
                B = false;
                T aux = vect[i];
                vect[i] = vect[i + 1];
                vect[i + 1] = aux;
            }
        }
    }//modificar tamanio
}



/*
  for (int j = 0; j < tamanio; ++j) {
        for (int i = 0; i < tamanio; ++i) {
            if (vect[i] > vect[i + 1]) {
                T aux = vect[i];
                vect[i] = vect[i + 1];
                vect[i + 1] = aux;
            }
        }
    }
 */

//{
//    bool B = false;
//    while (!B) {
//        B = true;
//        for (int i = 0; i < tamanio - 1 - i; ++i) {
//            if (vect[i] > vect[i + 1]) {
//                B = false;
//                T aux = vect[i];
//                vect[i] = vect[i + 1];
//                vect[i + 1] = aux;
//            }
//        }
//    }
//}


#endif //BUBBLESORT_H


/*
 bool B;
    for (int j = 0; j < tamanio; ++j) {
        for (int i = 0; i < tamanio - i; ++i) {
            B = false;
            if (vect[i] > vect[i + 1]) {
                B = true;
                T aux = vect[i];
                vect[i] = vect[i + 1];
                vect[i + 1] = aux;
            }
        }
    }
  */