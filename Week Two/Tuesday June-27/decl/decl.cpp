//Objective:  echo the users input for info about the user
//Name: Duncan McFarlane
//Course: COMSC-110-1021
//Compiler: TDM MinGW
//Editor: MS NotePad

//libraries
#include <iostream>
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
  cout << "Objective: echo the users input for info about the user"; 
  cout << "Programmer: Duncan McFarlane\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 

  //Data
  string favMovie;
  int luckyNumber;
  double age;
  char firstLetterName;

  //lucky number prompt and input
  cout << "What is your lucky number? \n";
  cin >> luckyNumber;
  cin.ignore(1000, 10);

  //favorite movie label and input
  cout << "what is your favorite movie? \n";
  getline(cin,favMovie);

  //age prompt and input
  cout << "what is your age? \n";
  cin >> age;
  cin.ignore(1000,10);

  //first letter in name
  cout << "what is the first letter in your name? \n";
  cin >> firstLetterName;
  cin.ignore(1000,10);
  
  //output
  cout << "Your lucky number is "<< luckyNumber; 
  cout << ". your favorite movie is "<< favMovie;
  cout << ". you are "<< age << " years old";
  cout << " and your name starts with a " << firstLetterName;

}//main