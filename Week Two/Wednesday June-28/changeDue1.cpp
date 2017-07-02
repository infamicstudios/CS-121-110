//Objective: calculate change due in a transaction using U.S. bills
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
  cout << "Objective: calculate change due in a transaction using U.S. bills \n"; 
  cout << "Programmer: Duncan McFarlane\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 

  //variables
  int rng = rand() % 10 + 1;
  int userinput;
  cout <<"I am thinking of a number between 1 & 10, can you guess the number I am thinking of? \n";
 
 while (userinput != rng)
  {
    cout <<"What is your guess [1-10]? "
    cin >>userinput;
    cin.ignore(1000, 10);
    if (userinput == rng) break;
    cout << "sorry your guess was wrong try again";
    if (userinput > 10 || userinput < 1)
    {
    cout <<"I was looking for a number between 1 and 10 \n">
    }
  }
cout << "you guessed the right awnser"


}//main