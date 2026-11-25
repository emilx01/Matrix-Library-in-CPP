#include <iostream>
#include "matrix_lib.hpp"

int main() {
    Matrix m(3, 4);
    m.table[1][2] = 88;
    for (int r = 0; r < m.rows; r++) {
    for (int c = 0; c < m.cols; c++) {
        std::cout << m.table[r][c] << ' ';
    }
    std::cout << '\n';
}
}
