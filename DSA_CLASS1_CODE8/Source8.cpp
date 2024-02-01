// Title: Iterating Through a 3D Array of Letters
// Description: A C++ program that declares and initializes a 3D array of letters, and then iterates through each element using nested for loops.

#include <iostream>   //Include the Input/Output Stream Library for input and output operations.
using namespace std;  //Declare that the program will use the std namespace, which contains standard C++ functions and objects.

int main()            //The main function, where the program execution begins.
{

    string letters[2][2][2] = {         
        {
            {"A", "B"},
            {"C", "D"}
                               //Declare and initialize a 3D array of letters.
        },
        {
            {"E","F"},
            {"G","H"}
        }
    };
    for (int i = 0; i < 2; i++) {                      //Iterate through the first dimension of the array.
        for (int j = 0; j < 2; j++) {                  //Iterate through the second dimension of the array.
            for (int k = 0; k < 2; k++) {               //Iterate through the third dimension of the array.
                cout << letters[i][j][k] << "\n";       //Print each letter followed by a newline character.
            }
        }
    }
    return 0;                                           //The main function returns 0, indicating successful execution of the program.
}
