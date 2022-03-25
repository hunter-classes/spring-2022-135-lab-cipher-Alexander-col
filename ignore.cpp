#include <iostream>
#include <string>
#include "caesar.h"
#include "funcs.h"
char shiftChar(char c, int rshift)
{
    int a = int(c);
    if ((a >= 65 && a <= 90) || (a >= 97 && a <= 122))
    {
        int value = int(c) + rshift;
        if(value == 91)
        {
            return 'A';
        }
        else if (value == 92)
        {
            return 'B';
        }
        else if (value == 93)
        {
            return 'C';
        }
        else if (value == 94)
        {
            return 'D';
        }
        else if (value == 95)
        {
            return 'E';
        }
        else if (value == 96)
        {
            return 'F';
        }
        else if (value == 97)
        {
            return 'G';
        }
        else if (value == 98)
        {
            return 'H';
        }
        else if (value == 99)
        {
            return 'I';
        }
        else if (value == 100)
        {
            return 'J';
        }
        else if (value == 101)
        {
            return 'K';
        }

        else if (value == 123)
        {
            return 'a';
        }
        else if (value == 124)
        {
            return 'b';
        }
        else if (value == 125)
        {
            return 'c';
        }
        else if (value == 126)
        {
            return 'd';
        }
        else if (value == 127)
        {
            return 'F';
        }
        else if (value == 128)
        {
            return 'G';
        }
        else if (value == 129)
        {
            return 'H';
        }
        else if (value == 130)
        {
            return 'I';
        }
        else if (value == 131)
        {
            return 'J';
        }
        else if (value == 132)
        {
            return 'K';
        }
        else if (value == 133)
        {
            return 'L';
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