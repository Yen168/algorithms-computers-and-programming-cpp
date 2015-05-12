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
        
        cout<<"This is a bad guess. Try a different value.\n";
        cout<<"Enter a guess for the solution: ";
        cin>>guess;
        
        }
    
    int k=1;
    char c='y';
    
    while(c=='y'){
    
    tmp=guess;
    
    guess-=polynomial(coef,size,guess)/derivative(coef,size,guess);
    
   // cout<<"K: "<<k<<" SOL: "<<guess<<" TMP: "<<tmp<<" BTW: "<<abs(tmp-guess)<<endl;
    
    if(abs(tmp-guess)<0.001) break;
    if(k%1000==0){
        
        cout<<"I went through the process "<<k<<" times, and haven't yet found a solution.\n";
        cout<<"Do you want me to try some more? Enter y if yes, any other key if no : ";
        cin>>c; 
        
        }
     
    k++;
    
    }
    
    if(c!='y') cout<<"No solution has been found."<<endl;
    else cout<<"One solution is x="<<guess<<endl;
    
    //cout<<"K: "<<k-1<<" SOL: "<<guess<<" TMP: "<<tmp<<" BTW: "<<abs(tmp-guess)<<endl;
    
    
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
