#include <iostream>
#include "matrix.h"

// Return a populated vector
std::vector<double> full_vector(size_t n)
{
  std::vector<double> result;

  for (size_t i = 0; i < n; i++)
  {
    result.push_back(static_cast<double>(i));
  }

  return result;
}


void example()
{
    std::cout << ">>> A(2x3) times B(3x2):" << std::endl;
    Matrix mat1(2, 3, std::vector<double>{2, 4, 3, 4, 5, 6});
    Matrix mat2(3, 2, std::vector<double>{1, 2, 3, 4, 5, 6});

    Matrix mat3 = mat1 * mat2;

    std::cout << "matrix A (2x3):" << mat1 << std::endl;
    std::cout << "matrix B (3x2):" << mat2 << std::endl;
    std::cout << "result matrix C (2x2) = AB:" << mat3 << std::endl;

    std::cout << ">>> B(3x2) times A(2x3):" << std::endl;
    Matrix mat4 = mat2 * mat1;
    std::cout << "matrix B (3x2):" << mat2 << std::endl;
    std::cout << "matrix A (2x3):" << mat1 << std::endl;
    std::cout << "result matrix D (3x3) = BA:" << mat4 << std::endl;
}

int main(int argc, char ** argv){

  // multiply_naive();
  example();

  return 0;
}