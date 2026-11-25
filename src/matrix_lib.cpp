#include "matrix_lib.hpp"

Matrix::Matrix(int rows, int cols) {
    this->rows = rows;
    this->cols = cols;

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

void Vector::reallocate(int new_capacity) {
    if (new_capacity < size) {
        size = new_capacity;
    }

    int* new_block = new int[new_capacity]{};

    for (size_t i = 0; i < size; i++) {
        new_block[i] = data[i];
    }

    delete[] data;
    data = new_block;
    capacity = new_capacity;
}

void Vector::pushback(int value) {
    if (size >= capacity) {
        if (capacity == 0) {
            capacity = 4;
        }
        reallocate(capacity + capacity/2);

        data[size] = value;
        size++;
    }
}

void Vector::popback() {
   if (size == 0) {
       return;
   }

   if (size > 0) {
       size--;
   } 

   if (capacity == 1 && size <= capacity/4) {
       int new_capacity = capacity/2;
       if (new_capacity < 1) {
           new_capacity = 1;
       }
       reallocate(new_capacity);
   }
}
