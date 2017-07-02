//Objective:  calculate how much money to save every month for number of years before retirement and how much money would you have when you retire.
//Name: Duncan McFarlane
//Course: COMSC-110-8269
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
  cout << "Objective: This program will serve as a template for all programs\n written in this course.\n"; 
  cout << "Programmer: Duncan McFarlane\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 

  //Data
  deposit = 300;
  interestRate = 0.035;
  years = 30;
  
 double interestRate = interestRate/ 12;
 int time = years * 12;
 amountSaved= deposit * ((pow(1 + interestRate, time) -1) / interestRate;

 cout << "In " << years <<" years at ";
 cout << (interestRate * 100) * 12;
 cout << "%, $" << deposit <<" deposited per month will grow to $";
 setprecision(2);
 cout << amountSaved;
  
  //NONE


}//main