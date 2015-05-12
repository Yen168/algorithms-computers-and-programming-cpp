// Yen-An Chen
// Math 3300 Programming Assignment 5 - Program 1 bestfit.cpp 
// This program will calculate the equation for best-fit line and also the correlation constant.

#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
#include<cmath>

using namespace std;

int main(){
    
    int n=0;
    double x,y,xsum=0,ysum=0,xysum=0,x2sum=0,y2sum=0;
    string filename;
    ifstream inFile;
    
    cout<<"Enter the name of the file containing your data points: ";
    cin>>filename;
    
    inFile.open(filename.c_str());
    

    if(inFile.fail()){
    cout << filename << " does not exist.\n";
    system("pause");
    return 0;
    }

//reads from the file until there are no more lines of information left
        
    while(inFile.good()){
        
    inFile>>x;
    inFile>>y;    
    xsum+=x;
    ysum+=y;
    xysum+=x*y;
    x2sum+=x*x;
    y2sum+=y*y;
    n++;     
        }
    
// calculate the equation for best-fit line and also the correlation constant    
    
    cout<<"The best fit line through your data is : "<<(((xysum/n)-(xsum/n)*(ysum/n)))/((x2sum/n)-(xsum/n)*(xsum/n))
        <<"x+"<<(ysum/n)-(xsum/n)*(((xysum/n)-(xsum/n)*(ysum/n)))/((x2sum/n)-(xsum/n)*(xsum/n))<<endl;
    cout<<"The linear correlation coefficient is: "<<(xysum-n*(xsum/n)*(ysum/n))/sqrt((x2sum-n*pow(xsum/n,2))*(y2sum-n*pow(ysum/n,2)))<<endl;    
 
 
    system("pause");
    return 0;            
    }
