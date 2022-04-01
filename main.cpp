#include <iostream>
#include "funcs.h"

int main()
{
  // std::cout << "Call Me If You Get Lost" << std::endl; 
  std::cout << "The string before it is encrypted by a shift of 2: " << std::endl;
  std::cout << "Call Me If You Get Lost" << std::endl;

  std::cout << "The string after it is encrypted by a shift of 2: " << std::endl;
  std::cout << encryptCaesar("Call Me If You Get Lost", 2) << std::endl;

  std::string encrypted = encryptCaesar("Call Me If You Get Lost", 2);

  std::cout << "The string after it is has been solved the vector involving solve function: " << std::endl;

  std::cout << solve("Ecnn Og Kh Aqw Igv Nquv") << std::endl;
}


