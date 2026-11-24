#pragma once

struct Matrix {
    int rows;
    int cols;
    int** table;

    Matrix(int row, int cols);
    ~Matrix();
};
