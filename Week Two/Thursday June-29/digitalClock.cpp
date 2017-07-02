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
  cout << "Objective: This program will serve as a template for all programs\n written in this course.\n"; 
  cout << "Programmer: Duncan McFarlane\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 

  cout << "CTRL-C to exit...\n"; 

  //Data
  int hr = 0; //hours (2 digits width)
  int min = 0; //number of hours (2 digits width)
  int sec = 0; //seconds (2 digits width)

  //output digital clock
  cout.fill('0'); //formats digirtal clock to 00.00.00
  for (hr = 0; hr < 24; hr++)
  {
    for (min = 0; min < 60; min++)
     {
       for (sec = 0; sec < 60; sec++)
        {

        cout << setw(2) << hr << ':'; 
        cout << setw(2) << min << ':'; 
        cout << setw(2) << sec << ' '; 
        cout.flush(); 
        
        //pause for 1 second

        #ifdef _WIN32 
        Sleep(1000); // one thousand milliseconds
        #else 
        sleep(1); // one second 
        #endif 

	//return to beginning of current line
        cout << '\r'; // CR 
        }//sec loop
      }//min loop
   }
}//main