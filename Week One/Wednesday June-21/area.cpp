//Objective:  Calculates the area of a circle
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
  cout << "Objective: Calculates the area of a circle.\n"; 
  cout << "Programmer: Duncan McFarlane\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 

        //Data and variable declarations
        double r; 
        double area; 
        double pi = 4 * atan(1.0); // 4 times the angle whose tangent is 1 
        
        // ask user to enter a circle's radius 
        cout << "Enter the radius of a circle: "; 
        cin >> r; 

        //Defines value of Area
        area = pi * r * r; 

	//output result
  	cout << " The area is " << area << endl; 

}//main