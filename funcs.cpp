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
// ^^^ above Cesar Cypher and Shift Char function were from original lab 06 ^^^



char shiftCharUncipher(char c, int rshift) 
{  
    int shift = rshift % 26; 
    shift = 26 - shift;

    if(shift < 0) 
    { 
        for(int i = 0; i < 26; i++) 
        { 
            if(c == UPPER[i] && i - shift > 25) 
            {
                return UPPER[(i - shift) - 26];
            } 
            else if(c == LOWER[i] && i - shift > 25) 
            { 
                return LOWER[(i - shift) - 26];
            } 
            else if(UPPER[i] == c) 
            { 
                return UPPER[i - shift]; 
            } 
            else if(LOWER[i] == c) 
            { 
                return LOWER[i - shift];
            }
        }
    } else 
    {
        for(int i = 0; i < 26; i++) 
        { 
            if(c == UPPER[i] && i - shift < 0) 
            {
                return UPPER[26 - (shift - i)];
            } 
            else if(c == LOWER[i] && i - shift < 0) 
            { 
                return LOWER[26 - (shift - i)];
            } 
            else if(UPPER[i] == c) 
            { 
                return UPPER[i - shift]; 
            } 
            else if(LOWER[i] == c) 
            { 
                return LOWER[i - shift];
            } 
        }
    }
    return c;
}

std::string solve(std::string encrypted_string) { 
    int min;
    double letter_count = 0;
    double rotation_total = 0;
    std::string answer = "";
    std::string test_string = "";
    double smallest = INT_MAX;

    std::array<double, 26> letter_freq = 
    {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};


    for(int i = 0; i < 26; i++) 
    { 
        test_string = encryptCaesar(encrypted_string, i);
        for(int j = 0; j < 26; j++) 
        { 
            for(int k = 0; k < encrypted_string.length(); k++) 
            {
                if(test_string[k] == UPPER[j] || test_string[k] == LOWER[j]) // or operator is used to catch upper case or lower case characters
                {
                    letter_freq[j]++;
                    letter_count++;
                }
            }
        }

        for(int i = 0; i < 26; i++) 
        { 
            letter_freq[i] = letter_freq[i] / letter_count; 
            letter_freq[i] = std::fabs(letter_freq[i] - ENGLISH_FREQS[i]); 
            rotation_total += letter_freq[i]; 

            letter_freq[i] = 0;
        }

        if(rotation_total < smallest) 
        { 
            smallest = rotation_total; 
            min = i; 
        }

        rotation_total = 0; 
        letter_count = 0;         
    }
    
    for(int i = 0; i < encrypted_string.length(); i++) 
    { 
        answer += shiftCharUncipher(encrypted_string[i], min);
    }

    return answer; 

}