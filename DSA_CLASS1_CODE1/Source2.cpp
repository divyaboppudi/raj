// Title: Array of Cars
// Description: A simple C++ program that declares and initializes an array of car brands and then prints each brand using a for loop.

#include <iostream>   //Include the Input/Output Stream Library for input and output operations.
using namespace std;  //Declare that the program will use the std namespace, which contains standard C++ functions and objects.
int main()            //The main function, where the program execution begins.
{
    string cars[4] = { "volvo","BMW","Tesla","Ford" };   //Declare and initialize a string array named 'cars' with four car brands.

    for (int i{}; i < 4; i++)                            //Iterate through each element of the 'cars' array using a for loop.
    {
        cout << cars[i] << ",\n";                        //Print each car brand followed by a comma and a newline character.
    }
    return 0;                                            // The main function returns 0, indicating successful execution of the program.
}

