// Title: Size of Integer Array and Element
// Description: A C++ program that declares and initializes an integer array, prints the size of the array, and then prints the size of an individual integer element.
#include <iostream>   // Include the Input/Output Stream Library for input and output operations.
using namespace std;  //Declare that the program will use the std namespace, which contains standard C++ functions and objects.
int main()            //The main function, where the program execution begins.
{

	int mynumbers[5] = { 10,20,30,40,50 };    //Declare and initialize an integer array named 'mynumbers' with five elements.
	cout << sizeof(mynumbers) << endl;        //Print the size (in bytes) of the 'mynumbers' array.
	cout << sizeof(int) << endl;              //Print the size (in bytes) of an individual integer element.
	return 0;                                 //The main function returns 0, indicating successful execution of the program.
}
