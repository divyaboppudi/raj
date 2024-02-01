// Title: Iterating Through an Integer Array
// Description: A C++ program that declares and initializes an integer array and then iterates through its elements using a range-based for loop.
#include <iostream>     //Include the Input/Output Stream Library for input and output operations.
using namespace std;    //Declare that the program will use the std namespace, which contains standard C++ functions and objects.
int main()              //The main function, where the program execution begins.
{
    int mynumbers[5] = { 10, 20, 30, 40, 50 };  //Declare and initialize an integer array named 'mynumbers' with five elements.
    for (int i : mynumbers)                     //Use a range-based for loop to iterate through each element of the 'mynumbers' array.
    {
        cout << i << "\n";                      //Print the current element followed by a newline character.
    }

    return 0;                                   //The main function returns 0, indicating successful execution of the program.
}
