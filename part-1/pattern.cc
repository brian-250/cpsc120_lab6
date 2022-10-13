// Max Rivas
// CPSC 120-01
// 2022-10-13
// Rivas.max11@csu.fullerton.edu
// @Mrivas0331
//
// Lab 06-01
// Partners: @brian-250
//
// Creates pattern
//

#include <iostream>

const int kCounterMax = 22;
int main(int argc, char const *argv[]) {
  for (int outer = 0; outer < kCounterMax; outer++) {
    for (int dash = outer; dash > 0; dash--) {
      std::cout << "-";
    }
    std::cout << "*";
    for (int bar = outer; bar < kCounterMax; bar++) {
      std::cout << "|";
    }
    std::cout << "\n";
  }
  return 0;
}
