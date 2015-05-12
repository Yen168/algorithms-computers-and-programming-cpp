
// Yen-An Chen
// Math 3300 Programming Assignment 2 - Program 2 cubic.cpp
// This program which contains a function which calculates point coordinate values of a horizontal tangent line on the graph of f(x)

#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<cmath>

using namespace std;

//function declaration
int cubic(double,double,double,double);

int main(){
    
    double a,b,c,d;
    
    cout << "This program calculates any points on the graph of y=f(x)=ax^3+bx^2+cx+d" << endl 
         << "where there is a horizontal tangent line." << endl << endl;
    
    cout << "Enter your values for a, b, c and d: ";
    cin >> a >> b >> c >> d;
    
    cubic(a,b,c,d);
    
    
    system("pause");
    
    return 0;
    
    }

//function definition
int cubic(double a,double b,double c,double d){
    
    double x1, x2, y1, y2, n;
   
   // delta  
    n=2*2*b*b-4*3*a*c;
    
    if (n>=0 && a!=0){
     
    x1=(-2*b+sqrt(2*2*b*b-4*3*a*c))/(2*3*a);
    
    x2=(-2*b-sqrt(2*2*b*b-4*3*a*c))/(2*3*a);
    
    y1=a*pow(x1,3)+b*pow(x1,2)+c*x1+d;
    
    y2=a*pow(x2,3)+b*pow(x2,2)+c*x2+d;
    
    cout << "\nThe graph of y=f(x) has a horizontal tangent line at: \n("
         << fixed <<setprecision(3) << x1 << ", " << y1 << ") and ("
         << x2 << ", " << y2 << ") \n\n";
    }
    
    else cout<<"No solution!\n\n";
    
    return 0;
        
    }
