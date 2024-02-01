/ Title: Accessing Element in 2D Array
// Description: A C++ program that declares and initializes a 2D array of letters, and then prints a specific element from the array.

#include <iostream>      //Include the Input/Output Stream Library for input and output operations.
using namespace std;     // Declare that the program will use the std namespace, which contains standard C++ functions and objects.
int main()               // The main function, where the program execution begins.
{
	string letters[2][4] = { { "A", "B", "C", "D" },{ "E", "F", "G", "H" } };   //Declare and initialize a 2D array of letters.
	cout << letters[0][2];              //Print the element at row 0 and column 2 from the 2D array.
	return 0;                           //The main function returns 0, indicating successful execution of the program.

}
