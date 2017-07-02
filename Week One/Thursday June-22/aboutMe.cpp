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
  int luckyNumber = 4; //my lucky number
  double amountEarned = 10.5; // amount earned
  std::string movie = "Kill Bill";
  char initial = 'D';
  

  cout<<"luckyNumber= "<<luckyNumber <<"\n"; 
  cout<<"amountEarned= "<<amountEarned <<"\n";
  cout<<"movie= "<<movie <<"\n";
  cout<<"initial= "<< initial <<"\n";

}//main