#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
#include<cmath>

using namespace std;

double polynomial(double[],int,double);
double derivative(double[],int,double);

int main(){
    
    int size,i;
    cout<<"What is the degree of the polynomial equation of the form f(x)=0? :";
    cin>>size;
    
    double coef[size+1],guess,solution,tmp;
    i=size;
    
    while(i>0){
    cout<<"Enter the coefficient of the x^"<<i<<" term: ";
    cin>>coef[i];
    i--;
    }
    
    cout<<"Enter the constant term: ";
    cin>>coef[0];
    
    cout<<"Enter a guess for the solution: ";
    cin>>guess;
    
    
    int k=0;
    
    while(k<1000){
    tmp=guess;
    solution=guess-polynomial(coef,size,guess)/derivative(coef,size,guess);
    guess=solution;
    cout<<"GUESS: "<<guess<<" SOL: "<<solution<<" TMP: "<<tmp<<endl;
    k++;
    }

 
    system("pause");
    return 0;            
    }

double polynomial(double coef[],int size,double guess){
    
    double result=0;
    
    while(size>=0){
        
        result+=coef[size]*pow(guess,size);
        size--;
        
        }
         
    return result;
    }

double derivative(double coef[],int size,double guess){
    
    double result=0;
    
     while(size>=1){
        
        result+=size*coef[size]*pow(guess,size-1);
        size--;
             
        }
         
    return result;
    }
