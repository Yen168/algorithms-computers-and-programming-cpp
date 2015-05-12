#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
#include<cmath>

using namespace std;

int main(){
    
    int n,sq;
    
    cout<<"Enter an integer: ";
    cin>>n;
    
    sq=sqrt(n);
    
    for(int i=sq*-1;i<0;i++) {if(n%i==0) cout<<i<<" and "<<n/i<<endl;   }   
     
     
   
   /* 
        
    while(sq<0){
             
    if(n%sq==0) cout<<sq<<" and "<<n/sq<<endl;          
    sq++;
      
        }
    while(sq<0){
             
    if(n%sq==0) cout<<sq<<" and "<<n/sq<<endl;          
    sq++;
      
        }    
        
     */   
 
    system("pause");
    return 0;            
    }
