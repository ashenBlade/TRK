#include "trk_vector.h"

template<class T>
TRK_Vector<T>::TRK_Vector() {
    this->getSize = 0;
    this->data = new T[1];
    this->data[0] = nullptr;
}

template<class T>
TRK_Vector<T>::TRK_Vector(int getSizeOfArray) {
    this->getSize = getSizeOfArray;
    this->data = new T[getSize];
}

template<class T>
TRK_Vector<T>::~TRK_Vector() {
    delete data;
}

template<class T>
void TRK_Vector<T>::Resize(int newSize) {
    if (newSize <= this->getSize()) return;
    T* temporaryArray = new T[this->getSize()];
    for (int currentElement = 0; currentElement < this->getSize(); currentElement++) {
        (*temporaryArray)[currentElement] = (*data)[currentElement];
    };
    delete [] this->data;
    this->size = newSize;
    this->data = new T[this->getSize()];
    for (int currentElement = 0; currentElement < this->getSize(); currentElement++) {
        this->data[currentElement] = (*temporaryArray)[currentElement];
    };
    delete [] temporaryArray;
}

template<class T>
long int TRK_Vector<T>::getSize() {
    return this->size;
};

template<class T>
T *TRK_Vector<T>::operator[](long index) {
    return this->data[index];
};

template<class T>
T *TRK_Vector<T>::at(long int index) {
    if (-1 < index && index < this->getSize())
        return this->data[index];
    return nullptr;
}

template<class T>
T *TRK_Vector<T>::front() {
    return this->data[0];
}

template<class T>
T *TRK_Vector<T>::back() {
    return this->data[this->getSize()]
};
