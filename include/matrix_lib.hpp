#pragma once

class Matrix {
    public:
      int rows;
      int cols;
      int** table;

      Matrix(int rows, int cols);
      ~Matrix();

      Matrix(const Matrix&) = delete;
      Matrix& operator=(const Matrix&) = delete;
};

class Vector {
    public:
      int* data;
      int size;
      int capacity;

      Vector() {
          data = nullptr;
          size = 0;
          capacity = 0;
      }


      ~Vector() {
          delete[] data;
      }

      Vector(const Vector&) = delete;
      Vector& operator=(const Vector&) = delete;

      void reallocate(int new_capacity);
      void pushback(int value);
      void popback();
};
