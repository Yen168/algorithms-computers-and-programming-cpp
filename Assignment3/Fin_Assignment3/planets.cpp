// Yen-An Chen
// Math 3300 Programming Assignment 3 - Program 1 planets.cpp
// This program which contains a function which calculates conversion values of user's weight and age on the other planets in our solar system and moon.

#include<iostream>
#include<cstdlib>
#include<fstream>
#include<iomanip>

using namespace std;

//function declaration
int conversion(double,double);

int main()
{
   double  weight, year; 
   
   cout << "Enter your weight in lbs: "; 
   cin >> weight;
   cout << "Enter your age in years: "; 
   cin >> year;
   
   conversion(weight,year);
   
      
    system("PAUSE");
    
    return 0;
}
 
//function definition
int conversion(double weight,double year){
    
    // create a file named "table.txt"
    ofstream outFile;
    outFile.open("table.txt");
    
    // display all values correct to 3 decimal
    outFile << setprecision(3) << fixed; 
    
    // create a table
    outFile << left << setw(10) << "" << right << setw(8) << "lbs" << right << setw(11)<< "years" << endl ;
    outFile << left << setw(10) << "Earth" << right << setw(8) << weight << right << setw(11)<< year << endl<< endl;
    
    outFile << left << setw(10) << "Mercury" << right << setw(8) << weight*0.380 << right << setw(11)<< year*4.155 << endl;
    outFile << left << setw(10) << "Venus" << right << setw(8) << weight*0.910 << right << setw(11)<< year*1.625 << endl;
    outFile << left << setw(10) << "Moon" << right << setw(8) << weight*0.166 << right << setw(11)<< year*1.000 << endl;
    outFile << left << setw(10) << "Mars" << right << setw(8) << weight*0.376 << right << setw(11)<< year*0.532 << endl;
    outFile << left << setw(10) << "Jupiter" << right << setw(8) << weight*2.528 << right << setw(11)<< year*0.084 << endl;
    outFile << left << setw(10) << "Saturn" << right << setw(8) << weight*1.065 << right << setw(11)<< year*0.034 << endl;
    outFile << left << setw(10) << "Uranus" << right << setw(8) << weight*0.886 << right << setw(11)<< year*0.012 << endl;
    outFile << left << setw(10) << "Neptune" << right << setw(8) << weight*1.140 << right << setw(11)<< year*0.006 << endl;
    
    return 0;
    
    }


/*
conversion rates

Earth        1.000     1.000

Mercury      0.380     4.155
Venus        0.910     1.625
Moon         0.166     1.000
Mars         0.376     0.532
Jupiter      2.528     0.084
Saturn       1.065     0.034
Uranus       0.886     0.012
Neptune      1.140     0.006
*/
