//Objective:  Gives some infomation about me
//Name: Duncan McFarlane
//Course: COMSC-110-1021
//Compiler: TDM MinGW
//Editor: MS NotePad

//libraries
#include <iostream>
#include <ctime>
#include <cstdlib>
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
  cout << "Objective: Gives some information about me\n"; 
  cout << "Programmer: Duncan McFarlane\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 

  //Data
    int yob = 2001;
    int dib =110;
    string dob = "April 4th 2001";
    int dueDateDays =204;
    int dueDateYear=2017;
    int yearsbetween=dueDateYear-yob;
	int leapyear = yearsbetween / 4;
	int days = (yearsbetween * 365) + leapyear;


    cout << "you were born "<< dob << " \n"
    cout << "it has been "<< days <<" since you were born \n";
    cout << "the due date is Jun 22 at 11:59pm";

}//main