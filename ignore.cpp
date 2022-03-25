// type "man ascii" in the terminal). 
#include <iostream>
// #include <string>
// #include "caesar.h"
// #include "funcs.h"
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


int main()
{
    std::cout << int('A') << std::endl;
    std::cout << shiftChar('A', 5) << std::endl;
    std::cout << encryptCaesar("Way to Go!", 5) << std::endl;
    std::cout << "Bfd yt Lt!" << std::endl;
    }