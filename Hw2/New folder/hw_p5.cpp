#include<fstream>
#include<string>
#include<cmath>
#include<iomanip>
#include<cstdlib>
#include<iostream>

using namespace std;

int main(){

    double a,b;
    cin>>a>>b;
    
    char choice;
    cin>>choice;
    switch(choice){
    
    case 'A': 
         
    if(a>b) cout<<"The maximum of the 2 numbers is "<< a <<endl;
    else cout<<"The maximum of the 2 numbers is "<< b <<endl;        
    break;         
    
    case 'B':
          
    if(a>b) cout<<"The minimum of the 2 numbers is "<< b<<endl;
    else cout<<"The minimum of the 2 numbers is "<< a<<endl;              
    break;         
            
    case 'C': 

    cout<<"The average of the 2 numbers is "<< (a+b)/2<<endl;        
    break;         
    
    case 'D':
         
    cout<<"The distance between the 2 numbers is "<< abs(a-b)<<endl;          
    break;         
           
    default: break;         
             
    }
    
    system("pause");
    return 0;
    
    }

