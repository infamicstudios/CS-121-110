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

  //Data
  int userinput;
  int totalinchs;
  int numberOfPeople = 0;
  string ynResponse = "y";
  while (ynResponse == "Y" || ynResponse == "y" || ynResponse == "Yes" || ynResponse == "yes" || userinput != 0 )
  {
    if (userinput != 0) {
    cout << "Please enter the height of a person to generate an average for height. \n To quit type in 0 to quit\n";
    cin >> userinput;
    }
    if (userinput > 100 || userinput < 0) //invalid input
    { 
      cout << "the value you entered for height is inpossible your value will be ignored\n";
      cout <<"are their more people {Y/N} \n";
      cin >> ynResponse ;
    } //invalid input
    else 
    {
      totalinchs = totalinchs + userinput;
      numberOfPeople++;
      if (userinput != 0 ) 
      {
      cout << "the average height of everyone in the room is "<< totalinchs/numberOfPeople << endl;
      cout <<"are their more people {Y/N} \n";
      cin >> ynResponse ;
      }
    }//else 
  }
}//main