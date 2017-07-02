//Objective:  Converts Fahrenheit to Celsius
//Name: Duncan McFarlane
//Course: COMSC-110-1021
//Compiler: TDM MinGW
//Editor: MS NotePad

//libraries
#include <iostream>
using namespace std;

//Programmer defined data types
//NONE

//Special compiler dependent definitions
//NONE

//global constants/variables
//NONE

//Programmer defined functions
//NONE

//main program
int main()
{
  // output my name and objective and program information
  cout << "Objective: Converts Fahrenheit to Celsius.\n"; 
  cout << "Programmer: Duncan McFarlane\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 

  //Data
  //variable declarations
  double c; // a variable declaration for c which will be degrees Celsius 
  double f; // a variable declaration for f which will be degrees Fahrenheit 

  // intro and user input
  cout << "Enter the temperature in degrees Fahrenheit: "; 
  cin >> f; // get user input and make make it equal to f

 //formula for converting fahrenheit to Celsius
  c = 5 * (f - 32) / 9;

//output result
  cout << " That's " << c << " degrees Celsius!" << endl; 

}//main