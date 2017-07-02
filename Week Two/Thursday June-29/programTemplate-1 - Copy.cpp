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
  int amountOwed = 289975;
  int cashPaid = 32765;
  int totalChangeDue = cashPaid-amountOwed;
  int thousand100 = totalChangeDue/100000;
  int thousand10 = totalChangeDue/10000;
  int thousand5 = totalChangeDue/5000;
  int thousand = totalChangeDue/1000;
  int hundred5 = totalChangeDue/500;
  int hundred = totalChangeDue/100;
  int fifty = totalChangeDue/50;
  int twenty = totalChangeDue/20;
  int ten = totalChangeDue/10;
  int five = totalChangeDue/5;
  int two = totalChangeDue/2;
  int one = totalChangeDue;

  cout <<" amount owed is "<< amountOwed <<"\n";
  cout <<" amount paid is "<< amountPaid <<"\n";
  cout <<" the total change due is "<< totalChangeDue <<"\n";
  cout <<" that is the same as " << thousand100 << " $100000 bills \n";
  cout <<" or " << thousand10 << " $10000 bills \n";
  cout <<" or " << thousand5 << " $5000 bills \n";
  cout <<" or " << thousand << " $1000 bills \n";
  cout <<" or " << hundred5 << " $500 bills \n";
  cout <<" or " << hundred << " $100 bills \n";
  cout <<" or " << fifty << " $50 bills \n";
  cout <<" or " << twenty << " $20 bills \n";
  cout <<" or " << ten << " $10 bills \n";
  cout <<" or " << five << " $5 bills \n";
  cout <<" or " << two << " $2 bills \n";
  cout <<" or " << one << " $1 bills \n";


}//main