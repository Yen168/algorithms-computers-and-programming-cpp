// Yen-An Chen
// Math 3300 Programming Assignment 2 - Program 1 
//  

#include<iostream>
#include<cstdlib>
#include<fstream>
//#include<cmath>
#include<iomanip>
//#include<string>

using namespace std;


int main()
{
   double thw, hw1, hw2, hw3, hw4, hw5, hw6;
   double qz1, qz2, qz3, qz4, qz5, qz6, qz7, qz8;
   double pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8, pa9, pa10; 
   double final;
   
   ifstream inFile;
   inFile.open("scores.txt");
   inFile >> hw1 >> hw2 >> hw3 >> hw4 >> hw5 >> hw6
          >> qz1 >> qz2 >> qz3 >> qz4 >> qz5 >> qz6 >> qz7 >> qz8
          >> pa1 >> pa2 >> pa3 >> pa4 >> pa5 >> pa6 >> pa7 >> pa8 >> pa9 >> pa10
          >> final;
   
   ofstream outFile; 
   outFile.open("results.txt");
   
   thw =hw1 + hw2 + hw3 + hw4,+ hw5 + hw6;
   
   outFile << "Homework " << thw/6 << "%" << thw*20/6;
   
   
      
    system("PAUSE");
    
    return 0;
}


