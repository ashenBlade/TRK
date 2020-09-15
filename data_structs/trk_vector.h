#ifndef TRK_LIBRARY_H
#define TRK_LIBRARY_H

template<class T>
class TRK_Vector {
private:
    T *data;
    long int size;
public:
    explicit TRK_Vector() {
        this->size = 0;
        this->data = new T[1];
    };

    explicit TRK_Vector(int sizeOfArray) {
        this->size = sizeOfArray;
        this->data = new T[sizeOfArray];
    };

    ~TRK_Vector() {
        delete data;
    };

    void Resize(int newSize) {
        if (newSize <= this->getSize()) return;
        T* temporaryArray = new T[this->getSize()];
        for (int currentElement = 0; currentElement < this->getSize(); currentElement++) {
            temporaryArray[currentElement] = data[currentElement];
        };
        delete [] this->data;
        this->size = newSize;
        this->data = new T[this->getSize()];
        for (int currentElement = 0; currentElement < this->getSize(); currentElement++) {
            this->data[currentElement] = temporaryArray[currentElement];
        };
        delete [] temporaryArray;
    };

    long int getSize() {
        return this->size;
    };

    T *operator[](long int index) {
        return this->data[index];
    };

    T *at(long int index) {
        if (-1 < index && index < this->getSize())
            return this->data[index];
        return nullptr;
    };

    T *front() {
        return this->data[0];
    };

    T *back() {
        return this->data[this->getSize()];
    };
};
#endif //TRK_LIBRARY_H
