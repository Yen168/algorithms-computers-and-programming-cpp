#include<iostream>
#include<iomanip>
#include<cstdlib>

using namespace std;

int line(double,double,double,double);

int main(){
    
    double x1,x2,y1,y2;
    
    cout << "Enter the x coordinate of the first point: ";
    cin >> x1;
    cout << "Enter the y coordinate of the first point: ";
    cin >> y1;
    cout << "Enter the x coordinate of the second point: ";
    cin >> x2;
    cout << "Enter the y coordinate of the second point: ";
    cin >> y2;
    
    line(x1,x2,y1,y2);
    
    
     
    system("pause");
    return 0;
    }

int line(double x1,double x2,double y1,double y2){
    
    double m, b;
    m =(y2-y1)/(x2-x1);
    b = y1-m*x1;
    
    cout << "m= " << m << endl;
    cout << "b= " << b << endl;
    cout << endl << "The equation for the line through (" << x1 << "," << y1 << ") and (" << x2 << "," << y2 << ") is y=" << m << "x" << showpos << b << endl;
    // (8,6), (5,6)
    return 0;
        
    }
