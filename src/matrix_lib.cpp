#include "matrix_lib.hpp"

Matrix::Matrix(int rows, int cols) : this->rows, this->cols {
    table = new int*[rows];
    for (int i = 0; i < rows; i++) {
        table[i] = new int[cols]{};
    }
}

Matrix::~Matrix() {
    for (int i = 0; i < rows; i++) {
        delete[] table[i];
    }
    delete[] table;
}
