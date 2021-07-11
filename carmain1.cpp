/* carmain1.cpp 
 * Please don't rewrite this file
 * I will be using the exact
 * same file below when grading
 * 
 * 
 * Please put a constant called MAX_CHAR
 * in your car.h file.
 */

#include <iostream>
#include "car.h"

using namespace std;

int main()
{
    char cmake[MAX_CHAR] = "Honda";
    char cmodel[MAX_CHAR] = "Civic";
    int cyear = 2017;
	Car sedan;  // calls the default constructor
    // calls parameterized constructor.
	Car compact(cmake, cmodel, cyear);

    // input 
    char imake[MAX_CHAR];
    char imodel[MAX_CHAR];
    int iyear;

    // output 
    char* omake;
    char* omodel;
    int oyear;
    
    //Print out values before setting them
    cout << "Sedan before initialization: " << endl;
    omake = sedan.getMake();
    cout << "Make: " << omake << endl;

    omodel = sedan.getModel();
    cout << "Model: " << omodel << endl;

    oyear = sedan.getYear();
    cout << "Year: " << oyear << endl;
    
    cout << "Compact values " << endl;
    omake = compact.getMake();
    cout << "Make: " << omake << endl;

    omodel = compact.getModel();
    cout << "Model: " << omodel << endl;

    oyear = compact.getYear();
    cout << "Year: " << oyear << endl;
    
    //set the values for sedan
    cout << "Setting values for sedan: " << endl;
    cout << "Enter make: ";
    cin.getline(imake, MAX_CHAR-1);
    sedan.setMake(imake);

    cout << "Enter model: ";
    cin.getline(imodel, MAX_CHAR-1);
    sedan.setModel(imodel);
    
    cout << "Enter year: ";
    cin >> iyear;
    cin.ignore(200, '\n');
    sedan.setYear(iyear);
   
    // getting the data back out
    cout << "printing values for sedan: " << endl;
    omake = sedan.getMake();
    cout << "Make: " << omake << endl;

    omodel = sedan.getModel();
    cout << "Model: " << omodel << endl;

    oyear = sedan.getYear();
    cout << "Year: " << oyear << endl;
    
    return 0;   
 }
    
  
