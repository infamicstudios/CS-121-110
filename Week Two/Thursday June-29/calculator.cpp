//Objective:  simple calculator
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
  cout << "Objective: Simple calculator\n"; 
  cout << "Programmer: Duncan McFarlane\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 

  cout << "CTRL-C to exit...\n"; 

  //Data
  int firstNumber;
  int secondNumber;
  string operation;
  string notquit = "no";
  cout <<"What is the first number you would like to do something with \n";
  cin >> firstNumber;

  question:cout <<"What type of operation would you like to do the options are: addition, multiplication, subtraction, division.\n";
  cin >> operation;
  if (operation == "addition" || operation == "Addition" || operation == "Subtraction" || operation == "subtraction" || operation == "Multiplication" || operation == "multiplication" || operation == "Division" || operation == "division" )
  {
    if (operation == "addition" || operation == "Addition")
    {
      cout << "what is your second number s\n";
      cin >> secondNumber;
      cout << firstNumber << " + " << secondNumber <<" = "<< (firstNumber+secondNumber);
    }//addition

   if (operation == "Subtraction" || operation == "subtraction")
    {
      cout << "what is your second number \n";
      cin >> secondNumber;
      cout << firstNumber << " - " << secondNumber <<" = "<< (firstNumber-secondNumber);
    }//subtraction
   if (operation == "multiplication" || operation == "Multiplication")
    {
      cout << "what is your second number \n";
      cin >> secondNumber;
      cout << firstNumber << " * " << secondNumber <<" = "<< (firstNumber*secondNumber);
    }//multiplications
     if (operation == "division" || operation == "Division")
    {
      cout << "what is your second number \n";
      cin >> secondNumber;
      if (secondNumber == 0)
       {
        cout << "you can not divide by 0";
       } // end invalid input
    cout << firstNumber << " / " << secondNumber <<" = "<< (firstNumber/secondNumber);
    }//division
  }
  else 
  {
     goto question; //did it this way even though its not perferable because its the only way i could get it to work for some reason withought getting an infinite loop
  }


   
}//main