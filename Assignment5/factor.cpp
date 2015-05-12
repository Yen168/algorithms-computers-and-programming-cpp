// Yen-An Chen
// Math 3300 Programming Assignment 5 - Program 2 factor.cpp
// The program will calculate all factors of a single integer. 

#include<iostream>
#include<cstdlib>
#include<cmath>

using namespace std;

int factor(int);
int main(){
    
    int n,primeresults;
    
    cout<<"Enter an integer: ";
    cin>>n;
    cout<<"The factors of "<<n<<" are:\n";
    
    // output all factors and get a meaningful return
    primeresults=factor(n);
    
    if(n>1&&primeresults==1)cout<<n<<" is a prime number.\n";
    else cout<<n<<" is not a prime number.\n";
    
    system("pause");
    return 0;            
    
    }

int factor(int n){
    
    int sq, primetest=0;
    
    sq=n;
    
    if(n<0) sq*=-1;  
    
    sq=sqrt(sq);
    
    for(int i=sq*-1;i>=sq*-1&&i<=sq;i++){//sq>=i>=-sq
    
    if(i>0&&n<0&&i*sq*-1==n) continue;// to avoid double solutions
    if(i==0) continue; // to avoid error when value/i
                  
    if(n%i==0){
               
               if(i>=1) primetest++; // positive number ;when primetest==1, the number is prime
               cout<<i<<" and "<<n/i<<endl;
    }
        }
    
    return primetest;
    
    }


