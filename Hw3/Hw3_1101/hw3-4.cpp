#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>


using namespace std;

int factorial(int);
int round(double);

int main(){
   int n;
    double k;
    cin>>n;
    cin>>k;
    
    cout<<factorial(n)<<endl;
    cout<<round(k)<<endl;
    
    system("pause");
    return 0;
    }

int factorial(int n){
    
    int factorial=1;
    
    if(n==0) return factorial;   
    
    while(n!=0){  
        factorial*=n;
        n--;
        }
    
    return factorial;
    }    

int round(double n){
    
    int round = n;
    if((n-round)>=0.5) return round+1;
    else return round;
    
    }
