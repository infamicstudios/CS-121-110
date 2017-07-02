//Objective: Simulates a sudo-random dice roll.
//Name: Duncan E. McFarlane
//Course: COMSC-110-1021
//Compiler: TDM MinGW
//Editor: MS NotePad

//libraries
#include <iostream> 
#include <cstdlib> 
#include <ctime> 
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
	// "seeds" random number generator - initializes it 
	srand(time(0));
	rand(); 

   //intro and dubug info
  // output my name and objective and program information
  cout << "Objective: Simulates a sudo-random dice roll.\n"; 
  cout << "Programmer: Duncan McFarlane\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Compiled: " << __DATE__ << " at " << __TIME__ << endl << endl; 

	//Data
	//Variable declarations
 	int a; 	// declaration of "a" the name of the first die 
 	int b; // declaration of "a" the name of the first die 
  	int total; // the result 

	//Simulates dice role
  	a = 1 + rand() % 6; //makes a = random # with RAND_MAX = 6
  	b = 1 + rand() % 6; //makes a = random # with RAND_MAX = 6
  	total = a + b; // makes total = the sum a and b

  	//Outputs Dice Roll Results
	 //output the value of A and B and Total
  	cout << "Dice result: " << total << " (" << a << " and " << b << ")" << endl;

}//main