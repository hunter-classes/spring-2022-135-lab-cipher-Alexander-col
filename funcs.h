#pragma once

// add prototypes here
std::string solve(std::string encrypted_string);

std::string encryptCaesar(std::string plaintext, int rshift);

char shiftChar(char c, int rshift);