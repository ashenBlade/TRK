#include "library.h"

template<class T>
TRK_Vector<T>::TRK_Vector() {
    this->size = 0;
    this->data = new T[0];
}

template<class T>
TRK_Vector<T>::TRK_Vector(int sizeOfArray) {
    this->size = sizeOfArray;
    this->data = new T[size];
}

template<class T>
TRK_Vector<T>::~TRK_Vector() {
    delete data;
}

template<class T>
void TRK_Vector<T>::Resize(int newSize) {
    if (newSize <= size) return;
    T* temporaryArray = new T[size];
    for (int currentElement = 0; currentElement < size; currentElement++) {
        (*temporaryArray)[currentElement] = (*data)[currentElement];
    };
    delete [] this->data;
    this->size = newSize;
    T* data = new T[size];
    for (int currentElement = 0; currentElement < size; currentElement++) {
        this->data[currentElement] = (*temporaryArray)[currentElement];
    };
    delete [] temporaryArray;
}

template<class T>
long int TRK_Vector<T>::getSize() {
    return this->size;
};
