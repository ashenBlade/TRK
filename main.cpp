#include <iostream>
#include "trk_vector.h"

int main() {
    std::cout << "Tests for TRK library\n";
    TRK_Vector<int> newVector;
    newVector.Resize(8);
    std::cout << newVector.getSize() << std::endl;
    return 0;
}
