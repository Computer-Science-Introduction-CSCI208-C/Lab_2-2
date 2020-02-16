#include "Car.h" // specification of class 
#include <iostream>
#include <fstream>
#include <string>

using namespace std; 

// Set values ------------------
// void Car::INITIALIZE(int newId)

void Car::INITIALIZE
(int newId, string newMake, string newModel, int newYear, int newPrice)
{
  id = newId;  
  make = newMake;
  model = newModel;
  year = newYear;
  price = newPrice; 
}


// Return Values ---------------

int Car::GET_id() 
{
  return id; 
}

string Car::GET_make()
{
  return make; 
}

string Car::GET_model()
{
  return model; 
}

int Car::GET_year()
{
  return year; 
}

int Car::GET_price()
{
  return price; 
}