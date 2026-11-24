#include <iostream>
#include "matrix_lib.hpp"

int main() {
    Matrix m(3, 4);
    m.table[1][2] = 88;
    std::cout << m.table[1][2] << '\n';
}
