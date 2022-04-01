#include <iostream>
#include "funcs.h"

int main()
{
  std::cout << "Call Me If You Get Lost" << std::endl; 
  std::cout << encryptCaesar("Call Me If You Get Lost", 1) << std::endl;
  std::string encrypted = encryptCaesar("Call Me If You Get Lost", 1);
}
