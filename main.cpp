#include <iostream>
#include "funcs.h"

int main()
{
  // std::cout << "Call Me If You Get Lost" << std::endl; 
  std::cout << "The string before it is encrypted by a shift of 2: " << std::endl;
  std::cout << "Call Me If You Get Lost" << std::endl;

  std::cout << "The string after it is encrypted by a shift of 2: " << std::endl;
  std::cout << encryptCaesar("Call Me If You Get Lost", 2) << std::endl;

  std::string encrypted = encryptCaesar("Call Me If You Get Lost", 1);

  std::cout << "The string after it is has been solved the vector involving solve function: " << std::endl;

  std::cout << solve("Call Me If You Get Lost") << std::endl;
}


// #include <iostream>
// #include "funcs.h"

// int main() {
// 	// std::cout << solve(encrypt_caesar("For each of the 26 rotations of encrypted string: Make a 26 space vector with the frequencies of all the letters based on encrypted_string. Note that entries will be 0 for letters that don’t appear in the input string. Calculate the distance between this vector and the vector of letter frequencies for English. For each of the 26 rotations of encrypted string: Make a 26 space vector with the frequencies of all the letters based on encrypted_string. Note that entries will be 0 for letters that don’t appear in the input string. Calculate the distance between this vector and the vector of letter frequencies for English. For each of the 26 rotations of encrypted string: Make a 26 space vector with the frequencies of all the letters based on encrypted_string. Note that entries will be 0 for letters that don’t appear in the input string. Calculate the distance between this vector and the vector of letter frequencies for English. For each of the 26 rotations of encrypted string: Make a 26 space vector with the frequencies of all the letters based on encrypted_string. Note that entries will be 0 for letters that don’t appear in the input string. Calculate the distance between this vector and the vector of letter frequencies for English. For each of the 26 rotations of encrypted string: Make a 26 space vector with the frequencies of all the letters based on encrypted_string. Note that entries will be 0 for letters that don’t appear in the input string. Calculate the distance between this vector and the vector of letter frequencies for English. For each of the 26 rotations of encrypted string: Make a 26 space vector with the frequencies of all the letters based on encrypted_string. Note that entries will be 0 for letters that don’t appear in the input string. Calculate the distance between this vector and the vector of letter frequencies for English.", 7)) << std::endl;

// 	std::cout << solve(encrypt_caesar("There's a saying that goes, 'grief is a most peculiar thing; we're so helpless in the face of it. It's like a window that will simply open of its own accord. The room grows cold, and we can do nothing but shiver. But it opens a little less each time, and a little less; and one day we wonder what has become of it.'", 3)) << std::endl;

// 	return 0;
// }