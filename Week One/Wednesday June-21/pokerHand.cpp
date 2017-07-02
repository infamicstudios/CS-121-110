//Objective:  Deals a poker hand to the player
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
  // Initialize the random number
  srand(time(0));
  rand();

  // output my name and objective and program information
   cout << "Objective: Deals a poker hand to the user.\n"; 
   cout << "Programmer: Duncan McFarlane\n"; 
   cout << "Editor(s) used: Notepad\n"; 
   cout << "Compiler(s) used: TDM MinGW\n"; 
   cout << "File: " << __FILE__ << endl; 
   cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 

   //Data
  int n = 5; // deal this many cards 

  //hand operations
  for (int i = 0; i < n; i++) 
  { 
    int value = 1 + rand() % 13; 
    int suit = rand() % 4; 

    switch (value) //outputs of the diffrent possibilities of hands
  { 
     case 1: //case1
       cout << "Ace"; 
       break; 
                case 11: 
                        cout << "Jack"; 
                        break; 
                case 12: 
                        cout << "Queen"; 
                        break; 
                case 13: 
                        cout << "King"; 
                        break; 
                default: 
                        cout << value; 
                } // switch 

   	 	switch (suit) //outputs of the diffrent possibilities of suits
                { 
                case 0: 
                        cout << " of Spades" << endl; 
                        break; 
      		case 1: 
                        cout << " of Hearts" << endl; 
                        break; 
                case 2: 
                        cout << " of Diamonds" << endl; 
                        break; 
                case 3: 
                        cout << " of Clubs" << endl; 
                 } // switch 
    } // for 

}//main