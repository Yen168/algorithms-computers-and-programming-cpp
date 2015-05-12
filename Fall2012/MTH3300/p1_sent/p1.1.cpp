// Yen-An Chen
// Math 3300 Programming Assignment 1 - Program 1
// This program which contains a function which calculates values of the function f(x)

#include<iostream>
#include<cstdlib>
#include<cmath> 

using namespace std;

//function declaration
double f(double);

int main(){
    
    cout << "f(x)= x^3-3x^2+5x-6" << endl;
    
    cout << "f(100.81)= " << f(100.81) << endl;
    
    cout << "f(-74.74)= " << f(-74.74) << endl;
    
    cout << "f(50^(1/2))= " << f(sqrt(50)) << endl;
    
    system("PAUSE");
    
    return 0;
    
    }
    
 //function definition
 double f(double x){
        
        return x*x*x-3*x*x+5*x-6;
        
        } 
 
 
