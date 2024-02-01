// Title: Iterating Through an Array of Car Brands
// Description: A C++ program that declares and initializes an array of car brands, calculates the array size, and then iterates through the elements using a for loop.

#include <iostream>           //Include the Input/Output Stream Library for input and output operations.
using namespace std;          //Declare that the program will use the std namespace, which contains standard C++ functions and objects.

int main()                    //The main function, where the program execution begins.
{
    string cars[5] = { "volvo", "toyato", "ford", "tsla", "honda" }; //Declare and initialize a string array named 'cars' with five car brands.
    int n = sizeof(cars) / sizeof(string);     //Calculate the number of elements in the 'cars' array.
    for (int i{}; i < n; i++)                  //Use a for loop to iterate through each element of the 'cars' array.
    {
        cout << cars[i] << "\n";               //Print each car brand followed by a newline character.
    }
return 0;                                      //The main function returns 0, indicating successful execution of the program.
}
