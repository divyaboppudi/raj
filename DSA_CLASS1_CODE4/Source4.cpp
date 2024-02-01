// Title: Modifying and Printing Car Brand
// Description: A C++ program that declares and initializes an array of car brands, modifies the first element, and then prints the updated value.
#include <iostream>        // Include the Input/Output Stream Library for input and output operations.
using namespace std;       //Declare that the program will use the std namespace, which contains standard C++ functions and objects.
int main()                 //The main function, where the program execution begins.
{
    string cars[4] = { "volvo","BMW","Tesla","Ford" };    //Declare and initialize a string array named 'cars' with four car brands.
    cars[0] = "opel";                                      // Modify the value of the first element in the 'cars' array.
    cout << cars[0];                                       //Print the updated value of the first element

    return 0;                                               // The main function returns 0, indicating successful execution of the program.

}
