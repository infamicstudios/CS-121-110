//Objective: determine how far away a boat can see a lighthouse at sea
//Name: Duncan McFarlane
//Course: COMSC-110-1021
//Compiler: TDM MinGW
//Editor: MS NotePad

//libraries
#include <iostream>
#include <cmath>
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
  cout << "Objective: determine how far away a boat can see a lighthouse at sea"; 
  cout << "Programmer: Duncan McFarlane\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 

  //Data
  double lHH;
  double visDistance; 
  cout << "how tall is the lighthouse? \n";
  cin >> lHH;

  //calculates visdistance
  visDistance = pow((lHH*0.8),0.5);
  

  //output
  cout << "A lighthouse "<<lHH<< " feet tall can be seen by a boat from "<< visDistance <<" miles away! \n";

}//main