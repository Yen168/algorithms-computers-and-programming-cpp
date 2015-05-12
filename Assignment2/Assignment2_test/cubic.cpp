#include<iostream>
#include<iomanip>
#include<cstdlib>

using namespace std;

int cubic(double,double,double,double);

int main(){
    
    double a,b,c,d;
    
    cout << "This program calculates any points on the graph of y=f(x)=ax^3+bx^2+cx+d" << endl 
         << "where there is a horizontal tangent line." << endl << endl;
    
    cout << "Enter the x coordinate of the first point: ";
    cin >> a;
    cout << "Enter the y coordinate of the first point: ";
    cin >> b;
    cout << "Enter the x coordinate of the second point: ";
    cin >> c;
    cout << "Enter the y coordinate of the second point: ";
    cin >> d;
    
    line(a,b,c,d);
    
    
     
    system("pause");
    return 0;
    }

int line(double a,double b,double c,double d){
    
    double m, b;
    m =(y2-y1)/(x2-x1);
    b = y1-m*x1;
    
    cout << "m= " << m << endl;
    cout << "b= " << b << endl;
    cout << endl << "The equation for the line through (" << x1 << "," << y1 << ") and (" << x2 << "," << y2 << ") is y=" << m << "x" << showpos << b << endl;
   
    return 0;
        
    }
