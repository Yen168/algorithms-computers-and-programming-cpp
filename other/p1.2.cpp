// Yen-An Chen
// Math 3300 Programming Assignment 1 - Program 2 
// This program which contains a function which calculates and shows values of an inverse of the matrix 

#include<iostream>
#include<cstdlib>
#include<math.h>

using namespace std;

//function declaration
double inverse(double, double, double, double);

int main(){
    
    double a=0, b=0, c=0, d=0; 

    cout << "(a b)\n(c d)\n\n";
    
    cout << "a= "; 
    cin >> a; 
    
    cout << "b= "; 
    cin >> b; 
    
    cout << "c= "; 
    cin >> c; 
    
    cout << "d= "; 
    cin >> d;    
    
    cout << "The matrix is: \n" << "(" << a << " " << b << ")\n" << "(" << c << " " << d <<")\n";
    
    inverse(a,b,c,d); 
    
    system("PAUSE");
    
    return 0;
    
    }
    
 //function definition
 double inverse(double a, double b, double c, double d){
        
        double f=0;
        f = a*d-b*c;
        
        cout<< "The inverse of the matrix is:\n"; 
        cout<< "(" << d/f<< " " << -b/f << ")\n(" << -c/f << " " << a/f << ")\n"; 
        
        
        
        return 0;
        
        } 
 
 
