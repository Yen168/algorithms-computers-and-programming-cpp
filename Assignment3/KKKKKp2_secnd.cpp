// Yen-An Chen
// Math 3300 Programming Assignment 3 - Program 2 grade.cpp 
// This program will read data from "scores.txt" and calculate ,then write the result into "grade.txt" 

#include<fstream>
#include<iomanip>
#include<iostream>
#include<cstdlib>
using namespace std;


int main()
{
   int i;
   double ahw=0, aqz=0,apa=0; 
   
   double hw[6];
   double qz[8];
   double pa[10]; 
   double final;
   
   // open a file named "scores.txt"
   ifstream inFile;
   inFile.open("scores.txt");
   
   for(i=0;i<6;i++)
    {
       inFile>>hw[i]; 
       ahw=ahw+hw[i]; 
        cout<<ahw<<endl;
        }
  
       ahw=ahw/60; 
        
   for(i=0;i<8;i++)
    {
       inFile>>qz[i]; 
       aqz=aqz+qz[i];  
        }
   
      aqz=aqz/80;  
   
   for(i=0;i<10;i++)
    {
       inFile>>pa[i]; 
       apa=apa+pa[i];  
        }
   
   apa=apa/100;
   
   inFile>>final;
   
   // to calculate the averages of homework, quizs and programming assignments
   
   
   // create a file named "grade.txt"
   ofstream outFile; 
   outFile.open("grade.txt");
   
   // display all values correct to 2 decimal
   outFile << setprecision(2) << fixed; 
   outFile << left << setw(11) << "Homework" << right << setw(6) << ahw*100 << "% " << right << setw(8) << ahw*20 << endl;
   outFile << left << setw(11) << "Quizzes" << right << setw(6) << aqz*100  << "% " << right << setw(8) << aqz*10 << endl;
   outFile << left << setw(11) << "Programs" << right << setw(6) << apa*100 << "% " << right << setw(8) << apa*55 << endl;
   outFile << left << setw(11) << "Exam" << right << setw(6) << final/90*100 << "% " << right << setw(8) << final/90*15 << endl;   
   
   outFile << "Your final course score is: " << ahw*20+aqz*10+apa*55+final/90*15 << endl;             
   
   system("pause");
    return 0;
}


