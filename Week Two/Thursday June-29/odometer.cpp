//Objective:  template for C++ programs and to test code
//Name: Duncan McFarlane
//Course: COMSC-110-8269
//Compiler: TDM MinGW
//Editor: MS NotePad

//libraries
#include <iostream>
#include <iomanip>
using namespace std;

#ifdef _WIN32 
#include <windows.h> 
#else 
#include <unistd.h> 
#endif 

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
  cout << "Objective: This program simulates an odometer\n"; 
  cout << "Programmer: Duncan McFarlane\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 

  cout << "CTRL-C to exit...\n"; 

  //Data
  int miles = 0; //hours (2 digits width)
  int feet = 0; //feet (4 digits width)
  //output digital clock
  cout.fill('0'); //formats digirtal clock to 00.00.00
  for (miles = 0; miles < 100000; miles++)
  {
    for (feet = 0; feet < 5280; feet=feet+30)
//uses this formatting so the sleep time can be longer to prevent flickering but because of how short the sleep time is user will probably not notice
     {

        cout << setw(5) << miles << " Miles "; 
        cout << setw(4) << feet << " Feet"; 
        cout.flush(); 
        //pause for 1 second

        #ifdef _WIN32 
        Sleep(22); // 35 miliseconds from experementation enough to seem snappy but not flicker
        #else 
        sleep(.022); // 
        #endif 

	//return to beginning of current line
        cout << '\r'; // CR 
      }//min loop
   }
}//main