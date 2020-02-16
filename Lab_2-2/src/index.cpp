/*******************************************
 * BY: Jessica Dosseh 
 * CLASS: CSCI 208 001
 * LABNAME: Lab 2-2 [Part 2-Classes]
 * DESCRIPTION: For this lab, you will create a program that represents a small car dealership’s inventory. 
 * INPUT: Data from text file list.txt => initialized class 
 * OUTPUT: To text file luxury or economy
*********************************************/

#include "Car.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std; 

const int fileSize = 1 + 5;

struct temp
{
    int temp_id;
    string temp_make;
    string temp_model;
    int temp_year;
    int temp_price;
}; 

int main()
{
  // main() Class declaration
  Car carSpec[fileSize]; 
  temp temp; 
  // dummy variable initialization
  carSpec[0].INITIALIZE(0, "make", "model", 0000, 00000); 

  // input output file stream 
  ifstream inData;
  ofstream outData;

  inData.open("list.txt");
  if(!inData.is_open())
  {
    cout << "could not open file.";
    return 1;
  }

  while(!inData.eof())
  {
    for (int i = 1; i < fileSize; i++)
    {
      // Store valiables in tmporary struct 
      inData >> temp.temp_id; 
      inData >> temp.temp_make;
      inData >> temp.temp_model;
      inData >> temp.temp_year;
      inData >> temp.temp_price;

      // pass temp values to initialization function
      carSpec[i].INITIALIZE
            (temp.temp_id, temp.temp_make, temp.temp_model, temp.temp_year, temp.temp_price); 
    }
  }

  for (int i = 1; i < fileSize; i++)
  {
    // PASS DATA OUTPUT INTO LUXURY OR ECONOMIC TEXT FILES
      if (carSpec[i].GET_price() > 40000)
      {
        // append carlist.data to "luxury.txt"
        outData.open("luxury.txt", ios_base::app);
        outData << carSpec[i].GET_id() << " "
                << carSpec[i].GET_make() << " "
                << carSpec[i].GET_model() << " "
                << carSpec[i].GET_year() << " "
                << carSpec[i].GET_price() << endl;
        outData.close();  
      } 
      else
      {
        // append carlist.data to "economy.txt"
        outData.open("economy.txt", ios_base::app);
        outData << carSpec[i].GET_id() << " "
                << carSpec[i].GET_make() << " "
                << carSpec[i].GET_model() << " "
                << carSpec[i].GET_year() << " "
                << carSpec[i].GET_price() << endl;
        outData.close();  
      } 
  }

return 0; 
}