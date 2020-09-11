#ifndef TRK_LIBRARY_H
#define TRK_LIBRARY_H

template<class T>
class TRK_Vector {
private:
    T *data;
    long int size;
public:
    explicit TRK_Vector();
    explicit TRK_Vector(int sizeOfArray);
    ~TRK_Vector();

    void Resize(int newSize);
    long int getSize();
};

#endif //TRK_LIBRARY_H
