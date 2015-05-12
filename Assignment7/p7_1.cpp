// Yen-An Chen
// Math 3300 Programming Assignment 7 - Program 1 p7_1.cpp
// The program will solve an equation of the form f(x)=0 using a sequence of approximations by Newton's method.

#include<iostream>
#include<cstdlib>
#include<cmath>

using namespace std;

double polynomial(double[],int,double);
double derivative(double[],int,double);

int main(){
    
    int size,i;
    
    do{
    cout<<"What is the degree of the polynomial equation of the form f(x)=0? :";
    cin>>size;
    }while(size<0);
    
    double coef[size+1],guess,tmp;
    
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
    
    while(derivative(coef,size,guess)==0){
        
        if(size==0) break;
        
        cout<<"This is a bad guess. Try a different value.\n";
        cout<<"Enter a guess for the solution: ";
        cin>>guess;
        
        }
    
    int k=1;
    char c='y';
    
    while(c=='y'){
    
    if(size==0) break;
    
    tmp=guess;
    
    guess-=polynomial(coef,size,guess)/derivative(coef,size,guess);
    
    
    if(abs(tmp-guess)<0.001) break;
    if(k%1000==0){
        
        cout<<"I went through the process "<<k<<" times, and haven't yet found a solution.\n";
        cout<<"Do you want me to try some more? Enter y if yes, any other key if no : ";
        cin>>c; 
        
        }
     
    k++;
    
    }
    
    if(c!='y') cout<<"No solution has been found."<<endl;
    else if(size==0&&coef[0]!=0) cout<<"This f(x)=0 does not exist."<<endl;
    else cout<<"One solution is x="<<guess<<endl;
     
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
