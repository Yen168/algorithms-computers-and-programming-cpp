// Yen-An Chen
// Math 3300 Programming Assignment 3 - Program 2 grade.cpp 
// This program will read data from "scores.txt" and calculate ,then write the result into "grade.txt" 

#include<fstream>
#include<iomanip>

using namespace std;


int main()
{
   double ahw, aqz,apa; 
   
   double hw1, hw2, hw3, hw4, hw5, hw6;
   double qz1, qz2, qz3, qz4, qz5, qz6, qz7, qz8;
   double pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8, pa9, pa10; 
   double final;
   
   // open a file named "scores.txt"
   ifstream inFile;
   inFile.open("scores.txt");
   
   inFile >> hw1 >> hw2 >> hw3 >> hw4 >> hw5 >> hw6
          >> qz1 >> qz2 >> qz3 >> qz4 >> qz5 >> qz6 >> qz7 >> qz8
          >> pa1 >> pa2 >> pa3 >> pa4 >> pa5 >> pa6 >> pa7 >> pa8 >> pa9 >> pa10
          >> final;
   
   // to calculate the averages of homework, quizs and programming assignments
   ahw=(hw1 + hw2 + hw3 + hw4 + hw5 + hw6)/60;
   aqz=(qz1 + qz2 + qz3 + qz4 + qz5 + qz6 + qz7 + qz8)/80;
   apa=(pa1 + pa2 + pa3 + pa4 + pa5 + pa6 + pa7 + pa8 + pa9 + pa10)/100;
   
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
   
    return 0;
}


