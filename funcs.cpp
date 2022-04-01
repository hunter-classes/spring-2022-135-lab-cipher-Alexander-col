#include <iostream>
#include <string> 
#include <array>
#include <cctype>
#include <cmath>
#include <climits>
#include "funcs.h"
// add functions here
const std::array<char, 26> UPPER = 
{'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

const std::array<char, 26> LOWER = 
{'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'}; 

const std::array<double, 26> ENGLISH_FREQS = 
{.084966, .020720, .045388, .033844, .111607, .018121, .024705, .030034, .075448, .001964, .011016, .054893, .030129, .066544, .071635, .031671, .001962, .075809, .057351, .069509, .036308, .010074, .012899, .002902, .017779, .002722};


char shiftChar(char c, int rshift) // Leave more comments for your future self so you can understand work!
{
    int a = int(c);
    if ((a >= 65 && a <= 90) || (a >= 97 && a <= 122))
    {
        int value = int(c) + rshift;
        if (a >= 65 && a <= 90)
        {
            if (value > 90)
            {   
                int diff = 90 - int(c);
                diff = rshift - diff;
                value = 64 + diff;
                return value;
            }
            return value;
        }
        if(a >= 97 && a <= 122)
        {
            if (value > 122)
            {
                int diff = 122 - int(c);
                diff = rshift - diff;
                value = 96 + diff;
                return value;
            }
            return value;
        }


        return value;

    }
    return c;
}

std::string encryptCaesar(std::string plaintext, int rshift)
{
    std::string output = "";
    int length = plaintext.length();
    for (int i = 0; i != length; i++)
    {  
        output = output + shiftChar(plaintext[i],rshift);
    }
    return output;
}

