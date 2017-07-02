//Objective:  calculate how much money to save every month for number of years before retirement and how much money would you have when you retire.
//Name: Duncan McFarlane
//Course: COMSC-110-1021
//Compiler: TDM MinGW
//Editor: MS NotePad

//libraries
#include <iostream>
#include <cmath>
#include <iomanip> 
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
  cout << "Objective: calculate how much money to save every month for number of years before retirement \n and how much money would you have when you retire.\n"; 
  cout << "Programmer: Duncan McFarlane\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 

  //Data
  int deposit = 125;
  double interestRate = 0.0618;
  int years = 30;
  interestRate = interestRate/ 12;
  int time = years * 12;
  double amountSaved= deposit * ((pow(1 + interestRate, time) -1) / interestRate); //maths calculations of amount saved

  //output
  cout << "In " << years <<" years at ";
  cout << (interestRate * 100) * 12;
  cout << "%, $" << deposit <<" deposited per month will grow to $"; 
  cout << fixed << showpoint; //shows the decimal point for the amount saved output
  cout << setprecision(2); // set the percision for numbers to 2
  cout << amountSaved <<endl;

}//main