#pragma once

// #ifndef CAR
// #define CAR

#include <iostream>
#include <fstream>
#include <string>

using namespace std; 

class Car 
{
  // Prototypes 
  public: 
  // Set value function 
  // void INITIALIZE (int id); 
  void INITIALIZE (int id, string make, string model, int year, int price); 

  // Return fuctions 
  int GET_id (); 
  string GET_make (); 
  string GET_model (); 
  int GET_year (); 
  int GET_price (); 

  // Decalrations
  private: 
  int id;
  string make;
  string model;
  int year; 
  int price; 
};


// #endif // END CAR