// Yen-An Chen
// Math 3300 Programming Assignment 6 - Program 1 nthprime.cpp
// The program will calculate and display the n-th prime number.

#include<iostream>
#include<cstdlib>

using namespace std;

int isPrime(int);

int main(){
    
    int nth,n=2;
    
    cout<<"Enter a positive integer: ";
    cin>>nth;
    
    while(nth<=0){
    cout<<"That is not a positive integer, try again: ";
    cin>>nth;                         
    }
   
   int sum=0; 
   while(sum!=nth){  
  
    sum+=isPrime(n); 
    n++;                  

    }
    cout<<"The "<<nth<<"th prime number is "<<n-1<<endl; 
    
    system("pause");
    return 0;
    }

//Primality test

int isPrime(int n){
    
 for (int i=2; i*i<=n; i++)
	{
		if (n%i == 0)
		{
			return 0;
		}
	}
	
	return 1;
    
    }
