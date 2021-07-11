//this is the implementation file for the car class
//include the car.h file 
#include <iostream>
#include "car.h"

/*Function to set the make of each car
        //Values are set according to the parameters
        //Postconditions: mk = make;
        //This function checks whether the values of make is valid. If the value is invalid, the default value "" is assigned. */
        void setMake (char make[MAX_CHAR]);
         

        void setModel (char model[MAX_CHAR]);
        //Function to set the model of each car
        //Values are set according to the parameters
        //Postconditions: mdl = model;
        //This function checks whether the values of model is valid. If the value is invalid, the default value "" is assigned.

        void setYear (int year);
        //Function to set the make of each car
        //Values are set according to the parameters
        //Postconditions: mk = make;
        //This function checks whether the values of year are valid. If the value is invalid, the default value 0 is assigned.

        void getMake (char make[MAX_CHAR]);
        //Function to return the car make (back to the class?) FIXME delete bf turning in
        //Postcondition: mk = make;

        void getModel (char model[MAX_CHAR]);
        //Function to return the car model (back to the class?) FIXME delete bf turning in
        //Postcondition: mdl = model;

        void getMake (char make[MAX_CHAR]);
        //Function to return the car make (back to the class?) FIXME delete bf turning in
        //Postcondition: yr = year;

        void printCar () const; //so the const is to stop the values from being changed once they're entered? My book shows this but I don't get it... 
        //Function to print the car information
        //Postcondition: The car information is printed in the format: 
        //Make: 
        //Model:
        //Year: 
        //FIXME not sure if this is right, but I think that it is. 
        car ();
        //default constructor 
        //sets the default make to "", model to "", and year to 0

