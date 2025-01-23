#include <bitset>
#include <cstddef>
#include <iostream>

int main() {
  constexpr size_t BITSET_SIZE = 1000000;

  // Basic calculation of memory needed
  size_t bits_per_word = sizeof(unsigned long long) * 8;
  size_t words_needed = (BITSET_SIZE + bits_per_word - 1) / bits_per_word;
  size_t memory_estimate = words_needed * sizeof(unsigned long long);

  std::bitset<BITSET_SIZE> my_bitset;

  std::cout << "Estimated memory for " << BITSET_SIZE
            << "-bit bitset: " << memory_estimate << " bytes" << std::endl;

  return 0;
}