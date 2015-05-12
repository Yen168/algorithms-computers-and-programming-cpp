#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
#include<cmath>

using namespace std;

int main(){
    
    int d,i;
    cout<<"What is the degree of the polynomial equation of the form f(x)=0? :";
    cin>>d;
    
    double coef[d+1];
    i=d;
    
    while(i>=0){
    if(i==0
    ){
    cout<<"Enter the constant term: ";
    cin>>coef[i];         
    }else{
    cout<<"Enter the coefficient of the x^"<<i<<" term: ";
    cin>>coef[i];
    }           
    i--;                     
    }
    
    
    system("pause");
    return 0;            
    }
