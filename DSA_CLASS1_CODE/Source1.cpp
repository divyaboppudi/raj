
#include <iostream>   //This line includes the input/output stream library, which allows for input and output operations.
using namespace std;  //This line declares that we will be using the "std" namespace, which includes standard C++ functions and objects.
int main()            //This is the main function, where the program execution begins.
{
	int mynumbers[5] = { 10,20,30,40,50 };  //This line declares an integer array named "mynumbers" with a size of 5 and initializes it with the values 10, 20, 30, 40, and 50.
	cout << sizeof(mynumbers);//This line prints the size (in bytes) of the "mynumbers" array to the standard output (console).
	return 0;        //The main function returns an integer value, usually 0 to indicate successful execution.
}

