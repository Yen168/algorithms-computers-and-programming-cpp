// Yen-An Chen
// Math 3300 Programming Assignment 1 - Program 2 
// This program which contains a function which calculates and shows values of an inverse of a matrix 

#include<iostream>
#include<cstdlib>
#include<cmath>
//#include<iomanip>

using namespace std;

//function declaration
double inverse(double, double, double, double);

int main(){
    
    inverse(-2,-5,1,3); 
    
    inverse(1,2,3,4);
    
    system("PAUSE");
    
    return 0;
    
    }
    
 //function definition
 double inverse(double a, double b, double c, double d){
        
        double f=0;
        
        f = a*d-b*c;
        
        cout << "The matrix is: \n" << "(" << a << " " << b << ")\n" << "(" << c << " " << d <<")\n\n";
         
        cout<< "The inverse of the matrix is:\n"; 
        
        cout<< "(" << d/f<< " " << -b/f << ")\n(" << -c/f << " " << a/f << ")\n\n\n"; 
        
        return 0;
        
        } 
 
 
